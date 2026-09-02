/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 17:45:09 by marvin            #+#    #+#             */
/*   Updated: 2026/08/19 21:36:12 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

//  int	main(void)
//  {
// 	char* s;
// 	int number;
// 	s = "42heilbronn";
// 	number = ft_strlen(s);
// 	printf("%i", number);
// 	return 0;
//  }