/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:16:50 by alprival          #+#    #+#             */
/*   Updated: 2022/01/19 23:01:12 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	return (l);
}

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < size)
	{
		dest[ft_strlen(dest)] = src[i++];
	}
	return (dest);
}

/*
int main()
{
	char dest[100] = "bonjour";
	char src[100] = "bojeird;wlak;dlkaw;ld";
	unsigned int size = 10;
	ft_strlcat(dest, src, size);
	printf("%s", dest);
}
*/
