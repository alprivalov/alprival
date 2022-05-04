
#include <unistd.h>

void ft_putchar_start(char a , char b);
void ft_putchar_mid(char a , char b);
void ft_putchar_end(char a , char b);

void rush02(char a, char b)
{
	if (a != 0 && b != 0)
	{
		if (b > 0)
		{
		ft_putchar_start(a , b);
		}
		if (b >= 1)
		{
		ft_putchar_mid(a , b);
		}
		if (b >= 2)
		{
		ft_putchar_end(a ,b);
		}
	}
}
