/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 18:18:57 by marvin            #+#    #+#             */
/*   Updated: 2026/08/22 21:28:38 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int 	main(void)
// {
// 	char	test1[] = "dhsgdejwgediqw hwqhw";
// 	char	test2[] = "hfHOUHOhh";
// 	char	*try1 = ft_strlowcase(test1);
// 	char	*try2 = ft_strlowcase(test2);

// 	printf("%s\n", try1);
// 	printf("%s\n", try2);
// 	return (0);
// }