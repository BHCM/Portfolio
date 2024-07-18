/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:51:56 by hibenham          #+#    #+#             */
/*   Updated: 2024/07/10 15:44:08 by hibenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	i;

	d = 0;
	i = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[i] != '\0')
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


char *ft_strcat(char *dest, char *src);

int     main(int argc, char *argv[])
{
        if (argc != 3)
                return 0;
        printf("%s\n", ft_strcat(argv[1], argv[2]));
}
 */
