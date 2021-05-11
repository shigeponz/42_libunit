/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 17:12:45 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/11 21:32:54 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_ATOI_H
# define TEST_ATOI_H

# include "../../framework/includes/libunit.h"

int	test_atoi_null(void);
int	test_atoi_empty_string(void);
int	test_atoi_positive_single_digit(void);
int	test_atoi_negative_single_digit(void);
int	test_atoi_positive_5digit(void);
int	test_atoi_negative_5digit(void);
int	test_atoi_int_max(void);
int	test_atoi_int_min(void);
int	test_atoi_plus(void);
int	test_atoi_space(void);
int	test_atoi_after_string(void);
int	test_atoi_some_sign(void);
int	test_atoi_no_number(void);

#endif
