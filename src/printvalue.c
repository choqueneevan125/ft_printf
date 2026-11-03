/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   printvalue.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: evanchoq <evanchoq@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/02 11:20:42 by evanchoq         #+#    #+#              */
/*   Updated: 2026/11/03 11:22:49 by evanchoq        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "function_printf.h"

int	printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	printstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	printx(unsigned int nb)
{
	char	*hex;
	int		size;

	size = 0;
	hex = ft_tohexa(nb);
	size = ft_strlen(hex);
	write(1, hex, size);
	free(hex);
	return (size);
}

int	print_x_maj(unsigned int nb)
{
	char	*hex;
	char	*hex_min;
	int		size;

	hex_min = ft_tohexa(nb);
	hex = str_upper(hex_min);
	free(hex_min);
	size = ft_strlen(hex);
	write(1, hex, size);
	free(hex);
	return (size);
}

int	print_pointor(void *ptr)
{
	unsigned long	addr;
	int				size;
	char			*hex;

	if (!ptr)
		return (printstr("(nil)"));
	addr = (unsigned long) ptr;
	hex = ft_tohexa(addr);
	size = ft_strlen(hex);
	write(1, "0x", 2);
	write(1, hex, size);
	free(hex);
	return (size + 2);
}
