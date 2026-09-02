/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaimaki <ezaimaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 11:04:27 by ezaimaki          #+#    #+#             */
/*   Updated: 2026/08/22 17:39:25 by ezaimaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_input(int argc, char **argv);

int	ft_check_input(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		return (0);
	}
	while (argv[1][i] != 0)
	{
		if (i % 2 == 1)
		{
			if (argv[1][i] != ' ')
				return (0);
		}
		else
		{
			if (!(argv[1][i] == '1' || argv[1][i] == '2' || argv[1][i] == '3' || argv[1][i] == '4'))
				return (0);
		}
		i++
	}
	if (i != 31)
		return (0);
	return (1);
}
