/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_50.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:59:04 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/11 22:23:04 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <ctype.h>

int	test_isdigit_50(void)
{
	int	n;

	n = 50;
	if (!!ft_isdigit(n) == !!isdigit(n))
		return (0);
	else
		return (-1);
}
