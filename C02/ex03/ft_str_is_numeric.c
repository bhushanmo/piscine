/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 16:52:30 by marvin            #+#    #+#             */
/*   Updated: 2026/08/22 21:39:16 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
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

// #include<stdio.h>
// int 	main(void)
//  {
// 	char	string1[] = "42 heilbronn";
// 	char	string2[] = "1122198737";
// 	char	string3[] = "";

// 	int normalstr = ft_str_is_numeric(string1);
// 	int numberstr = ft_str_is_numeric(string2);
// 	int emptystr = ft_str_is_numeric(string3);

// 	printf("%d\n", normalstr);
// 	printf("%d\n", numberstr);
// 	printf("%d\n", emptystr);
// 	return (0);
// }
