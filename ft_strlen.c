/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:49:49 by dmsibi            #+#    #+#             */
/*   Updated: 2018/05/22 14:12:07 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
		len++;
	i++;
	return (i);
}

int		main(void)
{
	printf("%d\n", ft_strlen("mending"));
	return (0);
}
