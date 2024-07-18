/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcapitalize.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:39:10 by hibenham          #+#    #+#             */
/*   Updated: 2024/07/06 18:53:25 by hibenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char *ft_strcapitalize(char *str);

int main() {
    char test[] = "saLuT, comMent tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("Avant: %s\n", test);
    ft_strcapitalize(test);
    printf("Après: %s\n", test);

    return 0;
}
