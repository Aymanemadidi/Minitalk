#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>
# include <stdlib.h>
# include <stdio.h>
# include <math.h>

typedef struct	s_vars
{
	int	n;
	int	i;
}				t_vars;

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_pow2(int exponent);
#endif
