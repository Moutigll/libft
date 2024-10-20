/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ele-lean <ele-lean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:53:40 by ele-lean          #+#    #+#             */
/*   Updated: 2024/10/19 18:16:33 by ele-lean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "libft.h"
#include <stdarg.h>

int		ft_print_addr(unsigned long long addr);
char	*ft_itoa_unsigned(unsigned int n);
int		ft_print_hex(int nbr, int f);
int		ft_printf(const char *str, ...);
