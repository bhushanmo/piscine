/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 11:39:57 by bhmohite          #+#    #+#             */
/*   Updated: 2026/08/31 15:38:50 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		else
		{
			i++;
		}
	}
	return (0);
}

# include <stdio.h>
int	main(void)
{
	int	ans;
	ans = ft_sqrt(10);
	printf("%d", ans);
	return (0);
}