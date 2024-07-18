/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:32:21 by hibenham          #+#    #+#             */
/*   Updated: 2024/07/18 14:32:41 by hibenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sstrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*sstrcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_sstrlen(int size, char **str, char **sep)
{
	int	i;
	int	total;
	int	tsep;

	total = 0;
	tsep = sstrlen(*sep);
	i = 0;
	while (i < size)
	{
		total += sstrlen(str[i]);
		i++;
	}
	total += tsep * (size - 1);
	return (total);
}

void	concat_stcpy(int size, char **str, char *sep, char *result)
{
	int		i;
	char	*p;
	int		tsep;

	p = result;
	tsep = sstrlen(sep);
	i = 0;
	while (i < size)
	{
		sstrcpy(p, str[i]);
		p += tsep;
		if (i < size - 1)
		{
			sstrcpy(p, sep);
			p += tsep;
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*v;
	int		i;

	i = 0;
	if (size == 0)
	{
		v = malloc(sizeof(char));
		if (!v)
			return (0);
		v[0] = '\0';
		return (v);
	}
	i = total_sstrlen(size, strs, &sep);
	v = malloc(sizeof(char) * (i + 1));
	if (!v)
		return (0);
	v[i] = '\0';
	concat_stcpy(size, strs, sep, v);
	return (v);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{

	char	*tab[argc - 2];
	int		i;
	if (argc == 0)
		return (0);
	i = 0;
	while (i < argc - 2)
	{
		tab[i] = argv[i + 2];
		i++;
	}
	printf("%s\n", ft_strjoin(argc - 2, argv + 2, argv[1]));
	return (0);
}*/
