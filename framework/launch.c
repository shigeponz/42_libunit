/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshigemu <hshigemu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:43:17 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/10 00:26:32 by hshigemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libunit.h"

static int	run_test(t_unit_test *testlist)
{
	int		ret;

	ret = testlist->f();
	if (ret == 0)
		exit(0);
	else
		exit(1);
}

static t_id_status	*get_status(t_unit_test *testlist, int size)
{
	int		i;
	t_id_status	*t;
	int		status;
	t_unit_test		*tmp;

	i = 0;
	tmp = testlist;
	t = malloc(sizeof(t_id_status) * size);
	while (i < size)
	{
		t[i].id = wait(&status);
		t[i].status = status;
		i++;
	}
	return (t);
}

int	load_test(t_unit_test **testlist, char *test_name, int (*f)(void))
{
	t_unit_test		*new;
	t_unit_test		*tmp;

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

int	find_child(int key, t_id_status *t, int size)
{
	int		i;
	int		ret;
	
	i = 0;
	ret = 0;
	while (i < size)
	{
		if (t[i].id == key)
			return (t[i].status);
		i++;
	}
	return (-1); 
}

int	print_all(int *process, t_id_status *t, int size, t_unit_test *testlist)
{
	int		i;
	int		ok_cnt;
	int		status;

	i = 0;
	ok_cnt = 0;
	while (i < size)
	{
		status = find_child(process[i], t, size);
		print_name(testlist->test_name);
		print_result(status);
		if (status == 0)
			ok_cnt++;
		testlist = testlist->next;
		i++;
	}
	return (ok_cnt);
}

int	launch_tests(t_unit_test **testlist)
{
	int				i;
	int				size;
	int				*process;
	t_unit_test		*tmp;
	pid_t			*pid;
	t_id_status		*t;

	i = 0;
	if (testlist == NULL)
		return (-1);
	size = list_size(*testlist);
	pid = malloc(sizeof(pid_t) * size);
	process = malloc(sizeof(int) * size);
	tmp = *testlist;
	if (pid == NULL)
		return (-1);
	while (i < size)
	{
		pid[i] = fork();
		if (pid[i] == 0)
			run_test(*testlist);
		else
			process[i] = pid[i];
		*testlist = (*testlist)->next;
		i++;
	}
	i = 0;
	t = get_status(tmp, size);
	print_launch_result(size, print_all(process, t, size, tmp));
	return (0);
}
