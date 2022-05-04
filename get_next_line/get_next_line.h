
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <ctype.h>
# include <stdarg.h>
# include <fcntl.h>
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif
char	*get_next_line(int fd);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char  *s1, char  *s2);
int		ft_strlen(char  *s);
char	*ft_substr(char  *s, unsigned int start, size_t len);


#endif