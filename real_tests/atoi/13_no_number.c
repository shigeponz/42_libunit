/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_no_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:59:04 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/11 18:46:40 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <libc.h>

int	test_atoi_no_number(void)
{
	char	*s;

	s = "abcde";
	if (ft_atoi(s) == atoi(s))
		return (0);
	else
		return (-1);
}
