/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:33:52 by hibenham          #+#    #+#             */
/*   Updated: 2024/07/10 15:46:18 by hibenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	i;

	d = 0;
	i = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[i] != '\0' && i < nb)
	{	
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (dest);
}
/*
 #include <stdio.h>


char *ft_strncat(char *dest, char *src, unsigned int nb);


int     main(int argc, char *argv[])
{
        if (argc != 3)
                return 0;
        printf("%s\n", ft_strncat(argv[1], argv[2], 6));
}
 */
