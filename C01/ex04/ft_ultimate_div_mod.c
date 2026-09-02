/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmohite <bhmohite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:52:46 by marvin            #+#    #+#             */
/*   Updated: 2026/08/19 20:58:09 by bhmohite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;
	int	division_result;
	int	modulo_result;

	c = *a;
	d = *b;
	division_result = c / d;
	modulo_result = c % d;
	*a = division_result;
	*b = modulo_result;
}
/*
 int	main(void)
 {
	int x =5;
	int y =2;
	int* d;
	int* m;
	d = &x;
	m = &y;
	ft_ultimate_div_mod(d,m);
	printf("%d\n",x);
	printf("%d\n",y);
	return 0;
 }
*/