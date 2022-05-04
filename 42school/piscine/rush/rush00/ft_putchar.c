
#include <unistd.h>

void	ft_putchar_start(char a)
{
	int	compt_char;

	compt_char = 1;
	write(1, "o", 1);
	compt_char++;
	while (compt_char < a)
	{
		write(1, "-", 1);
		compt_char++;
	}
	if (a > 1)
	{
		write(1, "o", 1);
	}
	write(1, "\n", 1);
}

void	ft_putchar_mid(char a, char b)
{
	int	compt_char;
	int	colonne;

	colonne = 2;
	while (colonne < b)
	{
		compt_char = 1;
		write(1, "|", 1);
		compt_char++;
		while (compt_char < a)
		{
			write(1, " ", 1);
			compt_char++;
		}
		if (a > 1)
		{
			write(1, "|", 1);
		}
		write(1, "\n", 1);
		colonne++;
	}
}

void	ft_putchar_end(char a)
{
	int	compt_char;

	compt_char = 1;
	write(1, "o", 1);
	compt_char++;
	while (compt_char < a)
	{
		write(1, "-", 1);
		compt_char++;
	}
	if (a > 1)
	{
		write (1, "o", 1);
	}
	write (1, "\n", 1);
}
