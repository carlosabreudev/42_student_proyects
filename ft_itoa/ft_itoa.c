#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * Función que utilizando malloc(3), genera una string que representa el valor entero recibido como argumento.
 * Los números negativos tienen que gestionarse.
 * @param n: el entero a convertir.
 * @return La string que represente el número. NULL si falla la reserva de memoria.
 *
 */
char *ft_itoa(int n)
{
    unsigned int count = 0;
    if (n == 0 || n < 0)
    {
        count = 1; // Caso especial: número igual a 0. Aumento el contador
    }
    // almaceno temporalmente el valor de n para no modificarlo
    int temp = n;
    while (temp != 0) // Aquí a partir del count obtengo la cantidad de memoria que necesario
    {
        count++;
        temp /= 10;
    }
    char *new_str = (char *)malloc((count + 1) * sizeof(char));
    if (new_str == NULL)
    {
        return NULL;
    }
    new_str[count] = '\0';
     if (n == 0) {
        new_str[0] = '0';
        return new_str;
    }
    if (n < 0)
    {
        new_str[0] = '-'; // Agrego el símbolo de menos si es necesario
        n = -n;
    }
    // Construir la cadena de forma recursiva
    int i = count - 1; // Pongo al iterador en la última posición de la cadena
    while (n != 0)     // Itero hasta que n sea 0
    {
        new_str[i] = '0' + (n % 10); // Pongo en la nueva cadena en la posición de i(desde el final) la conversión del número a caracter
        n /= 10;                     // El valor de n se va a dividir por 10 para coger el dígito
        i--;
    }
    return new_str;
}

int main()
{
    // int num1 = 123;
    int num2 = -456;
    int num3 = 0;

    // char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);
    char *str3 = ft_itoa(num3);

    // printf("Número 1: %s\n", str1);
    printf("Número 2: %s\n", str2);
    printf("Número 3: %s\n", str3);

    // Liberar la memoria asignada dinámicamente
    // free(str1);
    free(str2);
    free(str3);

    return 0;
}