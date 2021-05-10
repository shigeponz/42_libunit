/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_run.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshigemu <hshigemu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:44:21 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/10 19:45:50 by hshigemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libunit.h"

int	run_test(t_unit_test *testlist)
{
	int		ret;

	ret = testlist->f();
	if (ret == 0)
		exit(0);
	else
		exit(1);
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
