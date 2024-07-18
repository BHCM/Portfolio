/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 00:54:47 by hibenham          #+#    #+#             */
/*   Updated: 2024/07/15 05:55:33 by hibenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		write(1, &str[c], 1);
		c++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = (ac - 1);
	if (ac == 0)
		return (0);
	while (i >= 1)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
