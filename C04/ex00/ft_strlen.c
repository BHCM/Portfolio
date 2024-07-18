/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:38:20 by hibenham          #+#    #+#             */
/*   Updated: 2024/07/11 11:09:21 by hibenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cc;

	cc = 0;
	while (str[cc] != '\0')
	{
		cc ++;
	}
	return (cc);
}

/*
#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc != 2)
		return 0;
	printf("%d\n", ft_strlen(argv[1]));
}*/
