#include "minitalk.h"

int	ft_intlen(int n)
{
	int		i;
	long	nbr;

	nbr = n;
	if (nbr <= 0)
	{
		i = 1;
		nbr = nbr * -1;
		while (nbr > 0)
		{
			nbr = nbr / 10;
			i++;
		}
	}
	else
	{
		i = 0;
		while (nbr > 0)
		{
			nbr = nbr / 10;
			i++;
		}
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -1 * nb;
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
