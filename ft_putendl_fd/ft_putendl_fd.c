#include <unistd.h>

/**
 * Función que envía el puntero de la cadena 's' al file descriptor especificado y le adiciona un salto de línea. Un file descriptor es un identificador numérico que se utiliza
 * para acceder a un archivo abierto en un sistema operativo (Básicamente escribe en un archivo la cadena especificada)
 * 0: Entrada estándar (stdin)
 * 1: Salida estándar (stdout)
 * 2: Salida de error estándar (stderr))
 * @param str: La cadena a enviar.
 * @param fd: El file descriptor sobre el que escribir.
 */
void ft_putendl_fd(char *s, int fd)
{
    if (fd >= 0 && s != NULL)
    {
        while (*s)
        {
            write(fd, s, 1);
            s++;
        }
        write(fd, '\n', 1);
    }
}