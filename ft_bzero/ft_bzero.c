#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Borra los datos en los n bytes de la memoria a partir de la ubicación señalada por s, escribiendo ceros (bytes que contienen 0) en esa área.
 * Esta función es obsoleta, en vez de ella se utiliza memset()
 *  @param primero buffer que se quiere inicializar
 *  @param segundo tamaño del buffer
 * */
void ft_bzero(void *s, size_t n)
{
    char *final = s;
    while (n--) {
        *final++ = 0;
    }
}

int main() {
    // Crear un buffer de caracteres
    char buffer[10];

    // Inicializar el buffer en cero usando bzero
    ft_bzero(buffer, sizeof(buffer));

    // Imprimir el contenido del buffer para indicar que se ha inicializado a 0
    printf("Contenido del buffer después de inicialización:\n");
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    return 0;
}
