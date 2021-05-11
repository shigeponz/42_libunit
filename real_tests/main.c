/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:19:05 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/11 22:27:44 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "launch.h"
#include "libunit.h"

static int	g_launcher_cnt = 2;
static	int	(*g_launchesr[])(void) = {
	&atoi_launcher,
	&isdigit_launcher
};

int	main(void)
{
	int	i;
	int	result;
	int	result_all;

	print_header();
	i = 0;
	result_all = 0;
	while (i < g_launcher_cnt)
	{
		result = g_launchesr[i]();
		if (result == -2)
		{
			puts("Test Error!");
			exit(1);
		}
		if (result != 0)
			result_all = result;
		i++;
	}
	return (result_all);
}
