/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   count_size_nb.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: evanchoq <evanchoq@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/29 09:03:01 by evanchoq         #+#    #+#              */
/*   Updated: 2026/10/29 10:40:12 by evanchoq        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "function_printf.h"

int	count_size_nb(int nb)
{
	int		res;
	long	n;

	n = (long) nb;
	res = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		res++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}
