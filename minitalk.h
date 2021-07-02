/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 09:05:45 by mokellat          #+#    #+#             */
/*   Updated: 2021/06/18 17:17:05 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_TALK_H
#define MINI_TALK_H

#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void	ft_putstr(char *s);
void	ft_putnbr(int nb);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
int     ft_pow(int base, int exponent);
#endif
