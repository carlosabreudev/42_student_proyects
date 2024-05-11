#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
   return (c >= 0 && c <= 127);
}

int main() {
    char ch = 'y'; // Carácter a verificar

    if (ft_isascii(ch)) {
        printf("%c es un carácter ASCII válido.\n", ch);
    } else {
        printf("%c no es un carácter ASCII válido.\n", ch);
    }

    return 0;
}