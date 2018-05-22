/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:06:23 by dmsibi            #+#    #+#             */
/*   Updated: 2018/05/22 12:09:31 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_isdigit(int nb)
{
	if (nb >= '0' && nb <= '9')
		return (nb);
	else
		write(2, "Not a digit!\n", 12);
	return (0);
}

int		main(void)
{
	printf("%c", ft_isdigit(0));
	return (0);
}
