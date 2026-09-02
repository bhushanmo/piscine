/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 20:45:33 by bhmohite          #+#    #+#             */
/*   Updated: 2026/08/17 13:21:09 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = 48;
	while (number < 58)
	{
		write (1, &number, 1);
		number++;
	}
}

/*
int main(void)
{
    ft_print_numbers();
    return(0);
}
*/