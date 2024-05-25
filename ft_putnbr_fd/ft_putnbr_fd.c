#include <stdio.h>
#include <fcntl.h> // Para open y close
#include <stdio.h> // Para printf y perror

/**
 * Función que envía el número ’n’ al file descriptor especificado. Un file descriptor es un identificador numérico que se utiliza
 * para acceder a un archivo abierto en un sistema operativo (Básicamente escribe en un archivo el caracter especificado)
 * 0: Entrada estándar (stdin)
 * 1: Salida estándar (stdout)
 * 2: Salida de error estándar (stderr))
 * @param n: El número a enviar.
 * @param fd: El file descriptor sobre el que escribir.
 */
void ft_putnbr_fd(int n, int fd)
{
    if (fd >= 0)
    {
        // compruebo para n < 0 que me escriba un - en el file descriptor y me reconozca a n como negativo
        if (n < 0)
        {
            write(fd, "-", 1);
            n = -n;
        }
        // si es mayor o igual de 10 tendra dos cifras y hay que seleccionar los digitos
        if (n >= 10)
        {
           //hago llamada recursiva a la función para que me obtenga cada digito y realice la operación varias veces
            ft_putnbr_fd(n / 10, fd);
        }
        //convierto el resto del dígito obtenido en caracter
        char c = n % 10 + '0';
        write(fd, &c, 1);
    }
}

int main() {
    // Abre un archivo para escritura
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Escribe un número en el archivo usando ft_putnbr_fd
    int number = 135;
    ft_putnbr_fd(number, fd);

    // Cierra el archivo
    if (close(fd) == -1) {
        perror("Error al cerrar el archivo");
        return 1;
    }

    printf("Número escrito  correctamente en el archivo.\n");
    return 0;
}