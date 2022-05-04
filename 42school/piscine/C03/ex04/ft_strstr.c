/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:54:16 by alprival          #+#    #+#             */
/*   Updated: 2022/01/19 23:00:48 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (str[i] == to_find[j] && j < ft_strlen(to_find))
			{
				i++;
				j++;
			}
			if (j == ft_strlen(to_find))
				return (str + i);
			else
				j = 0;
		}
		i++;
	}
	return (0);
}
/*
int main ()
{
	char str [100] = "bontjottur jatesweteawee testdawdaw un programme";
	char to_find[100] = "test";
	ft_strstr(str, to_find);
	printf("%s", ft_strstr(str, to_find));
}*/
