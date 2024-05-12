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

char *ft_strlcpy(char *dst, const char *src, size_t size)
{
    int destL = ft_strlen(dst);
    int destS = (char)ft_strlen(src);
    if (destL < destS || size == 0)
        return NULL;

    char *tempDest = dst;
    char *tempSrc = dst;
    while (*tempSrc != '\0' && size > 1)
    {
        *tempDest = *tempSrc;
        tempDest++;
        tempSrc++;
        size--;
    }
    if (size > 0)
        *tempDest = '\0';
    return dst;
}

int main()
{
    char destino[4];                // Buffer de destino
    char fuente[] = "Hola, mundo!"; // Cadena de origen

    // Uso de la función strlcpy para copiar la cadena fuente en el destino
    strlcpy(destino, fuente, sizeof(destino));

    // Imprimir el contenido del destino
    printf("Contenido del destino: %s\n", destino);

    return 0;
}