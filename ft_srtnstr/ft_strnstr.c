#include <stdio.h>
#include <string.h>
#include <unistd.h>

int ft_strlen(const char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

/**
 * Función que busca una subcadena dentro de otra, según la cantidad de bytes especificados como argumento
 * @param param1 Cadena principal donde se va a buscar
 * @param param2 Subcadena que se va a buscar
 * @param param3 Número máximo de caracteres a buscar dentro de la cadena
 * @return Un puntero al inicio de la subcadena si la encuentra totalmente, de lo contrario devolverá NULL
 */
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t resultado = 0;
    if(ft_strlen(needle) == 0)
    {
        write(1, "La cadena a buscar no puede estar vacía\n", 42);
        return NULL;
    }
    size_t len_substr = ft_strlen(needle);
    const char *temp = needle;
    while (i < len)
    {
        while (*haystack == *needle && len_substr > 0)
        {
            len_substr--;
            haystack++;
            needle++;
        }
        if (len_substr == 0)
        {
            resultado = 1;
            return (void *)temp;
        }
        haystack++;
        i++;
    }
    if (!resultado)
    {
        write(1, "No se ha podido encontrar el string especificado\n", 49);
    }
    return NULL;
}

int main()
{
    const char *haystack = "La respuesta es 42";
    const char *needle = "es";
    printf("Resultado: %s\n", ft_strnstr(haystack, needle, 5));
    return 0;
}