/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 13:23:28 by bhmohite          #+#    #+#             */
/*   Updated: 2026/08/29 20:23:09 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	numchar;
	long	num;

	num = nb;
	if (num < 0)
	{
		num = - (num);
		write(1, "-", 1);
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		numchar = num + '0';
		write(1, &numchar, 1);
	}
}

int	main(void)
{
	ft_putnbr(10);
	return (0);
}
