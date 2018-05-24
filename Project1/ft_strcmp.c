/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:40:17 by dmsibi            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/05/24 13:38:56 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char *str1, char *str2)
{
	if (ft_strlen(str1) - ft_strlen(str2) == 0)
		return (0);
	else if (ft_strlen(str1) < strlen(str2))
		return (1);
	else
		return (-1);
=======
/*   Updated: 2018/05/23 14:03:58 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_strlen.c"

int		ft_strcmp(char *str1, char *str2)
{
	while (}

int		main(void)
{
	printf("%d\n", ft_strcmp("si", "see"));
	return (0);
>>>>>>> d73b631ba2572dae4e67b4370e0140d9f0883238
}
