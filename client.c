#include "minitalk.h"

void	convert_to_binary(char *str, unsigned char *binary, int length)
{
	int				j;
	int				k;
	int				i;
	unsigned char	val;

	j = 0;
	k = 8;
	i = 0;
	while (i < length)
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
	int				length;
	unsigned char	*binary;

	i = 0;
	length = ft_strlen(str);
	binary = (unsigned char *)malloc(8 * length);
	while (i < 8 * length)
		binary[i++] = 0;
	convert_to_binary(str, binary, length);
	return (binary);
}

void	send_signals(unsigned char *binary, char **argv, int i)
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
		send_signals(binary, argv, i);
		usleep(50);
	}
	ft_putstr("Message sent successfully");
}
