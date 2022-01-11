/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:23:53 by ple-stra          #+#    #+#             */
/*   Updated: 2022/01/11 01:56:53 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// Create a string representation of the unsigned int [n]
char	*ft_itoa_u(unsigned int n)
{
	size_t			len;
	unsigned int	tmp_n;
	char			*str;

	len = n == 0;
	tmp_n = n;
	while (tmp_n && ++len)
		tmp_n /= 10;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str += len;
	*str = 0;
	tmp_n = n;
	while (tmp_n)
	{
		*--str = tmp_n % 10 + '0';
		tmp_n /= 10;
	}
	if (n == 0)
		*--str = '0';
	return (str);
}
