/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_BUS_easy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshigemu <hshigemu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:59:13 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/10 23:54:09 by hshigemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/mman.h>

int	bus_test(void)
{
	FILE	*f;
	int		*m;

	f = tmpfile();
	m = (int *)mmap(0, 4, PROT_WRITE, MAP_PRIVATE, fileno(f), 0);
	*m = 0;
	return (0);
}
