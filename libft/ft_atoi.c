/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 18:17:24 by mhorie            #+#    #+#             */
/*   Updated: 2021/05/04 05:24:52 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	size_t	i;
	long	num;
	long	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(*(s + i)))
		i++;
	if (*(s + i) == '-')
		sign = -1;
	if (*(s + i) == '-' || *(s + i) == '+')
		i++;
	while (ft_isdigit(*(s + i)))
	{
		num = num * 10 + (*(s + i) - '0');
		i++;
	}
	return ((int)(num * sign));
}
