/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   parse_arg.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: evanchoq <evanchoq@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/29 10:52:45 by evanchoq         #+#    #+#              */
/*   Updated: 2026/10/30 14:50:02 by evanchoq        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "function_printf.h"

static size_t	get_len_param(const char *s)
{
	int		i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			if (ft_strchr(PARAM, s[i + 1]))
			{
				count++;
			}
		}
		i++;
	}
	return (count);
}

char	*get_param(const char *s)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	res = malloc(sizeof(char) * (get_len_param(s) + 1));
	if (!res)
		return (NULL);
	while (s[i] != 0)
	{
		if (s[i] == '%')
		{
			if (ft_strchr(PARAM, s[i + 1]))
			{
				res[j] = s[i + 1];
				j++;
			}
		}
		i++;
	}
	res[i] = 0;
	return (res);
}

// void	parse(const char *s, ...)
// {
// }
