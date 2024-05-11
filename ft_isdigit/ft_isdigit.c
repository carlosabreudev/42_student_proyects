#include <stdio.h>
#include <ctype.h>

int ft_isdigit( int ch ){
    if(ch >='0' && ch <= '9')
    {
        return 1;
    }
    return 0;
}

int main() {
    char ch = '7'; // Carácter a verificar

    if (ft_isdigit(ch)) {
        printf("%d es un dígito.\n", ch);
    } else {
        printf("%d no es un dígito.\n", ch);
    }

    return 0;
}