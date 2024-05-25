#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
    int count;
    count = 0;
    while (s[count] != '\0')
    {
        count++;
    }
    return count;
}

char *ft_strchr(const char *str, int ch)
{
  char ch_str = (char)ch;
  int encontrado = 0;

  while (*str != '\0')
  {
    if (*str == ch_str)
    {
      encontrado = 1;
      return (char *)str;
    }
    str++;
  }
  if (!encontrado)
  {
    write(1, "No se ha encontrado el caracter especificado", 45);
  }
  return NULL;
}
char *ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t destL = ft_strlen(dst);
    size_t srcL = ft_strlen(src);
    if (destL < srcL || size == 0)
        return NULL;
    char *dstTemp = dst;
    while (*src != '\0' && size > 0)
    {
        *dstTemp = *src;
        dstTemp++;
        src++;
        size--;
    }
    if (size > 0)
        *dstTemp = '\0';
    return dst;
}


/**
 * Función que elimina todos los caracteres de la string ’set’ desde el principio y desde el final de ’s1’,
 * hasta encontrar un caracter no perteneciente a ’set’. La string resultante se devuelve con una reserva de malloc(3)
 * @param s1 La string que debe ser recortada.
 * @param set: Los caracteres a eliminar de la string.
 * @return La string recortada. NULL si falla la reserva de memoria.
 */
char *ft_strtrim(char const *s1, char const *set)
{
    if (!s1 || !set)
        return NULL;
    char const *start = s1;
    char const *end = s1 + ft_strlen(s1) - 1;
    //busco los caracteres de mi cadena que coincidan con los de la de recorte
    while(*start && ft_strchr(set, *start))
    {
        start++;
    }
    while(end > start && ft_strchr(set, *end))
    {
        end--;
    }
    // Calcula la longitud de la nueva cadena
    size_t len = end - start + 1;

    // Asigna memoria para la nueva cadena
    char *strTrim = (char *)malloc((len + 1) * sizeof(char));
    if (!strTrim) {
        return NULL; // Verifica si la asignación de memoria falló
    }
    // Copia los caracteres relevantes
    ft_strlcpy(strTrim, start, len);
    strTrim[len] = '\0'; // Agrega el terminador nulo

    return strTrim;
}

int main(void) {
    const char *original = "  \t  Hola, Carlos!  \n ";
    const char *set = " \t\n"; // Caracteres a eliminar
    char *trimmed = ft_strtrim(original, set);

    if (trimmed != NULL) {
        printf("Cadena original: '%s'\n", original);
        printf("Cadena recortada: '%s'\n", trimmed);
        free(trimmed); // Libera la memoria asignada
    } else {
        printf("Error al recortar la cadena.\n");
    }

    return 0;
}