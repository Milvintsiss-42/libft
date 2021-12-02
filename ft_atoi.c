/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 04:19:11 by ple-stra          #+#    #+#             */
/*   Updated: 2021/11/27 22:12:54 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const int c)
{
	return (c == ' ' || c == '\t' || c == '\v'
		|| c == '\f' || c == '\r' || c == '\n');
}

int	ft_atoi(const char *nptr)
{
	int	nb;
	int	neg;

	nb = 0;
	while (ft_isspace(*nptr))
		nptr++;
	neg = 1 - (2 * (*nptr == '-'));
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	while (*nptr && ft_isdigit(*nptr))
	{
		if (nb * 10 < nb)
			return (-1 * (neg != -1));
		nb = nb * 10 + *(nptr++) - '0';
	}
	return (nb * neg);
}
