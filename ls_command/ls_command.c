/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_command.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 15:19:31 by dmsibi            #+#    #+#             */
/*   Updated: 2018/08/14 14:49:58 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This is the trial version of ls */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h>

int		main(int argc, char **argv)
{
	struct dirent	**namelist;
	int				n;

	if (argc < 1)
	{
		exit(EXIT_FAILURE);
	}
	else if (argc == 1)
	{
		n = scandir(".", &namelist, NULL, alphasort);
	}
	else
	{
		n = scandir(argv[1], &namelist, NULL, alphasort);
	}
	if (n < 0)
	{
		perror("scandir");
		exit(EXIT_FAILURE);
	}
	else
	{
		while (n--)
		{
			printf("%s\n", namelist[n]->d_name);
			free(namelist[n]);
		}
		free(namelist);
	}
	exit(EXIT_SUCCESS);
}
