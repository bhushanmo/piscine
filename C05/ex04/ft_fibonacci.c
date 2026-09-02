/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 19:40:59 by bhmohite          #+#    #+#             */
/*   Updated: 2026/08/30 18:49:22 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fibo;

	if (index < 0)
	{
		return (-1);
	}
	if (index == 1)
	{
		return (1);
	}
	if (index == 0)
	{
		return (0);
	}
	else
	{
		fibo = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (fibo);
}

// # include <stdio.h>
// int	main(void)
// {
// 	int ans;
// 	ans = ft_fibonacci(4);
// 	printf("%d", ans);
// 	return (0);
// }
