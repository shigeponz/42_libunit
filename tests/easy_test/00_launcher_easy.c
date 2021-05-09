/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_easy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:54:05 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/09 10:07:05 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "easy_test.h"
#include "libunit.h"
#include "libft.h"

int		easy_launcher(void)
{
	t_unit_test		*testlist;

	testlist = NULL;
	print_title("EASY");
	load_test(&testlist, "Ok test", &ok_test);
	load_test(&testlist, "Ng test", &ng_test);
	load_test(&testlist, "SegV test", &segv_test);
	load_test(&testlist, "Bus test", &bus_test);
	return (launch_tests(&testlist));
}
