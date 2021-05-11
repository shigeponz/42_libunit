/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:54:05 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/11 19:51:43 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_isdigit.h"
#include "libunit.h"

int	isdigit_launcher(void)
{
	int				ret;
	t_unit_test		*testlist;

	ret = 0;
	testlist = NULL;
	print_title("ISDIGIT");
	ret += load_test(&testlist, "0 test", &test_isdigit_0);
	ret += load_test(&testlist, "10 test", &test_isdigit_10);
	ret += load_test(&testlist, "50 test", &test_isdigit_50);
	ret += load_test(&testlist, "50+256 test", &test_isdigit_50_add_256);
	ret += load_test(&testlist, "50-256 test", &test_isdigit_50_sub_256);
	ret += load_test(&testlist, "INT_MAX test", &test_isdigit_int_max);
	ret += load_test(&testlist, "INT_MIN test", &test_isdigit_int_min);
	if (ret < 0)
		return (free_testlist(&testlist));
	return (launch_tests(&testlist));
}
