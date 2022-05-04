/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:40:21 by alprival          #+#    #+#             */
/*   Updated: 2022/01/19 23:00:14 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *dest)
{
	int	l;

	l = 0;
	while (dest[l])
	{
		l++;
	}
	return (l);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (*src && i < nb)
	{
		dest[ft_strlen(dest)] = src[i++];
	}
	return (dest);
}
/*
int main()
{
	char	dest[100] = "bonjour";
	char	src[100] = "test";
	unsigned int nb = 3;
	ft_strncat(dest, src, nb);
	printf("%s", dest);
}
*/
