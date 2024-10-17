/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ele-lean <ele-lean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:37:40 by ele-lean          #+#    #+#             */
/*   Updated: 2024/10/17 16:22:31 by ele-lean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include <stdio.h>

int	main(void)
{
	printf("1: test\n");
	ft_printf("1: test");
	printf("\n2: test \"\\n\"\n");
	ft_printf("2: avant \"\\n\"\napres\n");
	ft_printf("1: tes%03.1");
}
