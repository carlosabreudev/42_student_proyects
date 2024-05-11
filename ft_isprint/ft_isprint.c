#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
  return (c >= 32 && c <= 126);
}

int main() {
    char ch = '\b'; // Carácter a verificar

    if (ft_isprint(ch)) {
        printf("%c es un carácter imprimible.\n", ch);
    } else {
        printf("%c no es un carácter imprimible.\n", ch);
    }

    return 0;
}