#include <stdio.h>
#include <stdlib.h>

/**
 * La función convierte la porción inicial de la cadena apuntada por nptr a int.
 * @param primero cadena que se va a convertir a int
 * @return el valor convertido a int
 */
int ft_atoi(const char *nptr)
{
    int num;
    int sign;
    num = 0;
    sign = 1;
    while (*nptr == ' ')
        *nptr++;
    if (*nptr == '-')
    {
        sign = -1;
        nptr++;
    }
    else if (*nptr == '+')
    {
        nptr++;
    }
    while (*nptr >= '0' && *nptr <= '9')
        num = num * 10 + (*nptr++ - '0');
    return num * sign;
}

int main()
{
    char num_str[] = " -58 06  9j 1  2345"; // Cadena de caracteres que representa un número
    int num1;
    int num2;

    // Usando atoi para convertir la cadena de caracteres a un entero
    num1 = atoi(num_str);
    num2 = ft_atoi(num_str);

    // Imprimiendo el resultado
    printf("El número convertido es: %d\n", num1);
    printf("El número convertido es: %d\n", num2);

    return 0;
}