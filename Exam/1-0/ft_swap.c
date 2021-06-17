/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:29:48 by leotran           #+#    #+#             */
/*   Updated: 2021/06/17 15:51:41 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

int main()
{
	int a = 5;
	int b = 10;

	ft_swap(&a, &b);
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}
