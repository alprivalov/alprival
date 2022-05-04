#include "get_next_line.h"

char	*ft_word(char *stash)
{
	int i;

	i = 0;
	char *tab;
	if(stash[i] == '\n')
	{
		tab = malloc(sizeof(char) * 2);
		tab[0] = '\n';
		tab[1] = 0;
	}
	else
	{
		while(stash[i] != '\n' && stash[i])
		i++;
		tab = malloc(sizeof(char) * i + 2);
		if (!tab)
			return (0);
		i = -1;
		while(stash[++i] != '\n' && stash[i])
			tab[i] = stash[i];
		tab[i] = '\n';
		tab[i + 1] = 0;
	}
	return (tab);
}

int		lenword(char *stash)
{
	int	i;

	i = 0;
	while (stash[i] != '\n' && stash[i])
		i++;
	return (i);
}

char	*ft_cut(char *stash)
{
	char	*tab;
	int		i;
	int		j;
	int		len;

	len = lenword(stash);
	if (!stash)
		return (NULL);
	j = ft_strlen(stash) - len; 
	i = -1;
	tab = malloc(sizeof(char) * j);
	tab[j] = 0;
	if(!tab)
		return (0);
	while(++i < j)
		tab[i] = stash[len + i + 1];
	free(stash);
	return (tab);
}

char	*get_next_line(int fd)
{
	char 		*buf;
	static char *stash = NULL;
	char		*line;
	int			i;

	i = 1;
	if (fd < 0 || BUFFER_SIZE < 1 || read(fd,stash,0) == -1)
		return(NULL);
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (0);
	while (i != 0)
	{
		i = read(fd,buf,BUFFER_SIZE);
		buf[i] = 0;
		stash = ft_strjoin(stash,buf);
		if (ft_strchr(stash,'\n'))
			break;
	}
	line = ft_word(stash);
	stash = ft_cut(stash);
	free(buf);
	return (line);
}


int main()
{
	char *s;

	int fd;
	fd = open("file",O_RDONLY);
	while((s = get_next_line(fd)) != NULL)
	{
		printf("%s",s);
		free(s);
	}
	close(fd);
	return (0);
}