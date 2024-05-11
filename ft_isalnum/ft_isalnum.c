#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c<= 'Z') || (c >= '0' && c <= '9'))
    {
        return 1;
    }
   return 0;
}

int main(void) {
    char ch = '8'; // Carácter a verificar

    if (ft_isalnum(ch)) {
        printf("%c es un carácter alfanumérico.\n", ch);
    } else {
        printf("%c no es un carácter alfanumérico.\n", ch);
    }

    return 0;
}