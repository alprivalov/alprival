/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:22:46 by alprival          #+#    #+#             */
/*   Updated: 2022/01/19 12:24:23 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] > s2[i])
		{
			return (-1);
		}
		if (s1[i] < s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	char s1[100] = "Beronjour";
	char s2[100] = "Bonjour";
	printf("%d", ft_strcmp(s1, s2));
}*/
