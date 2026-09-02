/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 18:45:56 by bhmohite          #+#    #+#             */
/*   Updated: 2026/08/25 21:18:19 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;

	j = 0;
	i = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// # include <stdio.h>
// int main(void)
// {
// 	char dest[] = "cold";
// 	char src[] = "it is";
// 	int n = 2;

// 	ft_strncat(dest, src, n);
// 	printf("%s", dest);
// 	return (0);
// }
