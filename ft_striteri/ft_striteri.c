#include <stdio.h>
#include <string.h>

/**
 * Función que a cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros el índice de cada
 * carácter dentro de ’s’ y la dirección del propio carácter, que podrá modificarse si es necesario.
 * @param s: La string que iterar.
 * @param f: La función a aplicar sobre cada carácter.
 */
void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    if (s && f)
    {
        unsigned int i = 0;
        while (*s)
        {
            f(i, s);
            i++;
            s++;
        }
    }
}
void print_chars(unsigned int i, char *c)
{
    printf("Character at index %u is: %c\n", i, *c);
}
int main()
{
    char *str = "hola mundo";
    ft_striteri(str, &print_chars);
    return 0;
}
