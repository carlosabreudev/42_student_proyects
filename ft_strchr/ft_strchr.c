
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * Función que localiza la primera coincidencia dentro de un string
 * @param primero puntero constante a la primera posición de dirección de memoria del string
 * @param segundo caracter que debe buscar (Se especifica como int para que pueda abarcar mayor cantidad de caracteres ASCII)
 * @return Retorna un puntero al inicio de la coincidencia si la encuentra, de lo contrario será NULL y saldrá el mensaje de error
*/
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

int main(void)
{
  const char *str = "Try not. Do, or do not. There is no try.";
  char target = 'w';
  const char *result = str;

  while ((result = ft_strchr(result, target)) != NULL)
  {
    printf("Found '%c' starting at '%s'\n", target, result);
    ++result; // Increment result, otherwise we'll find target at the same location
  }
}