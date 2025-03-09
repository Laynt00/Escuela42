#include <unistd.h>

int main(int argc, char const *argv[])
{
    int i;
    int flg = 0; // Inicializar flg a 0

    if (argc == 2)
    {
        i = 0;
        // Saltar espacios y tabuladores al inicio
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;

        // Procesar el resto del string
        while (argv[1][i])
        {
			//Mientras haya space o tab ignoramos y sumamos i
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                flg = 1; // Marcar que se encontró un espacio o tabulador
            else
            {
                // Si se encontró un espacio/tabulador antes, imprimir un espacio
                if (flg)
                {
                    write(1, " ", 1);
                    flg = 0; // Reiniciar la bandera
                }
                // Imprimir el carácter actual
                write(1, &argv[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}