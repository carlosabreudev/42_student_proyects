#include <stdio.h>
#include <string.h>

/**
 * Función que compara dos cadenas de caracteres en los primeros como máximo n bytes. Para la comparació utiliza unsigned char
 * @param primero primera cadena
 * @param segunddo segunda cadena
 * @param tercero cantidad de bytes que va a 
*/
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while(*s1 != '\0' && *s2 != '\0' && n > 0)
    {
        if(*s1 != *s2)
        {
            return (*s1 -*s2);
        }
        s1++;
        s2++;
        n--;
    }
    if (n == 0) {
        return 0; // Las primeras n caracteres son iguales
    } else {
        return (*s1 - *s2);
    }
}

int main() {
    const char *str1 = "Hello";
    const char *str2 = "Hell";

    // Comparar los primeros 4 caracteres de las cadenas str1 y str2
    int result = ft_strncmp(str1, str2, 4);

    if (result == 0) {
        printf("Los primeros 4 caracteres de str1 y str2 son iguales.\n");
    } else if (result < 0) {
        printf("Los primeros 4 caracteres de str1 son menores que los de str2.\n");
    } else {
        printf("Los primeros 4 caracteres de str1 son mayores que los de str2.\n");
    }

    return 0;
}