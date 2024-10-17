/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ele-lean <ele-lean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:30:35 by ele-lean          #+#    #+#             */
/*   Updated: 2024/10/17 17:35:10 by ele-lean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	search_c(char c, const char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		while (str[i] != '%' && str[i])
		{
			ft_putchar_fd(str[i], 1);
			i++;
		}
		i++;
		j = 0;
		while (ft_isdigit(str[i]) || str[i] == '-' || str[i] == '.'
			|| str[i] == '#' || str[i] == ' ' || str[i] == '+')
		{
			i++;
			j++;
		}
		if (!str[i] && str[i - j] == '%')
		{
			ft_putstr_fd("incomplete format specifier", 2);
			return (EXIT_FAILURE);
		}
		if (!search_c(str[i], "cspdiuxX%f\0"))
		{
			ft_putstr_fd("invalid format specifier", 2);
			return (EXIT_FAILURE);
		}
	}
	return (1);
}
//0-9,-,.,#, ,+   