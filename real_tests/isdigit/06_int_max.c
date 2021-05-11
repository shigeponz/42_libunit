/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_int_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:59:04 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/11 19:47:05 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <ctype.h>
#include <limits.h>

int	test_isdigit_int_max(void)
{
	int	n;

	n = INT_MAX;
	if (ft_isdigit(n) == isdigit(n))
		return (0);
	else
		return (-1);
}
