/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:44:36 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/09 11:33:12 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	list_size(t_unit_test *testlist)
{
	int		ret;

	ret = 0;
	if (testlist == NULL)
		return (0);
	while (testlist != NULL)
	{
		testlist = testlist->next;
		ret++;
	}
	return (ret);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	if (!s)
		return (0);
	len = 0;
	while (*(s + len))
		len++;
	return (len);
}

void	ft_putnbr(int n)
{
	int		sign;
	char	c;

	sign = 1;
	if (n < 0)
	{
		write(1, "-", 1);
		sign = -1;
	}
	if (n / 10)
		ft_putnbr(n / 10 * sign);
	c = (char)(n % 10 * sign + '0');
	write(1, &c, 1);
}
