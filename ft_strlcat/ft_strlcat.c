#include <stdio.h>
#include <string.h>


size_t ft_strlen( const char *s)
{
    size_t count;
    count = 0;
    while( *s != '\0')
    {
        s++;
        count++;
    }
    return count;
}
/**
* Concatena la cadena source en la de destino
* @param primero cadena de destino
* @param segudno cadena fuente
* @param tercero tamaño tital del buffer de destino incluyendo el espacio disponible
* @return retorna la longitud de la cadena resultante de la unión
*/
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    char *tempDest = dst;
    size_t lengthD= ft_strlen(dst);  
    
    if(lengthD >= size)
    {
        return lengthD; 
    }
    while (*tempDest != '\0' && size > 0)
    {
        tempDest++;
        size--;
    }
    while(*src != '\0' && size > 1)
    {
       *tempDest = *src;
        tempDest++;
        src++;
        size--;
    }
     if (size > 0) {
        *tempDest = '\0';
    }
    return ft_strlen(dst);
}

int main() {
    char destino[20] = "Hola ";
    char fuente[] = "mundo feliz!";
    size_t tamaño_destino = sizeof(destino);

    // Concatenar la cadena fuente en el destino usando strlcat()
    size_t longitud_resultante = ft_strlcat(destino, fuente, tamaño_destino);

    // Imprimir el resultado
    printf("La cadena resultante es: %s\n", destino);
    printf("La longitud total de la cadena resultante es: %zu\n", longitud_resultante);

    return 0;
}