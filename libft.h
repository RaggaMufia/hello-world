/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:08:32 by dmsibi            #+#    #+#             */
/*   Updated: 2018/05/23 17:24:45 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H__
# define _LIBFT_H_

#include <unistd.h>
#incldue <stdlib.h>

int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
char	*ft_strcat(char *str1, char *str2);
char	*ft_strcpy(char *str1, char *str2);
char	*ft_strcmp(char *str1, char *str2);
char	*ft_strdup(char *str);
int		ft_isspace(int c);

#endif
