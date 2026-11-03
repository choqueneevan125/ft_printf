/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoi_unsigned.c                                :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: evanchoq <evanchoq@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/02 13:50:36 by evanchoq         #+#    #+#              */
/*   Updated: 2026/11/03 13:05:21 by evanchoq        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "../function_printf.h"

static int	get_len_number(unsigned int nb)
{
	int				res;
	unsigned int	n;

	res = 0;
	n = (long) nb;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	char	*res;
	int		len;

	len = get_len_number(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = 0;
	if (n == 0)
		res[0] = '0';
	while (n > 0)
	{
		len--;
		res[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (res);
}
