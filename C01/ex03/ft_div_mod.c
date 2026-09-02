/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 15:24:21 by marvin            #+#    #+#             */
/*   Updated: 2026/08/18 21:44:16 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	c;
	int	d;

	c = a / b;
	d = a % b;
	*div = c;
	*mod = d;
}
/*pointer div derefrenced to hold value of c*/
/*
 #include<stdio.h>
 int	main(void)
 {
	int x =5;
	int y =2;
	int*d;
	int*m;
	int result1;
	int result2;
	d = &result1;
	m = &result2;
	ft_div_mod(x,y,d,m);
	printf("%d\n",result1);
	printf("%d\n",result2);
	return 0;
 }
 */
