/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:34:42 by marvin            #+#    #+#             */
/*   Updated: 2026/08/16 20:56:03 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(void);

void	display(int length, char a, char b, char c)
{
	int	line_step;

	line_step = 0;
	while (step < length)
	{
		if (step == 0)
		{
			ft_putchar (a);
		}
		else
			if (step == length - 1)
			{
				ft_putchar (b);
			}
		else
		{
			ft_putchar(c);
		}
		line_step++;
	}
	ft_putchar ('\n');
}

void	rush ( int x, int y)
{
	int	column_step;

	column_step = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (columnstep < y)
	{
		if (columnstep== 0 || columnstep == y - 1)
		{
			display(x, 'o', 'o', '-');
		}
		else
		{
			display(x, '|', '|', ' ');
		}
		columnstep++;
	}
}
