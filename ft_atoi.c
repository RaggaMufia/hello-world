/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:04:42 by dmsibi            #+#    #+#             */
/*   Updated: 2018/05/22 18:05:09 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int		i;
	int		result;
	int		base;

	i = 0;
	base = 10;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9') {
			result = result * base;
			result = (int)(str[i] - 48);
			i++;
		}
	}
	return (result);
}

int		main(void)
{
	printf("%d\n", ft_atoi("10"));
			return (0);
}
