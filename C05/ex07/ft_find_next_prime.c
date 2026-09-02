/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 14:40:19 by bhmohite          #+#    #+#             */
/*   Updated: 2026/08/30 18:51:38 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 1)
	{
		return (0);
	}
	if (nb <= 0)
	{
		return (0);
	}
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
// 1 = prime, 0 = not prime
// # include <stdio.h>
// int	main (void)
// {
// 	int nb = 6;
// 	int ans;
// 	ans = ft_find_next_prime(nb);
// 	printf("%i", ans);

// }