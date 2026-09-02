/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 12:17:42 by bhmohite          #+#    #+#             */
/*   Updated: 2026/08/31 15:45:08 by bhmohite         ###   ########.fr       */
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
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// // 1 = prime, 0 = not prime
// #include <stdio.h>
// int	main (void)
// {
// 	int ans;
// 	ans = ft_is_prime(-17);
// 	printf("%d", ans);
// 	return 0;
// }