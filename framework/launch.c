/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshigemu <hshigemu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:43:17 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/10 22:09:58 by hshigemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libunit.h"

static t_id_status	*get_status(t_unit_test *testlist, int size)
{
	int				i;
	t_id_status		*t;
	int				status;
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
	print_launch_result(size, ok_cnt);
	return (0);
}

int	*fork_process(int size, t_unit_test *testlist)
{
	int		i;
	pid_t	pid;
	int		*process;

	process = malloc(sizeof(int) * size);
	if (process == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		pid = fork();
		if (pid == -1)
			return (NULL);
		if (pid == 0)
			run_test(testlist);
		else
			process[i] = pid;
		testlist = testlist->next;
		i++;
	}
	return (process);
}

int	launch_tests(t_unit_test **testlist)
{
	int				size;
	int				*process;
	t_unit_test		*tmp;
	t_id_status		*t;

	if (testlist == NULL)
		return (-1);
	size = list_size(*testlist);
	tmp = *testlist;
	process = fork_process(size, *testlist);
	if (process == NULL)
		return (free_testlist(testlist));
	t = get_status(tmp, size);
	print_all(process, t, size, tmp);
	free(t);
	free(process);
	free_testlist(testlist);
	return (0);
}
