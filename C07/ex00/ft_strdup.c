/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 10:20:33 by bhmohite          #+#    #+#             */
/*   Updated: 2026/09/01 16:46:28 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*newstr;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	newstr = malloc(1 * i + 1);
	if (newstr == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		newstr[j] = src[i];
		i++;
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
}
