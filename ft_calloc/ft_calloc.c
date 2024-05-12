#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
    char *final = s;
    while (n--) {
        *final++ = 0;
    }
}

/**
 * Función que reserva un bloque de memoria contigua lo suficientemente grande como para almacenar elementos,
 * cada uno de tamaño especificado. Luego, inicializa todas las posiciones de memoria reservadas a cero.
 * @param primero Cantidad de espacios de memoria a reservar
 * @param segundo Tamaño en bytes que se debe reservar para cada posición
 * @return puntero void a la primera posición de memoria reservada
 */
void *ft_calloc(size_t nmemb, size_t size)
{
    int totBytes = nmemb * size;
    //Reservo un espacio de memoria determinado
    void *s = malloc(totBytes);
    //Compruebo si la memoria asignada es válida
    if (s != NULL) {
        // Limpio la memoria reservada (establezco todos los bytes en cero)
        ft_bzero(s, totBytes);
    }
    return s;
}

int main(void)
{
    int cant = 20;
    char *cadena = ft_calloc(cant, 1);
    printf("cadena: %s", cadena);
    // int *array;
    // size_t num_elements = 10;
    // size_t size_of_element = sizeof(int);

    // // Asignar memoria para un arreglo de 10 enteros e inicializarlos a cero
    // array = (int *)calloc(num_elements, size_of_element);
    //  // Verificar si la asignación de memoria fue exitosa
    // if (array != NULL) {
    //     // Imprimir la dirección de memoria del primer elemento del arreglo
    //     printf("Dirección de memoria: %p\n", (void *)array);
    // } else {
    //     printf("Error al asignar memoria.\n");
    // }
    return 0;
}