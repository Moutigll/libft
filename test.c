/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ele-lean <ele-lean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:38:43 by ele-lean          #+#    #+#             */
/*   Updated: 2024/10/15 18:12:31 by ele-lean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "include/libft.h"

void	test_ft_isalpha(void)
{
	printf("\nTesting ft_isalpha:\n");
	printf("ft_isalpha('A') = %d (Expected: 1)\n", ft_isalpha('A'));
	printf("ft_isalpha('a') = %d (Expected: 1)\n", ft_isalpha('a'));
	printf("ft_isalpha('1') = %d (Expected: 0)\n", ft_isalpha('1'));
	printf("ft_isalpha('#') = %d (Expected: 0)\n", ft_isalpha('#'));
}

void	test_ft_strlen(void)
{
	printf("\nTesting ft_strlen:\n");
	printf("ft_strlen(\"Hello\") = %zu (Expected: 5)\n", ft_strlen("Hello"));
	printf("ft_strlen(\"\") = %zu (Expected: 0)\n", ft_strlen(""));
}

void	test_ft_memcpy(void)
{
	printf("\nTesting ft_memcpy:\n");
	char src[] = "Hello, World!";
	char dest[50];
	char filled_dest[50] = "Goodbye!";

	ft_memcpy(dest, src, 13);
	printf("Testing ft_memcpy:\n");
	printf("ft_memcpy(dest, src, 13) = %s (Expected: Hello, World!)\n", dest);
	ft_memcpy(dest, src, 5);
	dest[5] = '\0';
	printf("ft_memcpy(dest, src, 5) = %s (Expected: Hello)\n", dest);
	ft_memcpy(filled_dest, src, 7);
	printf("ft_memcpy(filled_dest, src, 7) = %s (Expected: Hello, )\n", filled_dest);
}

void	test_ft_memset(void)
{
	char	str[50] = "Hello, world!";

	printf("\nTesting ft_memset:\n");
	printf("Before memset: %s\n", str);
	ft_memset(str, 'x', 5);
	printf("After memset: %s\n", str);
}

void	test_ft_tolower(void)
{
	printf("\nTesting ft_tolower:\n");
	printf("ft_tolower('A') = '%c' (Expected: 'a')\n", ft_tolower('A'));
	printf("ft_tolower('Z') = '%c' (Expected: 'z')\n", ft_tolower('Z'));
	printf("ft_tolower('a') = '%c' (Expected: 'a')\n", ft_tolower('a'));
	printf("ft_tolower('1') = '%c' (Expected: '1')\n", ft_tolower('1'));
	printf("ft_tolower('#') = '%c' (Expected: '#')\n", ft_tolower('#'));
}
void	test_ft_memmove(void)
{
	char dest[50] = "Hello, World!";
	char src[] = "Beautiful ";

	printf("Before memmove: %s\n", dest);
	ft_memmove(dest + 7, src, 10);
	printf("After memmove, expected 'Hello, Beautiful !', got: %s\n", dest);
	char overlap[20] = "123456789";
	printf("Before overlapping memmove: %s\n", overlap);
	ft_memmove(overlap + 2, overlap, 8);
	printf("After overlapping memmove expected  '12123456789', got: %s\n", overlap);
}
int	main(void)
{
	test_ft_isalpha();
	test_ft_strlen();
	test_ft_memset();
	test_ft_tolower();
	test_ft_memcpy();
	test_ft_memmove();
	return (0);
}
