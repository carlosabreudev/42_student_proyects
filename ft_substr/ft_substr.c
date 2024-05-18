#include <stdio.h>
#include <stdlib.h>
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

/**
 *
 * @param primero La string desde la que crear la substring.
 * @param segundo El índice del caracter en ’s’ desde el que empezar la substring.
 * @param tercero Longitud máxima de la substring.
 * @return La substring resultante. NULL si falla la reserva de memoria.
 */
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *strCpy = (char *)malloc(len * sizeof(char));
    if (strCpy != NULL)
    {
        //Hay que asegurarse que se copia además el último caracter de la cadena
        ft_strlcpy(strCpy, s + start, len + 1);
    }
        return strCpy;
}


// Definición de ft_substr
char *ft_substr(const char *s, unsigned int start, size_t len);

int main() {
    const char *s = "Ejemplo de subcadena";

    // Obtener una subcadena que comience en el índice 8 y tenga una longitud de 6 caracteres
    char *subcadena = ft_substr(s, 8, 6);

    // Verificar si la llamada a ft_substr fue exitosa
    if (subcadena != NULL) {
        printf("Subcadena obtenida: %s\n", subcadena);
        
        // Liberar la memoria asignada dinámicamente
        free(subcadena);
    } else {
        printf("Error al obtener la subcadena.\n");
    }

    return 0;
}