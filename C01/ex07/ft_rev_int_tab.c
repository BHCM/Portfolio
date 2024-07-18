/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:43:58 by hibenham          #+#    #+#             */
/*   Updated: 2024/07/04 11:26:00 by hibenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	swap;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		swap = tab[start];
		tab[start] = tab[end];
		tab[end] = swap;
		start ++;
		end --;
	}
}
