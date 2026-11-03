/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: evanchoq <evanchoq@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/02 12:58:10 by evanchoq         #+#    #+#              */
/*   Updated: 2026/11/03 13:04:50 by evanchoq        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "../function_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			len += parse(&s[i + 1], &args);
			i++;
		}
		else
		{
			write(1, &s[i], 1);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
