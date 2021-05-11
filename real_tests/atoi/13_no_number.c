/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_no_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:59:04 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/11 21:21:07 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <stdlib.h>

int	test_atoi_no_number(void)
{
	char	*s;

	s = "abcde";
	if (ft_atoi(s) == atoi(s))
		return (0);
	else
		return (-1);
}
