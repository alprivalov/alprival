/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:27:57 by alprival          #+#    #+#             */
/*   Updated: 2022/01/24 16:33:42 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		j;
	char	*temp;

	temp = str;
	j = 0;
	ft_strlowcase(str);
	while (*temp)
	{
		if (*temp >= 'a' && *temp <= 'z' && j == 0)
		{
			*temp -= 32;
		}
		if ((*temp < '0' || *temp > '9')
			&& (*temp < 'a' || *temp > 'z') && (*temp < 'A' || *temp > 'Z'))
		{
			j = 0;
		}
		else
		{
			j = 1;
		}
		temp++;
	}
	return (str);
}
