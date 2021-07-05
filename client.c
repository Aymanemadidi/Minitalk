#include "minitalk.h"

void	binary_calcul(char *str, unsigned char *binary, int lenght)
{
	int				j;
	int				k;
	int				i;
	unsigned char	val;

	j = 0;
	k = 8;
	i = 0;
	while (i < lenght)
	{
		val = str[i];
		j = k - 1;
		while (val != 0)
		{
			binary[j] = val % 2;
			j--;
			val /= 2;
		}
		k += 8;
		i++;
	}
}

unsigned char	*str_to_bin(char *str)
{
	int				i;
	int				lenght;
	unsigned char	*binary;

	i = 0;
	lenght = ft_strlen(str);
	binary = (unsigned char *)malloc(8 * lenght);
	while (i < 8 * lenght)
		binary[i++] = 0;
	binary_calcul(str, binary, lenght);
	return (binary);
}

void	conditions(unsigned char *binary, char **argv, int i)
{
	if (binary[i] == 1)
	{
		if (kill(ft_atoi(argv[1]), SIGUSR1) == -1)
		{
			ft_putstr("The message faced a problem");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (kill(ft_atoi(argv[1]), SIGUSR2) == -1)
		{
			ft_putstr("The message faced a problem");
			exit(EXIT_FAILURE);
		}
	}
}

int	main(int argc, char **argv)
{
	unsigned char	*binary;
	int				i;

	i = -1;
	if (argc != 3 || ft_atoi(argv[1]) < 0)
	{
		ft_putstr("Arguments are invalid");
		exit(EXIT_FAILURE);
	}
	binary = str_to_bin(argv[2]);
	while (++i < (8 * (int)ft_strlen(argv[2])))
	{
		conditions(binary, argv, i);
		usleep(100);
	}
	ft_putstr("Message sent successfully");
}
