/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:49:49 by dmsibi            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/05/24 13:29:34 by dmsibi           ###   ########.fr       */
=======
/*   Updated: 2018/05/23 12:05:00 by dmsibi           ###   ########.fr       */
>>>>>>> d73b631ba2572dae4e67b4370e0140d9f0883238
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}