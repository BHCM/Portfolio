/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:20:22 by hibenham          #+#    #+#             */
/*   Updated: 2024/07/15 06:15:32 by hibenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] && s2[i] && s1[i] == s2[i]) || (i < n - 1))
	{
		if (s1[i] < s2[i])
                        return (-1);
                if (s1[i] > s2[i])
                        return (1);
		i++;
	}
	return (0);
}

#include <stdio.h>

int     main(int argc, char *argv[])
{
        if (argc != 3)
                return 0;
        printf("%d\n", ft_strncmp(argv[1], argv[2], 5));
	printf("%d\n", strncmp(argv[1], argv[2], 5));
}
