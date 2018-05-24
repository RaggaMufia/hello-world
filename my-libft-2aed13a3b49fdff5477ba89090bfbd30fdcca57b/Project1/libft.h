/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:08:32 by dmsibi            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/05/24 14:05:11 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H__
# define __LIBFT_H__

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <ctype.h>
# include <stddef.h>
# include <string.h>
# include <fcntl.h>
# include <assert.h>
# include <math.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_putnbr(int nbr);
=======
/*   Updated: 2018/05/23 17:24:45 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H__
# define _LIBFT_H_

#include <unistd.h>
#incldue <stdlib.h>

>>>>>>> d73b631ba2572dae4e67b4370e0140d9f0883238
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_atoi(char *str);
<<<<<<< HEAD
int		ft_isspace(int c);
int		ft_strcmp(char *str1, char *str2);
int		ft_strlen(char *str);
char	*ft_strcat(char *str1, char *str2);
char	*ft_strcpy(char *str1, char *str2);
char	*ft_strdup(char *str);

typedef	struct		s_list {
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
=======
int		ft_strlen(char *str);
char	*ft_strcat(char *str1, char *str2);
char	*ft_strcpy(char *str1, char *str2);
char	*ft_strcmp(char *str1, char *str2);
char	*ft_strdup(char *str);
int		ft_isspace(int c);
>>>>>>> d73b631ba2572dae4e67b4370e0140d9f0883238

#endif
