#include <stdio.h>
#include <string.h>

/**
 * Función que mueve de manera segura los caracteres dentro del buffer de una posición a otra
 * @param primero posición hasta donde quiero que se haga la copia en el buffer
 * @param segundo puntero desde donde quiero comenzar a copiar
 * @param tercero cantidad de elementos que queremos copiar
 * @return devuelve el buffer cambiado
*/
void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *destP = (char *)dest;
    const char *srcP = (const char *)src;
    while (n > 0 )
    {
        *destP++ = *srcP++;
        n--;
    }
    return dest;
}

int main() {
    // Definir un buffer de enteros
    int buffer[5] = {1, 2, 3, 4, 5};

    // Imprimir el contenido original del buffer
    printf("Contenido original del buffer: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    // Mover los elementos dentro del buffer utilizando memmove
    ft_memmove(buffer, buffer + 1, 2* sizeof(int) );

    // Imprimir el contenido del buffer después de la copia
    printf("Contenido del buffer después de la copia: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    return 0;
}


