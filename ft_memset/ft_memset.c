
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/**
 * Función que llena los n bytes del área de memoria señalada por s con el byte constante c. Sirve para inicializar un buffer con un valor determinado
 * Similar a la función bzero
 * @param primero área de memoria señalada
 * @param segundo valor que se introduce para rellenar
 * @param tercero cantidad de bytes que se quieren cambiar
 * @return puntero a la memoria de s
*/
void *ft_memset(void *s, int c, size_t n)
{
    char *final = s;
   while (n--)
   {
    *final++ = c;
   } 
}

int main() {
    // Crear un buffer de caracteres
    char buffer[10];

    // Inicializar el buffer en cero usando memset
    ft_memset(buffer, 'a', sizeof(buffer));

    // Imprimir el contenido del buffer
    printf("Contenido del buffer después de inicialización:\n");
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    return 0;
}