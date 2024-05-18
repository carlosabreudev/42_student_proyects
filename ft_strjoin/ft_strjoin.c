#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcat(char *s1, char const *s2)
{
    char *s1Temp = s1;
    while (*s1Temp != '\0')
        s1Temp++;
    while (*s2 != '\0')
        *s1Temp++ = *s2++;
    *s1Temp = '\0';
    return s1;
}

char *ft_strcpy(char *s1, char const *s2)
{
    char *s1Temp = s1;
    while ((*s1Temp++ = *s2++) != '\0')
        ;
    return s1;
}
/**
 * Función que une una cadena a otra
 * @param s1 La primera string.
 * @param s2 La string a añadir a ’s1’.
 * @return La substring resultante. NULL si falla la reserva de memoria.
 */
char *ft_strjoin(char const *s1, char const *s2)
{
    if (!s1 || !s2)
    {
        // Verifico que los punteros no sean nulos
        return NULL;
    }
    int s1Len = strlen(s1);
    int s2Len = strlen(s2);

    char *strJoin = (char *)malloc((s1Len + s2Len + 1) * sizeof(char));
    if (strJoin == NULL)
        return NULL;

    ft_strcpy(strJoin, s1);
    ft_strcat(strJoin, s2);
    return strJoin;
}

int main(void)
{
    char cad1[] = "Hola";
    char cad2[] = " Carlos";
    char *resultado = ft_strjoin(cad1, cad2);
    printf("Cadena resultante: %s", resultado);
    return 0;
}