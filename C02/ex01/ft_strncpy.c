/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 12:42:49 by marvin            #+#    #+#             */
/*   Updated: 2026/08/20 15:57:49 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include<unistd.h>
// int	main(void)
// {
// 	char	dest[] = "pineapplepizza";
// 	char	src[] = "tomatoes";

// 	write(1, dest, 14);
// 	write(1, "\n", 1);
// 	write(1, src, 8);
// 	write(1, "\n", 1);q
// 	ft_strncpy(dest, src, 12);
// 	write(1, dest, 14);
// 	write(1, "\n", 1);
// 	return (0);
// }