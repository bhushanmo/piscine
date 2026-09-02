/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 11:05:29 by bhmohite          #+#    #+#             */
/*   Updated: 2026/08/30 18:47:56 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
	{
		factorial = 0;
	}
	if (nb == 0)
	{
		factorial = 1;
	}
	while (nb > 0)
	{
		factorial = nb * factorial;
		nb--;
	}
	return (factorial);
}

// # include <unistd.h>
// # include <stdio.h>
// int	main(void)
// {
// 	int nb = -5;
// 	int ans;
// 	ans = ft_iterative_factorial(nb);
// 	write(1, &ans , 1);
// 	printf("%d", ans) ;
// 	return (0);
// }
