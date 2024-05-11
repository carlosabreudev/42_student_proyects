#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
    if(c >= 'A' && c<= 'Z')
    {
        c+= 32;
        return c;
    }
    return 0;
}
int main() {
    char c = 'A';
    char uppercase_c = ft_toupper(c);
    
    printf("Carácter original: %c\n", c);
    printf("Carácter en minúscula: %c\n", uppercase_c);
    
    return 0;
}