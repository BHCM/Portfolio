/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:24:44 by hibenham          #+#    #+#             */
/*   Updated: 2024/07/04 11:16:12 by hibenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	compteurc;

	compteurc = 0;
	while (str[compteurc] != '\0')
	{
		write(1, &str[compteurc], 1);
		compteurc ++ ;
	}
}
