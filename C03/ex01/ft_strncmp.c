/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 15:47:43 by bhmohite          #+#    #+#             */
/*   Updated: 2026/08/25 21:14:30 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n - 1 && s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// as we are increment i after the while condition 
//so we cannot go till i = 6 in condition 
// or else it will increment i to 7 in next step
// # include <stdio.h>

// int	main (void)
// {
// 	char	s1[] = "ABCDEFG";
// 	char	s2[] = "ABCDEFH";
// 	int	res;
// 	int n = 7;

// 	res = ft_strncmp(s1, s2, n);
// 	printf("%i", res);
// 	return (0);
// }
