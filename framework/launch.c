/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshigemu <hshigemu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:43:17 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/08 19:14:22 by hshigemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		launch_test(t_unit_test **testlist)
{
	int		size;
	int		i;
	pid_t	*pid;

	i = 0;
	if (testlist == NULL)
		return (-1);
	size = list_size(*testlist);
	pid = malloc(sizeof(pid_t) * size);
	if (pid == NULL)
		return (-1);
	while (i < size)
		pid[i++] = fork();
	
}
