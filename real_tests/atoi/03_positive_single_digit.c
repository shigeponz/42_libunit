/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_positive_single_digit.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:59:04 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/11 18:30:39 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <libc.h>

int	test_atoi_positive_single_digit(void)
{
	char	*s;

	s = "5";
	if (ft_atoi(s) == atoi(s))
		return (0);
	else
		return (-1);
}
