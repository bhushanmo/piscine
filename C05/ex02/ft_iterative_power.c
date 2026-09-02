/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 14:41:45 by bhmohite          #+#    #+#             */
/*   Updated: 2026/08/30 18:48:29 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	value;

	value = 1;
	if (power < 0)
	{
		value = 0;
	}
	if (nb == 0)
	{
		value = 1;
	}
	while (power > 0)
	{
		value = nb * value;
		power --;
	}
	return (value);
}
// # include <stdio.h>
// int	main(void)
// {
// 	int ans;
// 	ans = ft_iterative_power(0,0);
// 	printf("%d", ans);
// 	return (0);
// }