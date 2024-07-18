/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:13:52 by hibenham          #+#    #+#             */
/*   Updated: 2024/07/18 14:33:40 by hibenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	p = malloc(sizeof(int) * (max - min));
	if (!p)
		return (0);
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 0)
		return (0);
	while (i < 38)
	{
		printf("%d, ", ft_range(atoi(av[1]), atoi(av[2]))[i]);
		i++;
	}
	return (0);
}*/
