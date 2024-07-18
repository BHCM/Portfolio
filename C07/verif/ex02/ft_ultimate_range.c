/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:29:46 by hibenham          #+#    #+#             */
/*   Updated: 2024/07/18 14:33:15 by hibenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*p;
	int	i;
	int	len;

	i = 0;
	len = (max - min);
	if (min >= max)
	{
		*range = malloc(sizeof(int));
		range = 0;
		return (0);
	}
	*range = malloc(sizeof(int) * len);
	if (!range)
		return (-1);
	p = *range;
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (len);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
	int	*tab;

	if (ac == 0)
		return (0);
	printf("%d\n", ft_ultimate_range(&tab, atoi(av[1]), atoi(av[2])));
	return (0);
}*/
