/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   hex.c                                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: evanchoq <evanchoq@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/02 15:43:42 by evanchoq         #+#    #+#              */
/*   Updated: 2026/11/02 16:25:09 by evanchoq        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "function_printf.h"

static size_t	get_len_size_hexa(unsigned long nb)
{
	if (nb < 16)
		return (1);
	return (1 + get_len_size_hexa(nb / 16));
}

char	*ft_tohexa(unsigned long nb)
{
	const char	*hex_digits;
	char		*res;
	size_t		len;

	hex_digits = "0123456789abcdef";
	len = get_len_size_hexa(nb);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = 0;
	if (nb == 0)
	{
		res[0] = '0';
		return (res);
	}
	while (nb > 0)
	{
		len--;
		res[len] = hex_digits[nb % 16];
		nb = nb / 16;
	}
	return (res);
}
