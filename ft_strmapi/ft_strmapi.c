#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Función donde a cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y el propio carácter. Genera una nueva string con el resultado del uso sucesivo
de ’f’
* @param s: La string que iterar.
* @param f: La función a aplicar sobre cada carácter.
* @return La string creada tras el correcto uso de ’f’ sobre cada carácter. NULL si falla la reserva de memoria.
*/

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    // comprobrar si s no es null
    if (s == NULL)
        return NULL;
    // obtener la longitud de la cadena para reserva memoria e iterar
    int len = strlen(s);
    char *new_str = (char *)malloc((len + 1) * sizeof(char));
    // compruebo que la memoria reservada no sea Nula
    if (new_str == NULL)
        return NULL;
        unsigned int i = 0;
    //itero sobre s y le asigno a cada posicion el valor de la funcion f
    while (i < len)
    {
        new_str[i] = f(i, s[i]);
        i++;
    }
    //asignar caracter nulo al final de la cadena
    new_str[len] = '\0';
    return new_str;
}

char example_func(unsigned int i, char c)
{
    // sumo el indice del valor ASCII del caracter
    return c + i;
}

int main()
{
    // Cadena de entrada
    char s[] = "abc";

    // Llamar a ft_strmapi con la cadena de entrada y la función example_func
    char *result = ft_strmapi(s, example_func);

    // Verificar si la nueva cadena no es NULL
    if (result != NULL)
    {
        // Imprimir la nueva cadena
        printf("Resultado: %s\n", result); // Imprime "ace"

        // Liberar la memoria asignada para la nueva cadena
        free(result);
    }

    return 0;
}