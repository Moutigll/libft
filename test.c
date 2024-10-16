/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ele-lean <ele-lean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:38:43 by ele-lean          #+#    #+#             */
/*   Updated: 2024/10/16 12:42:56 by ele-lean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "include/libft.h"
#include <stdlib.h>

void	test_ft_atoi(void)
{
	printf("\n(1/23)Testing ft_atoi:\n");
	printf("ft_atoi(\"   -123abc\") Expected '-123', got: '%d'\n", ft_atoi("   -123abc"));
	printf("ft_atoi(\"42\") Expected '42', got: '%d'\n", ft_atoi("42"));
	printf("ft_atoi(\"   +42\") Expected '42' got: '%d'\n", ft_atoi("   +42"));
	printf("ft_atoi(\"   0\") Expected '0' got: '%d'\n", ft_atoi("   0"));
}

void	test_ft_bzero(void)
{
	char	str[50] = "Hello, World!";
	char	empty[50] = "This will be zeroed";

	printf("\n(2/23)Testing ft_bzero:\n");
	printf("Before ft_bzero on str (first 6 chars): '%s'\n", str);
	ft_bzero(str, 6);
	printf("After ft_bzero (first 6 chars zeroed): '%s' (Expected: '\\0\\0\\0\\0\\0\\0 World!')\n", str + 6);
	printf("Before ft_bzero on empty (all chars): '%s'\n", empty);
	ft_bzero(empty, sizeof(empty));
	printf("After ft_bzero (all chars zeroed): '%s' (Expected: empty string)\n", empty);
}

void	test_ft_calloc(void)
{
	int	*arr;
	int	i;

	arr = ft_calloc(5, sizeof(int));
	printf("\n(3/23)Testing ft_calloc:\n");
	printf("ft_calloc(5, sizeof(int)) Expected: array of 5 zeroed ints\n");
	for (i = 0; i < 5; i++)
		printf("arr[%d] = %d\n", i, arr[i]);
	free(arr);
}

void	test_ft_isalnum(void)
{
	printf("\n(4/23)Testing ft_isalnum:\n");
	printf("ft_isalnum('1') = %d (Expected: 1)\n", ft_isalnum('1'));
	printf("ft_isalnum('A') = %d (Expected: 1)\n", ft_isalnum('A'));
	printf("ft_isalnum('#') = %d (Expected: 0)\n", ft_isalnum('#'));
}

void	test_ft_isalpha(void)
{
	printf("\n(5/23)Testing ft_isalpha:\n");
	printf("ft_isalpha('A') = %d (Expected: 1)\n", ft_isalpha('A'));
	printf("ft_isalpha('a') = %d (Expected: 1)\n", ft_isalpha('a'));
	printf("ft_isalpha('1') = %d (Expected: 0)\n", ft_isalpha('1'));
	printf("ft_isalpha('#') = %d (Expected: 0)\n", ft_isalpha('#'));
}

void	test_ft_isascii(void)
{
	printf("\n(6/23)Testing ft_isascii:\n");
	printf("ft_isascii(65) = %d (Expected: 1)\n", ft_isascii(65));
	printf("ft_isascii(128) = %d (Expected: 0)\n", ft_isascii(128));
}

void	test_ft_isdigit(void)
{
	printf("\n(7/23)Testing ft_isdigit:\n");
	printf("ft_isdigit('1') = %d (Expected: 1)\n", ft_isdigit('1'));
	printf("ft_isdigit('a') = %d (Expected: 0)\n", ft_isdigit('a'));
}

void	test_ft_isprint(void)
{
	printf("\n(8/23)Testing ft_isprint:\n");
	printf("ft_isprint(32) = %d (Expected: 1)\n", ft_isprint(32));
	printf("ft_isprint(127) = %d (Expected: 0)\n", ft_isprint(127));
}

void	test_ft_memchr(void)
{
	char str[] = "Hello, World!";
	char *result;

	printf("\n(9/23)Testing ft_memchr:\n");
	result = ft_memchr(str, 'W', 13);
	printf("ft_memchr('%s', 'W', 13) = '%s' (Expected: 'World!')\n", str, result);
	result = ft_memchr(str, 'z', 13);
	printf("ft_memchr('%s', 'z', 13) = '%p' (Expected: '(nil)')\n", str, result);
}

void	test_ft_memcmp(void)
{
	char s1[] = "abcdef";
	char s2[] = "abcDef";

	printf("\n(10/23)Testing ft_memcmp:\n");
	printf("ft_memcmp('%s', '%s', 6) = %d (Expected: > 0)\n", s1, s2, ft_memcmp(s1, s2, 6));
	printf("ft_memcmp('%s', '%s', 3) = %d (Expected: 0)\n", s1, s2, ft_memcmp(s1, s2, 3));
}

void	test_ft_memcpy(void)
{
	char src[] = "Hello, World!";
	char dest[50];

	printf("\n(11/23)Testing ft_memcpy:\n");
	ft_memcpy(dest, src, 13);
	printf("ft_memcpy(dest, src, 13) = %s (Expected: Hello, World!)\n", dest);
}

void	test_ft_memmove(void)
{
	char dest[50] = "Hello, World!";
	char src[] = "Beautiful ";

	printf("\n(12/23)Testing ft_memmove:\n");
	printf("Before memmove: %s\n", dest);
	ft_memmove(dest + 7, src, 10);
	printf("After memmove, expected 'Hello, Beautiful ', got: '%s'\n", dest);
	char overlap[20] = "123456789";
	printf("Before overlapping memmove: %s\n", overlap);
	ft_memmove(overlap + 2, overlap, 9);
	printf("After overlapping memmove, expected '12123456789', got: '%s'\n", overlap);
}

void	test_ft_memset(void)
{
	char	str[50] = "Hello, world!";

	printf("\n(13/23)Testing ft_memset:\n");
	printf("Before memset: %s\n", str);
	ft_memset(str, 'x', 5);
	printf("After memset: %s (Expected: 'xxxxx, world!')\n", str);
}

void	test_ft_strchr(void)
{
	const char *str = "Hello, World!";
	char ch = 'o';
	char *result;

	printf("\n(14/23)Testing ft_strchr:\n");
	result = ft_strchr(str, ch);
	printf("ft_strchr('%s', '%c') = '%s' (Expected: 'o, World!')\n", str, ch, result);
}

void	test_ft_strdup(void)
{
	const char *s = "Hello, World!";
	char *dup;

	printf("\n(15/23)Testing ft_strdup:\n");
	dup = ft_strdup(s);
	printf("ft_strdup('%s') = '%s' (Expected: '%s')\n", s, dup, s);
	free(dup);
}

void	test_ft_strlcat(void)
{
	char dest[50] = "Hello, ";
	char src[] = "World!";
	size_t size = 50;
	size_t result;

	printf("\n(16/23)Testing ft_strlcat:\n");
	result = ft_strlcat(dest, src, size);
	printf("ft_strlcat(dest, src, 50) = %zu, dest = '%s' (Expected: 13, 'Hello, World!')\n", result, dest);
}

void	test_ft_strlcpy(void)
{
	char dest[50];
	char src[] = "Hello, World!";
	size_t result;

	printf("\n(17/23)Testing ft_strlcpy:\n");
	result = ft_strlcpy(dest, src, 50);
	printf("ft_strlcpy(dest, src, 50) = %zu, dest = '%s' (Expected: 13, 'Hello, World!')\n", result, dest);
}

void	test_ft_strlen(void)
{
	printf("\n(18/23)Testing ft_strlen:\n");
	printf("ft_strlen(\"Hello\") = %zu (Expected: 5)\n", ft_strlen("Hello"));
	printf("ft_strlen(\"\") = %zu (Expected: 0)\n", ft_strlen(""));
}

void	test_ft_strncmp(void)
{
	const char *s1 = "Hello";
	const char *s2 = "Helium";

	printf("\n(19/23)Testing ft_strncmp:\n");
	printf("ft_strncmp('%s', '%s', 3) = %d (Expected: 0)\n", s1, s2, ft_strncmp(s1, s2, 3));
	printf("ft_strncmp('%s', '%s', 5) = %d (Expected: > 0)\n", s1, s2, ft_strncmp(s1, s2, 5));
}

void	test_ft_strnstr(void)
{
	const char *big = "Hello, World!";
	const char *little = "World";

	printf("\n(20/23)Testing ft_strnstr:\n");
	printf("ft_strnstr('%s', '%s', 13) = '%s' (Expected: 'World!')\n", big, little, ft_strnstr(big, little, 13));
}

void	test_ft_strrchr(void)
{
	const char *str = "Hello, World!";
	char ch = 'o';
	char *result;

	printf("\n(21/23)esting ft_strrchr:\n");
	result = ft_strrchr(str, ch);
	printf("ft_strrchr('%s', '%c') = '%s' (Expected: 'orld!')\n", str, ch, result);
}

void	test_ft_tolower(void)
{
	printf("\n(22/23)Testing ft_tolower:\n");
	printf("ft_tolower('A') = '%c' (Expected: 'a')\n", ft_tolower('A'));
	printf("ft_tolower('Z') = '%c' (Expected: 'z')\n", ft_tolower('Z'));
	printf("ft_tolower('a') = '%c' (Expected: 'a')\n", ft_tolower('a'));
	printf("ft_tolower('1') = '%c' (Expected: '1')\n", ft_tolower('1'));
}

void	test_ft_toupper(void)
{
	printf("\n(23/23)Testing ft_toupper:\n");
	printf("ft_toupper('a') = '%c' (Expected: 'A')\n", ft_toupper('a'));
	printf("ft_toupper('z') = '%c' (Expected: 'Z')\n", ft_toupper('z'));
	printf("ft_toupper('A') = '%c' (Expected: 'A')\n", ft_toupper('A'));
}
//Test of the Part2
void	test_ft_substr(void)
{
	const char *chain = "Hello world!";

	printf("\n(1/11)Testing ft_substr\n");
	printf("ft_substr(%s, 3, 5) = '%s' (Expected: 'lo wo')\n", chain, ft_substr(chain, 3, 5));
	printf("ft_substr(%s, 3, 100) = '%s' (Expected: 'lo world!')\n", chain, ft_substr(chain, 3, 100));
	printf("ft_substr(\"\", 3, 5) = '%s' (Expected: '')\n", ft_substr("", 3, 5));
	printf("ft_substr(%s, 100, 5) = '%s' (Expected: '')\n", chain, ft_substr(chain, 100, 5));
}

void	test_ft_strjoin(void)
{
	printf("\n(2/11)Testing ft_strjoin\n");
	printf("ft_strjoin(\"Hello \", \"world!\") = '%s' (Expected: 'Hello world!')\n", ft_strjoin("Hello ", "world!"));
	printf("ft_strjoin(\"\", \"world!\") = '%s' (Expected: 'world!')\n", ft_strjoin("", "world!"));
	printf("ft_strjoin(\"Hello \", \"\") = '%s' (Expected: 'Hello ')\n", ft_strjoin("Hello ", ""));
	printf("ft_strjoin(\"\", \"\") = '%s' (Expected: '')\n", ft_strjoin("", ""));
}

void	test_ft_strtrim(void)
{
	printf("\n(3/11)Testing ft_strtrim\n");
	printf("ft_strtrim(\"**Hello World*-*\", \"*-\"): '%s' (Expected: 'Hello World')\n", ft_strtrim("**Hello World*-*", "*-"));
	printf("ft_strtrim(\"Hello\", \"\") '%s' (Expected: 'Hello')\n", ft_strtrim("Hello", ""));
	printf("ft_strtrim(\"\", \" \") '%s' (Expected: '')\n", ft_strtrim("", " "));

}
void	ft_free_split(char **split, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	test_ft_split(void)
{
	char	**result;
	int		i;

	printf("\n(4/11)Testing ft_split\n");
	result = ft_split("Hello world this is a test", ' ');
	printf("ft_split(\"Hello world this is a test\", ' ') Expected: ['Hello', 'world', 'this', 'is', 'a', 'test', NULL]\n");
	i = 0;
	while (result[i])
	{
		printf("result[%d] = '%s'\n", i, result[i]);
		i++;
	}
	printf("result[%d] = '%s'\n", i, result[i]);
	ft_free_split(result, i);
	result = ft_split("  Hello  world  this  is  a  test  ", ' ');
	printf("\nft_split(\"  Hello  world  this  is  a  test  \", ' ') Expected: ['Hello', 'world', 'this', 'is', 'a', 'test', NULL]\n");
	i = 0;
	while (result[i])
	{
		printf("result[%d] = '%s'\n", i, result[i]);
		i++;
	}
	printf("result[%d] = '%s'\n", i, result[i]);
	ft_free_split(result, i);
	result = ft_split("NoDelimiterHere", ' ');
	printf("\nft_split(\"NoDelimiterHere\", ' ') Expected: ['NoDelimiterHere', NULL]\n");
	i = 0;
	while (result[i])
	{
		printf("result[%d] = '%s'\n", i, result[i]);
		i++;
	}
	printf("result[%d] = '%s'\n", i, result[i]);
	ft_free_split(result, i);
	result = ft_split("", ' ');
	printf("\nft_split(\"\", ' ') Expected: [NULL]\n");
	if (result[0] == NULL)
		printf("Result is NULL as expected\n");
	else
		printf("Unexpected result\n");
	ft_free_split(result, i);
	result = ft_split("   ", ' ');
	printf("\nft_split(\"   \", ' ') Expected: [NULL]\n");
	if (result[0] == NULL)
		printf("Result is NULL as expected\n");
	else
		printf("Unexpected result\n");
	ft_free_split(result, i);
}

int	main(void)
{
	printf("TEST PART1\n");
	test_ft_atoi();
	test_ft_bzero();
	test_ft_calloc();
	test_ft_isalnum();
	test_ft_isalpha();
	test_ft_isascii();
	test_ft_isdigit();
	test_ft_isprint();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_memset();
	test_ft_strchr();
	test_ft_strdup();
	test_ft_strlcat();
	test_ft_strlcpy();
	test_ft_strlen();
	test_ft_strncmp();
	test_ft_strnstr();
	test_ft_strrchr();
	test_ft_tolower();
	test_ft_toupper();
	printf("\nTEST PART2\n");
	test_ft_substr();
	test_ft_strjoin();
	test_ft_strtrim();
	test_ft_split();
	return (0);
}
