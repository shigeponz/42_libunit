/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshigemu <hshigemu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:43:17 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/09 14:42:18 by hshigemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libunit.h"

static int	run_test(t_unit_test *testlist)
{
	int		ret;

	ret = testlist->f();
	if (ret)
		exit(0);
	else
		exit(1);
}

static int	get_status(t_unit_test *testlist, int size)
{
	int		i;
	int		ok_cnt;
	int		status;

	i = 0;
	ok_cnt = 0;
	while (i < size)
	{
		wait(&status);
		print_name(testlist->test_name);
		testlist = testlist->next;
		if (status == 0)
			ok_cnt++;
		print_result(status);
		i++;
	}
	return (ok_cnt);
}

int	load_test(t_unit_test **testlist, char *test_name, int (*f)(void))
{
	t_unit_test	*new;
	t_unit_test *tmp;

	if (!testlist)
		return (-1);
	new = malloc(sizeof(t_unit_test));
	if (!new)
		return (-1);
	new->test_name = test_name;
	new->f = f;
	new->next = NULL;
	if (!*testlist)
		*testlist = new;
	else
	{
		tmp = *testlist;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (0);
}

int		launch_tests(t_unit_test **testlist)
{
	int				i;
	int				size;
	t_unit_test		*tmp;
	pid_t			*pid;

	i = 0;
	if (testlist == NULL)
		return (-1);
	size = list_size(*testlist);
	pid = malloc(sizeof(pid_t) * size);
	tmp = *testlist;
	if (pid == NULL)
		return (-1);
	while (i < size)
	{
		pid[i] = fork();
		if (pid[i] == 0)
			run_test(*testlist);
		*testlist = (*testlist)->next;
		i++;
	}
	i = 0;
	print_launch_result(size, get_status(tmp, size));
	return (0);
}
