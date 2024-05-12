#include <stdio.h>
#include <string.h> // Para strdup
#include <stdlib.h> // Para free

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *des_Conv = (unsigned char *)dest;
    const unsigned char *src_Conv = (const unsigned char *)src;
    while (n > 0)
    {
        *des_Conv++ = *src_Conv++;
        n--;
    }
    return dest;
}
size_t ft_strlen(const char *s)
{
    int count;
    count = 0;
    while (*s != '\0')
    {
        s++;
        count++;
    }
    return count;
}
/**
 * Función devuelve un puntero a una nueva cadena de caracteres que es una duplicado de la cadena que se envía.
 * La memoria para la nueva cadena se obtiene con malloc(), y se puede liberar con free().
 * @param primero cadena a duplicar
 * @return duplicado de esa cadena en otra posición de memoria
 */
char *ft_strdup(const char *s)
{
     if (s == NULL) {
        return NULL; // Manejar el caso de cadena original nula
    }
    int lengthSrc = ft_strlen(s);
    char *sCopy = (char *)malloc(lengthSrc * sizeof(char));
    if (sCopy != NULL)
    {
        ft_memcpy(sCopy, s, lengthSrc + 1);
    }
    return sCopy;
}

int main()
{
    const char *original = "Hola, mundo!"; // Cadena original

    // Duplicar la cadena original
    char *duplicada = ft_strdup(original);

    // Verificar si strdup fue exitoso
    if (duplicada != NULL)
    {
        // Imprimir la cadena duplicada
        printf("Cadena duplicada: %s\n", duplicada);

        // Liberar la memoria asignada dinámicamente
        free(duplicada);
    }
    else
    {
        // Manejar el error de duplicación de cadena
        printf("Error al duplicar la cadena.\n");
    }
}