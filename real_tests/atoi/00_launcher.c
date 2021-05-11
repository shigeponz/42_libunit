/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:54:05 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/11 18:51:19 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_atoi.h"
#include "libunit.h"

int	atoi_launcher(void)
{
	int				ret;
	t_unit_test		*testlist;

	ret = 0;
	testlist = NULL;
	print_title("ATOI");
	ret += load_test(&testlist, "NULL test", &test_atoi_null);
	ret += load_test(&testlist, "Empty String test", &test_atoi_empty_string);
	ret += load_test(&testlist, "Positive Single Digit test",
			&test_atoi_positive_single_digit);
	ret += load_test(&testlist, "Negative Single Digit test",
			&test_atoi_negative_single_digit);
	ret += load_test(&testlist, "Positive 5 Digits test",
			&test_atoi_positive_5digit);
	ret += load_test(&testlist, "Negative 5 Digits test",
			&test_atoi_negative_5digit);
	ret += load_test(&testlist, "INT_MAX test", &test_atoi_int_max);
	ret += load_test(&testlist, "INT_MIN test", &test_atoi_int_min);
	ret += load_test(&testlist, "Plus test", &test_atoi_plus);
	ret += load_test(&testlist, "Space test", &test_atoi_space);
	ret += load_test(&testlist, "After String test", &test_atoi_after_string);
	ret += load_test(&testlist, "Some Sign test", &test_atoi_some_sign);
	ret += load_test(&testlist, "No Number test", &test_atoi_no_number);
	if (ret < 0)
		return (free_testlist(&testlist));
	return (launch_tests(&testlist));
}
