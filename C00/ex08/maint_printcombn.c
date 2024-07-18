/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maint_printcombn.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:59:18 by hibenham          #+#    #+#             */
/*   Updated: 2024/07/02 12:06:44 by hibenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void afficher_combi(char comb[], int length);

void gener_combi(int n, int position, int start, char comb[]);

void    ft_print_combn(int n);

int     main(void)
{
        ft_print_combn(9);
        return (0);
}

