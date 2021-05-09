/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 08:02:55 by mhorie            #+#    #+#             */
/*   Updated: 2021/05/09 10:07:18 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	print_header(void)
{
	ft_putendl_fd("*********************************", 1);
	ft_putendl_fd("** 42 - Unit Tests ****", 1);
	ft_putendl_fd("*********************************", 1);
}

void	print_title(char *title)
{
	ft_putstr_fd(title, 1);
	ft_putendl_fd(":", 1);
}

void	print_name(char *test_name)
{
	ft_putstr_fd("    > ", 1);
	ft_putstr_fd(test_name, 1);
	ft_putstr_fd(" : ", 1);
}

void	print_result(int result)
{
	if (result == 0)
		ft_putendl_fd("[OK]", 1);
	else
		ft_putendl_fd("[NG]", 1);
}

void	print_launch_result(int list_size, int ok_cnt)
{
	ft_putnbr_fd(ok_cnt, 1);
	ft_putstr_fd("/", 1);
	ft_putnbr_fd(list_size, 1);
	ft_putstr_fd(" tests checked\n", 1);
}
