/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 20:19:05 by marvin            #+#    #+#             */
/*   Updated: 2026/08/21 11:29:36 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <unistd.h>
// int main (void)
// {
// 	char destination[5] = "Earth";
// 	char source[]= "Venus";
// write(1,destination,5);
// write(1,source,5);

// ft_strcpy(destination, source);

// write(1,destination,5);
// write(1,source,5);
// return (0);
// }