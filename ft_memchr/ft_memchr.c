
#include <stdio.h>
#include <string.h>

/**
 * Función que escanea los n bytes iniciales del área de memoria señalada por s para la primera instancia de c. Tanto c como los bytes del área de memoria señalada por s se interpretan como caracteres sin signo.
 * @param primero área de memoria donde se quiere buscar.
 * @param segundo cantidad de bytes que se quieren buscar.
 * @param tercero tamaño del área donde se busca.
 * @return el puntero a la posicion de memoria donde se encuentra el caracter.
*/
void *ft_memchr(const void *s, int c, size_t n)
{
    const char *sP = (const char *)s;
    while(*sP != '\0' && n > 0)
    {
        if(*sP == c)
        {
            return (char *)sP;
        }
        *sP++;
        n--;
    }
}
int main() {
    const char *str = "Hello, world!";
    char ch = 'd';

    // Buscar la primera aparición de 'o' en str
    const char *result = ft_memchr(str, ch, strlen(str));

    if (result != NULL) {
        printf("'%c' encontrado en la posición %ld.\n", ch, result - str);
    } else {
        printf("'%c' no encontrado.\n", ch);
    }

    return 0;
}