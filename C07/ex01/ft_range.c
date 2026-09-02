/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 10:35:38 by bhmohite          #+#    #+#             */
/*   Updated: 2026/09/01 16:47:17 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int*	ft_range(int min, int max)
{
	int		i;
	int		diff;
	int*	arrayofint;

	diff = max - min;
	if (diff <= 0)
	{
		return (0);
	}
	arrayofint = malloc(4 * diff + 1);
	if (arrayofint == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (diff != 0)
	{
		arrayofint[i] = min + i;
		i++ ;
		diff--;
	}
	return (arrayofint);
}

int main()
	{
		int *p = ft_range (3, 14);
		for (int i = 0; i < 5; i++)
	{
		printf("%d", p[i]);
	}
	free (p);
	}
