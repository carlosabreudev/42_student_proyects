#include <stdio.h>
#include <string.h>

/**
 * Función que compara dos áreas de memoria.
 * @param primero área uno
 * @param segundo área dos
 * @param tercero cantidad de bytes a comparar
 * @return 0, 1, -1 en función de la comparación del primer byte localizado de cada una de las cadenas. Si n es igual a 0 retorna 0
*/
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *s1P = (unsigned char *)s1;
    unsigned char  *s2P = (unsigned char *)s2;
    if(n == 0)
    {
      return 0;
    }
    while (*s1P != '\0' && *s2P != '\0' && n > 0)
    {
        if(*s1P != *s2P)
        {
        return *s1P - *s2P;
        }
        s1P++;
        s2P++;
    }
    return *s1P - *s2P;
}
int main() {
    const char *str1 = "Hello";
    const char *str2 = "World";
    size_t len = 5; // Longitud de comparación

    // Comparar los primeros 'len' bytes de str1 y str2
    int result = memcmp(str1, str2, 5);

    if (result == 0) {
        printf("Los primeros %zu bytes de str1 y str2 son iguales.\n", len);
    } else if (result < 0) {
        printf("Los primeros %zu bytes de str1 son menores que los de str2.\n", len);
    } else {
        printf("Los primeros %zu bytes de str1 son mayores que los de str2.\n", len);
    }

    return 0;
}