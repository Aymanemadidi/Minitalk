#include "minitalk.h"

char	n;
int		i;

void	func(int nb)
{
	if (nb == SIGUSR1)
		n += ft_pow(2, i);
	i--;
	if (i == -1)
	{
		write(1, &n, 1);
		n = 0;
		i = 7;
	}
}

int	main(void)
{
	i = 7;
	n = 0;
	signal(SIGUSR1, func);
	signal(SIGUSR2, func);
	ft_putstr("the PID is : ");
	ft_putnbr(getpid());
	write(1, "\n", 1);
	while (1)
	{
		pause();
	}
}
