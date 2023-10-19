/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 03:39:14 by ple-stra          #+#    #+#             */
/*   Updated: 2023/10/19 03:46:08 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_abs(int value)
{
	if (value >= 0)
		return (value);
	return (-value);
}

double	ft_fabs(double value)
{
	if (value >= 0)
		return (value);
	return (-value);
}
