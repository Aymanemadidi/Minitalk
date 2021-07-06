#include "minitalk.h"

t_vars	g_v;

void	handler(int signal)
{
	if (signal == SIGUSR1)
		g_v.n += ft_pow2(g_v.i);
	g_v.i--;
	if (g_v.i == -1)
	{
		write(1, &g_v.n, 1);
		g_v.n = 0;
		g_v.i = 7;
	}
}

int	main(void)
{	
	g_v.i = 7;
	g_v.n = 0;
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	ft_putstr("the PID is : ");
	ft_putnbr(getpid());
	write(1, "\n", 1);
	while (1)
	{
		pause();
	}
}
