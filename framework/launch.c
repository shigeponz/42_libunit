/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:43:17 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/09 10:07:44 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static int	run_test(t_unit_test *testlist)
{
	print_name(testlist->test_name);
	print_result(0);
	free(testlist);
	return (0);
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
	int		size;
	int		i;
	int		result;
	int		ok_cnt;

	i = 0;
	ok_cnt = 0;
	if (testlist == NULL)
		return (-1);
	size = list_size(*testlist);
	while (i < size)
	{
		result = run_test(*testlist);
		if (result == 0)
			ok_cnt++;
		*testlist = (*testlist)->next;
		i++;
	}
	print_launch_result(size, ok_cnt);
	return (0);
}
