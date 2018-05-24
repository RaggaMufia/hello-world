/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:15:24 by dmsibi            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/05/24 13:46:01 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
=======
/*   Updated: 2018/05/23 16:11:06 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"
>>>>>>> d73b631ba2572dae4e67b4370e0140d9f0883238

char	*ft_strdup(char *str)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (p == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
<<<<<<< HEAD
=======

int		main(void)
{
	printf("%s\n", ft_strdup("This is My duplicated string"));
	return (0);
}
>>>>>>> d73b631ba2572dae4e67b4370e0140d9f0883238
