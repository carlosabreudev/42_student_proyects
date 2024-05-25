#include <unistd.h>

/**
 * Función que envía el carácter ’c’ al file descriptor especificado. Un file descriptor es un identificador numérico que se utiliza
 * para acceder a un archivo abierto en un sistema operativo (Básicamente escribe en un archivo el caracter especificado)
 * 0: Entrada estándar (stdin)
 * 1: Salida estándar (stdout)
 * 2: Salida de error estándar (stderr))
 * @param c: El carácter a enviar. 
 * @param fd: El file descriptor sobre el que escribir.
*/
void ft_putchar_fd(char c, int fd)
{
    if(fd >= 0)
    {
        write(fd, &c, 1);
    }
}