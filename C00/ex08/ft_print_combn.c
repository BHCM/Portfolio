/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:05:58 by hibenham          #+#    #+#             */
/*   Updated: 2024/07/02 12:48:50 by hibenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	afficher_combi(char comb[], int length)
{
	write(1, comb, length);
	if (comb[0] != '9' - length + 1 + '0')
		write(1, ", ", 2);
}

void	gener_combi(int n, int position, int start, char comb[])
{
	if (position == n)
	{
		afficher_combi(comb, n);
		return ;
	}
	while (start <= 10 - n + position)
	{
		comb[position] = start + '0';
		gener_combi(n, position + 1, start + 1, comb);
		start++;
	}
}

void	ft_print_combn(int n)
{
	char	comb;
	int		i;

	comb = [10];
	i = 0;
	while (i < n)
	{
		comb[i] = 0;
		i++ ;
	}
	gener_combi(n, 0, 0, comb);
}
