/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:53:38 by alprival          #+#    #+#             */
/*   Updated: 2022/01/24 12:50:11 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		j;
	int		tab[10];
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] < 32)
		{
			ft_putchar('\\');
			tab[j] = str[i] % 16;
			str[i] /= 16;
			j++;
			tab[j] = str[i] % 16;
			while (j >= 0)
				ft_putchar(hex[tab[j--]]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}		
}
