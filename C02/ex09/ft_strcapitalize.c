/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:52:08 by hibenham          #+#    #+#             */
/*   Updated: 2024/07/07 17:47:34 by hibenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	i_mot;

	i = 0;
	i_mot = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') \
			|| (str[i] >= 'a' && str[i] <= 'z') \
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (i_mot == 0)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
				i_mot = 1;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		else
			i_mot = 0;
		i++;
	}
	return (str);
}
