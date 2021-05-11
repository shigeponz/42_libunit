/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshigemu <hshigemu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 17:50:01 by hshigemu          #+#    #+#             */
/*   Updated: 2021/05/11 21:07:32 by hshigemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <sys/wait.h>
# include <signal.h>

# define T_GREEN	"\x1b[32m"
# define T_RED		"\x1b[31m"
# define T_RESET	"\x1b[39m"
# define T_SIZE		sizeof(T_GREEN)

typedef struct s_unit_test
{
	char					*test_name;
	int						(*f)();
	struct s_unit_test		*next;
}				t_unit_test;

typedef struct s_id_status
{
	int		id;
	int		status;
}	t_id_status;

size_t	ft_strlen(const char *s);
void	ft_putnbr(int n);

int		run_test(t_unit_test *testlist);
int		load_test(t_unit_test **testlist, char *test_name, int (*f)(void));

int		list_size(t_unit_test *testlist);
int		load_test(t_unit_test **testlist, char *test_name, int (*f)(void));
int		launch_tests(t_unit_test **testlist);

void	print_header(void);
void	print_title(char *title);
void	print_name(char *test_name);
void	print_result(int result);
void	print_launch_result(int list_size, int ok_cnt);

int		free_testlist(t_unit_test **testlist);

#endif
