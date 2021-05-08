/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshigemu <hshigemu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 17:50:01 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/08 19:01:30 by hshigemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
#define LIBUNIT_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

typedef struct 	s_unit_test
{
	char					*test_name;
	void					*f;
	struct	s_unit_test		*next;
}				t_unit_test;

int		list_size(t_unit_test *testlist);
int		load_test(t_unit_test **testlist, char *test_name, void *(f));
int		launch_tests(t_unit_test **testlist);

#endif