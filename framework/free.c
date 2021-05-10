/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshigemu <hshigemu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 21:56:36 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/10 23:03:10 by hshigemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libunit.h"

int	free_testlist(t_unit_test **testlist)
{
	t_unit_test		*tmp;

	while (*testlist != NULL)
	{
		tmp = (*testlist)->next;
		free(*testlist);
		*testlist = tmp;
	}
	return (-2);
}
