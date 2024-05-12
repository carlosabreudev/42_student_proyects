#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
    int count;
    count = 0;
    while( s[count] != '\0')
    {
       count++;
    }
    return count;
}

int main() {
    char str[] = "Hola, mun!"; // Cadena de caracteres
    int longitud = ft_strlen(str); // Obtener longitud de la cadena

    printf("La longitud de la cadena \"%s\" es: %d\n", str, longitud);

    return 0;
}