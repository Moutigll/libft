/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ele-lean <ele-lean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:37:40 by ele-lean          #+#    #+#             */
/*   Updated: 2024/10/19 17:53:41 by ele-lean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "include/libft.h"

int	main(void)
{
	printf("1: test standard printf\n");
	ft_printf("1: test ft_printf\n");
	char	c = 'A';
	printf("2: Caractère simple avec printf:    %c\n", c);
	ft_printf("2: Caractère simple avec ft_printf: %c\n", c);
	char	*str = "Hello, world!";
	printf("3: Chaîne avec printf:    %s\n", str);
	ft_printf("3: Chaîne avec ft_printf: %s\n", str);
	char	c1 = 'B';
	char	c2 = 'C';
	printf("4: Plusieurs caractères avec printf:    %c %c\n", c1, c2);
	ft_printf("4: Plusieurs caractères avec ft_printf: %c %c\n", c1, c2);
	char	*str1 = "Hello";
	char	*str2 = "world";
	printf("5: Plusieurs chaînes avec printf:    %s %s\n", str1, str2);
	ft_printf("5: Plusieurs chaînes avec ft_printf: %s %s\n", str1, str2);
	printf("6: Affichage de %% avec printf:    %%\n");
	ft_printf("6: Affichage de %% avec ft_printf: %%\n");
	int		*ptr = NULL;
	int		a = 42;
	printf("7: test standard printf\n");
	ft_printf("7: test ft_printf\n");
	printf("8: Adresse d'un pointeur NULL avec printf:    %p\n", ptr);
	ft_printf("8: Adresse d'un pointeur NULL avec ft_printf: %p\n", ptr);
	printf("9: Adresse d'une variable avec printf:    %p\n", &a);
	ft_printf("9: Adresse d'une variable avec ft_printf: %p\n", &a);
	int		num = 1234;
	printf("10: Entier décimal avec printf:    %d\n", num);
	ft_printf("10: Entier décimal avec ft_printf: %d\n", num);
	printf("11: Entier (spécificateur %%i) avec printf:    %i\n", num);
	ft_printf("11: Entier (spécificateur %%i) avec ft_printf: %i\n", num);
	int		neg_num = -5678;
	printf("12: Entier négatif avec printf:    %d\n", neg_num);
	ft_printf("12: Entier négatif avec ft_printf: %d\n", neg_num);
	printf("13: Entier négatif (spécificateur %%i) avec printf:    %i\n", neg_num);
	ft_printf("13: Entier négatif (spécificateur %%i) avec ft_printf: %i\n", neg_num);
	unsigned int u_num = 123456;
	unsigned int u_zero = 0;
	unsigned int u_max = 4294967295;
	printf("14: Entier non signé avec printf:    %u\n", u_num);
	ft_printf("14: Entier non signé avec ft_printf: %u\n", u_num);
	printf("15: Zéro non signé avec printf:    %u\n", u_zero);
	ft_printf("15: Zéro non signé avec ft_printf: %u\n", u_zero);
	printf("16: Valeur maximale unsigned avec printf:    %u\n", u_max);
	ft_printf("16: Valeur maximale unsigned avec ft_printf: %u\n", u_max);
	ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	return (0);
}
