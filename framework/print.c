/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshigemu <hshigemu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 08:02:55 by mhorie            #+#    #+#             */
/*   Updated: 2021/05/09 14:53:13 by hshigemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libunit.h"

void	print_header(void)
{
	write(1, "*********************************\n", 34);
	write(1, "** 42 - Unit Tests ****\n", 24);
	write(1, "*********************************\n", 34);
}

void	print_title(char *title)
{
	write(1, title, ft_strlen(title));
	write(1, ":\n", 2);
}

void	print_name(char *test_name)
{
	write(1, "    > ", 6);
	write(1, test_name, ft_strlen(test_name));
	write(1, " : ", 3);
}

void	print_result(int result)
{
	if (result == 0)
		write(1, "[OK]\n", 5);
	else if (result == 256)
		write(1, "[NG]\n", 5);
	else if (result == 11)
		write(1, "[SEGV]\n", 7);
	else if (result == 10)
		write(1, "[BUSE]\n", 7);
}

void	print_launch_result(int list_size, int ok_cnt)
{
	ft_putnbr(ok_cnt);
	write(1, "/", 1);
	ft_putnbr(list_size);
	write(1, " tests checked\n", 15);
}
