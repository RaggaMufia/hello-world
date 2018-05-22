/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:40:17 by dmsibi            #+#    #+#             */
/*   Updated: 2018/05/22 13:49:38 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strcmp(char *str1, char *str2)
{
	int		i;

	i = 0;
	if (str1[i] != '\0' && str2[i] != '\0')
		return (str2 - str1);
	return (str2 - str1);
}

int		main(void)
{
	printf("%d\n", ft_strcmp("M", "Woman"));
	return (0);
}
