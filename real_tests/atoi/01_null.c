/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_null.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:59:04 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/11 23:39:18 by mhorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"

int	test_atoi_null(void)
{
	char	*s;
	int		status;
	int		result;

	s = NULL;
	if (fork() == 0)
	{
		result = ft_atoi(s);
		if (result == 0)
			exit(0);
		else
			exit(-1);
	}
	wait(&status);
	if (status == 11 || status == 0)
		return (0);
	else
		return (-1);
}
