/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-madi <ael-madi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:28:02 by ael-madi          #+#    #+#             */
/*   Updated: 2021/07/18 18:28:03 by ael-madi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_pow2(int exponent)
{
	int	result;

	result = 1;
	while (exponent--)
		result = result * 2;
	return (result);
}

void	handler(int signal)
{	
	static int i = 7;
	static int n = 0;

	if (signal == SIGUSR1)
		n += ft_pow2(i);
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
