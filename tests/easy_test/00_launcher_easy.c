/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_easy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshigemu <hshigemu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:54:05 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/11 21:45:35 by hshigemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easy_test.h"
#include "libunit.h"

int	easy_launcher(void)
{
	int				ret;
	t_unit_test		*testlist;

	ret = 0;
	testlist = NULL;
	print_title("EASY");
	ret += load_test(&testlist, "Ok test", &ok_test);
	ret += load_test(&testlist, "Ng test", &ng_test);
	ret += load_test(&testlist, "SegV test", &segv_test);
	ret += load_test(&testlist, "Bus test", &bus_test);
	ret += load_test(&testlist, "Abort test", &abort_test);
//	ret += load_test(&testlist, "Timeout test", &timeout_test);
	if (ret < 0)
		return (free_testlist(&testlist));
	return (launch_tests(&testlist));
}
