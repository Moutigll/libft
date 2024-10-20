/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ele-lean <ele-lean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:30:35 by ele-lean          #+#    #+#             */
/*   Updated: 2024/10/19 18:11:36 by ele-lean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>

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
	int		i;
	int		count;
	va_list	args;
	char	*tmp;
	char	*strr;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
			count++;
			i++;
			continue ;
		}
		i++;
		if (!str[i])
			return (-1);
		if (!search_c(str[i], "cspdiuxX%"))
			return (-1);
		if (str[i] == 'c')
		{
			count++;
			ft_putchar_fd(va_arg(args, int), 1);
		}
		else if (str[i] == '%')
		{
			count++;
			ft_putchar_fd('%', 1);
		}
		else if (str[i] == 's')
		{
			strr = va_arg(args, char *);
			ft_putstr_fd(strr, 1);
			count += ft_strlen(strr);
		}
		else if (str[i] == 'p')
			count += ft_print_addr((unsigned long long)va_arg(args, void *));
		else if (search_c(str[i], "di"))
		{
			tmp = ft_itoa(va_arg(args, int));
			ft_putstr_fd(tmp, 1);
			count += ft_strlen(tmp);
			free(tmp);
		}
		else if (str[i] == 'u')
		{
			tmp = ft_itoa_unsigned(va_arg(args, unsigned int));
			ft_putstr_fd(tmp, 1);
			count += ft_strlen(tmp);
			free(tmp);
		}
		else if (str[i] == 'x')
			count += ft_print_hex(va_arg(args, unsigned int), 0);
		else if (str[i] == 'X')
			count += ft_print_hex(va_arg(args, unsigned int), 1);
		i++;
	}
	va_end(args);
	return (count);
}
