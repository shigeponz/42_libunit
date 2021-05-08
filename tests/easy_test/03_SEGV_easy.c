/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_SEGV_easy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshigemu <hshigemu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:59:10 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/08 17:04:40 by hshigemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int		segv_test(void)
{
	char	*str;

	str = NULL;
	strlen(str);
	return (0);
}