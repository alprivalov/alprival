/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:06:50 by alprival          #+#    #+#             */
/*   Updated: 2022/01/19 22:59:40 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0 ;
	while (s1[i] && i < n)
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
int main(void)
{
	char s2[100] = "bonjour";
	char s1[100] = "bonjour";
	unsigned int n = 2;

	ft_strncmp(s1,s2,n);
	printf("s2 = %s,%d" ,s2, ft_strncmp(s1,s2,n));
}*/
