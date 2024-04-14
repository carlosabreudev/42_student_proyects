#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * Función que busca una subcadena dentro de otra, según la cantidad de bytes especificados como argumento
 * @param param1 Cadena principal donde se va a buscar
 * @param param2 Subcadena que se va a buscar
 * @param param3 Número máximo de caracteres a comparar dentro de la cadena
 * @return Un puntero al inicio de la subcadena si la encuentra totalmente, de lo contrario devolverá NULL
*/
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i = 0;
    int resultado = 0;
    while (i < len)
    {
        if(haystack == needle)
        {
            resultado = 1;    
            return (void *)haystack;
        }
        i++;
    }
    if(!resultado)
    {
        write(1, "No se ha podido encontrar el string especificado\n", 49);
    }    
    return NULL;
}

int main() {
    const char *haystack = "La respuesta es 42";
    const char *needle = "es";
    printf("Resultado: %s\n", ft_strnstr(haystack, needle, 19));
    return 0;
}