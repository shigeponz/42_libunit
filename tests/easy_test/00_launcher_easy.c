/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_easy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshigemu <hshigemu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:54:05 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/08 18:06:36 by hshigemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "easy_test.h"
#include "../../framework/libunit.h"

int		easy_launcher(void)
{
	t_unit_test		*testlist;

	puts("EASY:");
	load_test(&testlist, "Ok test", &ok_test);
	load_test(&testlist, "Ng test", &ng_test);
	load_test(&testlist, "SegV test", &segv_test);
	load_test(&testlist, "Bus test", &bus_test);
	return (launch_tests(&testlist));
}