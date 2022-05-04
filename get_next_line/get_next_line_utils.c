#include "get_next_line.h"


int	ft_strlen(char *stash)
{
	int	i;

	i = 0;
	if(!stash)
		return (0);
	while (stash[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int		i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*tab;
	int		i;
	int		j;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	tab = malloc(sizeof(char) * (len + 1));
	tab[len] = 0;
	if (!tab)
		return (NULL);
	if(s1)
	{
		while (s1[i])
		{
			tab[i] = s1[i];
			i++;
		}
	}
	j = i;
	i = 0;
	if(s2)
	{
		while (s2[i])
		{
			tab[j] = s2[i];
			j++;
			i++;
		}
	}
	return (tab);
}
