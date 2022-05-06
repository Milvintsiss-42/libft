/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 04:19:11 by ple-stra          #+#    #+#             */
/*   Updated: 2022/05/06 05:49:03 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static int	pos_in_base(const char c, char const *base)
{
	char const	*start;

	start = base;
	while (*base != c && *base)
		base++;
	if (!*base)
		return (-1);
	return (base - start);
}

int	ft_baseatoi(char const *nptr, char const *base)
{
	int	nb;
	int	neg;
	int	base_len;
	int	base_pos;

	base_len = ft_strlen(base);
	nb = 0;
	while (ft_isspace(*nptr))
		nptr++;
	neg = 1 - (2 * (*nptr == '-'));
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	while (*nptr)
	{
		base_pos = pos_in_base(*nptr++, base);
		if (base_pos == -1)
			break ;
		if (nb * base_len < nb)
			return (-1 * (neg != -1));
		nb = nb * base_len + base_pos;
	}
	return (nb * neg);
}

// int	main(void)
// {
// 	printf("%x\n", ft_baseatoi("fe", HEX_BASE));
// 	return (0);
// }
