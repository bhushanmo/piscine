/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 14:00:44 by marvin            #+#    #+#             */
/*   Updated: 2026/08/22 20:21:15 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// #include <stdio.h>
// int 	main(void)
// {
// 	char	word_1[] = "Frankfurt";
// 	char	word_2[] = "Frankfurt*";
// 	char	word_3[] = "";

// 	int first = ft_str_is_alpha(word_1);
// 	int second = ft_str_is_alpha(word_2);
// 	int third = ft_str_is_alpha(word_3);

// 	printf("%d\n", first);
// 	printf("%d\n", second);
// 	printf("%d\n", third);
// 	printf("%s\n", word_3);
// 	return (0);
// }
