/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 11:47:19 by bhmohite          #+#    #+#             */
/*   Updated: 2026/08/30 18:48:26 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
	{
		factorial = 0;
	}
	if (nb == 0)
	{
		factorial = 1;
	}
	if (nb > 0)
	{
		factorial = nb * ft_recursive_factorial(nb - 1);
	}
	return (factorial);
}

// # include <stdio.h>
// int	main(void)
// {
// 	int nb = 0;
// 	int ans;
// 	ans = ft_recursive_factorial(nb);
// 	printf("%d", ans);
// 	return (0);
// }