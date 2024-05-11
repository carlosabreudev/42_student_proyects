#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <locale.h>
#include <ctype.h>

/**
*Función que determina si el caracter es alfabético o no, controla mayúsculas y minúsculas
*/
int ft_isalpha( int ch ){
    if((ch >=65 && ch <= 90) || (ch >=97 && ch <= 122))
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    char ch = '\xdf'; // Carácter a verificar

    if (ft_isalpha(ch)) {
        printf("%c es una letra alfabética.\n", ch);
    } else {
        printf("%c no es una letra alfabética.\n", ch);
    }

    return 0;
}

