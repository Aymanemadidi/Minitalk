/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-madi <ael-madi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:27:53 by ael-madi          #+#    #+#             */
/*   Updated: 2021/07/18 18:27:54 by ael-madi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>
# include <stdlib.h>
# include <stdio.h>
# include <math.h>

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *str);
int		ft_pow2(int exponent);
#endif
