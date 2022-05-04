/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:38:07 by alprival          #+#    #+#             */
/*   Updated: 2022/01/19 12:25:51 by alprival         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[ft_strlen(dest)] = src[i++];
	}
	return (dest);
}

/*
int main()
{
	char dest[100] = "bonjour";
	char src[100] = "bojeir";
	ft_strcat(dest, src);
	printf("%s", dest);
}
*/
