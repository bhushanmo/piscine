/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 10:55:16 by bhmohite          #+#    #+#             */
/*   Updated: 2026/08/24 20:15:12 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
// Null character so that it doestn 
//go on reading next character in memry after all characters in string are equal
// #include<stdio.h>

// int main (void)
// {
// 	char s1[] = "ABCD";
// 	char s2[] = "";
// 	int res;

// 	res = ft_strcmp(s1,s2);
// 	printf("%i", res);
// }
