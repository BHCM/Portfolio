/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:12:43 by hibenham          #+#    #+#             */
/*   Updated: 2024/07/18 14:34:03 by hibenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!p)
		return (0);
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void) ac;
	printf("%s\n", ft_strdup(av[1]));
}

*/
