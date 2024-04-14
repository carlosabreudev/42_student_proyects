#include <string.h>
#include <stdio.h>
#include <unistd.h>

 int ft_strlen(const char *str)
 {
     int count = 0;
     while(*str != '\0')
     {
         count++;
         str++;
     }
     return count;
 }

/**
 * Función que localiza la última coincidencia dentro de un string (reverse)
 * @param primero puntero constante a la primera posición de dirección de memoria del string
 * @param segundo caracter que debe buscar (Se especifica como int para que pueda abarcar mayor cantidad de caracteres ASCII)
 * @return Retorna un puntero al inicio de la coincidencia si la encuentra, de lo contrario será NULL y saldrá el mensaje de error
 */
char *ft_strrchr(const char *str, int ch)
{
    int encontrado = 0;
    //Apunto a la última posición de la dirección de memoria del string y la almaceno en una constante 
    const char *ptr = str + (ft_strlen(str) - 1);
    while (ptr >= str)
    {
        if (*ptr == ch)
        {
            encontrado = 1;
            return (char *)ptr;
        }
       ptr--;
    }
    if (!encontrado)
        write(1, "No se ha encontrado el caracter especificado\n", 45);
    return NULL;
}

int main(void)
{
    char szSomeFileName[] = "foo/bar/foobar.txt";
    char *pLastSlash = ft_strrchr(szSomeFileName, '/');
    char *pszBaseName = pLastSlash ? pLastSlash + 1 : szSomeFileName;
    printf("Base Name: %s", pszBaseName);
}