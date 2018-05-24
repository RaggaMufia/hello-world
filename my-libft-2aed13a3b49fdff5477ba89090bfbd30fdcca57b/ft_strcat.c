/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:31:45 by dmsibi            #+#    #+#             */
/*   Updated: 2018/05/23 17:20:27 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *str1, char *str2)
{
	int		i;
	register char	*p = str1;

	i = 0;
	while (*p)
		++p;
	while (*p++ == *str2++)
		;
	return (str1);
}

int		main(void)
{
	printf("%s\n", ft_strcat("mini", "us"));
	return (0);
}
