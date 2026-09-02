/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 14:52:00 by bhmohite          #+#    #+#             */
/*   Updated: 2026/09/02 18:25:05 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nbr)
{
	char	numchar;

	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		numchar = nbr + '0';
		write(1, &numchar, 1);
	}
}
void ft_write_nbr(void)
{
	int i = 1;
	while(i < 101)
	{
		if (i % 3 && i % 7 == 0)
		{
			write (1, "fizzbuzz", 8);
			write(1, "\n", 1);
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz", 4);
			write(1, "\n", 1);
		}
		else if (i % 7 == 0)
		{
			write(1, "buzz", 4);
			write(1, "\n", 1);
		}
		else
		{
			ft_putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
}

int main()
{
	ft_write_nbr();
	return (0);
}
//bcos write only writes from ascii table