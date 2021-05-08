/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_BUS_easy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshigemu <hshigemu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:59:13 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/08 17:12:33 by hshigemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		bus_test(void)
{
	char	*p = "test";

	p[0] = '0';
	printf("%s\n",p);
	return (0);
}