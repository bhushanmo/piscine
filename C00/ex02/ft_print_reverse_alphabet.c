/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 20:24:35 by bhmohite          #+#    #+#             */
/*   Updated: 2026/08/17 13:21:06 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;
	int		i;

	alphabet = 122;
	i = 0;
	while (i < 26)
	{
		write (1, &alphabet, 1);
		i++;
		alphabet--;
	}
}

/*
int main(void)
{
    ft_print_reverse_alphabet();
    return(0);
}
*/