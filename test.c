#include <stdio.h>
#include "libft.h"

void test_ft_isalpha() {
    printf("Testing ft_isalpha:\n");
    printf("ft_isalpha('A') = %d (Expected: 1)\n", ft_isalpha('A'));
    printf("ft_isalpha('a') = %d (Expected: 1)\n", ft_isalpha('a'));
    printf("ft_isalpha('1') = %d (Expected: 0)\n", ft_isalpha('1'));
    printf("ft_isalpha('#') = %d (Expected: 0)\n", ft_isalpha('#'));
}

void test_ft_strlen() {
    printf("Testing ft_strlen:\n");
    printf("ft_strlen(\"Hello\") = %zu (Expected: 5)\n", ft_strlen("Hello"));
    printf("ft_strlen(\"\") = %zu (Expected: 0)\n", ft_strlen(""));
}

void test_ft_memset() {
    char str[50] = "Hello, world!";
    printf("Testing ft_memset:\n");
    printf("Before memset: %s\n", str);
    ft_memset(str, 'x', 5);
    printf("After memset: %s\n", str); // Doit afficher "xxxxx, world!"
}

int main() {
    test_ft_isalpha();
    test_ft_strlen();
    test_ft_memset();
    // Appelle d'autres fonctions à tester ici

    return 0;
}
