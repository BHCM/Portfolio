/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:08:39 by hibenham          #+#    #+#             */
/*   Updated: 2024/07/16 17:48:03 by hibenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	h;
	int	temp;

	h = 0;
	temp = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (h < power - 1)
	{
		h++;
		nb = nb * temp;
	}
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n",ft_iterative_power(5, 2));
	return (0);
}*/
