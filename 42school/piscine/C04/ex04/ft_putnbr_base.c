/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:54:38 by alprival          #+#    #+#             */
/*   Updated: 2022/01/26 18:58:06 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while(*c)
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	
	nbr = 100;
	int	i;

	i = 0;
	while(nbr > 10);
	{
		printf("%d\n", 1);
		nbr = nbr / 10;
		i = nbr % 10;
		while (i > strlen(base))
		{
		i = i / ft_strlen(base);
		ft_putchar(i);
		i /= ft_strlen(base);
		}
	}
}

int main(void)
{
	char	base[] = "0123456789abcdef";
	printf("Salut");

	ft_putnbr_base(nbr ,base);
}*/
