/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshigemu <hshigemu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:19:05 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/10 22:16:32 by hshigemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "launch.h"
#include "libunit.h"

int		main(void)
{
	int		ret;
	
	print_header();
	ret = easy_launcher();
	if (ret == -1)
		puts("Test Error!");
	return (0);
}
