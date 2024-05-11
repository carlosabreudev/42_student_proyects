#include <stdio.h>
#include <string.h>

/**
 * Función que copia datos de una región de memoria a otra
 * @param primero puntero al inicio de la región de memoria de destino
 * @param segundo puntero al inicio de la región de memoria de origen
 * @param tercero tamaño de los datos que se van a copiar
 * 
*/
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *des_Conv = (unsigned char *) dest;
    const unsigned char *src_Conv = (const unsigned char *) src;
    while (n > 0)
    {
        *des_Conv++ = *src_Conv++;
        n--;
    }
    return dest;
}


int main() {
    // Definir dos buffers de caracteres
    char source[] = "Hel!";
    char destination[20];

    // Copiar datos de source a destination usando memcpy
    ft_memcpy(0, source, strlen(source) + 1);

    // Imprimir el contenido de destination
    printf("Contenido de destination después de la copia: %s\n", destination);

    return 0;
}