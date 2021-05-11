/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_int_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:59:04 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/11 19:47:23 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <ctype.h>
#include <limits.h>

int	test_isdigit_int_min(void)
{
	int	n;

	n = INT_MIN;
	if (ft_isdigit(n) == isdigit(n))
		return (0);
	else
		return (-1);
}
