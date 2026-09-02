/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaimaki <ezaimaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 11:04:27 by ezaimaki          #+#    #+#             */
/*   Updated: 2026/08/22 17:41:22 by ezaimaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_grid(char *str, char *grid);
int	ft_check_input(int argc, char **argv);

int	main(int argc, char *argv[])
{
	char grid[16];

	if (ft_check_input(argc, argv) == 0)
	{
		write (1, "Error\n", 6);
		return (1);
	}

	if (ft_grid(argv[1], grid) == 1)
	{
		printf("%s\n", grid);
	}
	
}
