/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 14:59:52 by bhmohite          #+#    #+#             */
/*   Updated: 2026/08/30 18:48:31 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	value;

	if (power < 0)
	{
		value = 0;
	}
	if (power == 0)
	{
		value = 1;
	}
	if (power > 0)
	{
		value = nb * ft_recursive_power(nb, (power - 1));
	}
	return (value);
}

// # include <stdio.h>
// int	main(void)
// {
// 	int ans;
// 	ans = ft_recursive_power(0, 1);
// 	printf("%d", ans);
// 	return (0);
// }
