/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:31:45 by dmsibi            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/05/24 13:47:45 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strdup.c"
#include "ft_strlen.c"
=======
/*   Updated: 2018/05/23 17:20:27 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
>>>>>>> d73b631ba2572dae4e67b4370e0140d9f0883238

char	*ft_strcat(char *str1, char *str2)
{
	int		i;
<<<<<<< HEAD
	
	i = 0;
	while (str2[i] != '\0')
		ft_strdup(str1);
	str1[i] = '\0';
=======
	register char	*p = str1;

	i = 0;
	while (*p)
		++p;
	while (*p++ == *str2++)
		;
>>>>>>> d73b631ba2572dae4e67b4370e0140d9f0883238
	return (str1);
}

int		main(void)
{
<<<<<<< HEAD
	ft_strcat("mA", "POI");
=======
	printf("%s\n", ft_strcat("mini", "us"));
>>>>>>> d73b631ba2572dae4e67b4370e0140d9f0883238
	return (0);
}
