/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:44:36 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/09 10:05:57 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	list_size(t_unit_test *testlist)
{
	int		ret;

	ret = 0;
	if (testlist == NULL)
		return (0);
	while (testlist != NULL)
	{
		testlist = testlist->next;
		ret++;
	}
	return (ret);
}
