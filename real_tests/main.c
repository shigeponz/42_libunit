/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:19:05 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/11 19:31:26 by mhorie           ###   ########.fr       */
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
	int	ret;

	print_header();
	i = 0;
	while (i < g_launcher_cnt)
	{
		ret = g_launchesr[i]();
		if (ret == -2)
		{
			puts("Test Error!");
			exit(1);
		}
		i++;
	}
	return (0);
}
