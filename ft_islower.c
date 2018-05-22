/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:28:01 by dmsibi            #+#    #+#             */
/*   Updated: 2018/05/22 11:39:14 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_islower(int c)
{
	if (c >= 65 && c <= 90)
		return (c - ('A' - 'a'));
	else if (c >= 97 && c <= 112)
		return (c);
	else
		write(2, "Invalid character!\n", 19);
	return (0);
}

int		main(void)
{
	printf("%c", ft_islower('0'));
	return (0);
}
