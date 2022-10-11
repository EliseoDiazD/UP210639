#include <stdio.h>
#include <string.h>
#define LONGITUD_MAXIMA 1000

unsigned long long binarioADecimal(char *cadenaBinaria, int longitud);

int main()
{

    char binario[LONGITUD_MAXIMA];
    printf("Introduce un número binario de hasta %d caracteres:\n",
           LONGITUD_MAXIMA - 1);
    fgets(binario, LONGITUD_MAXIMA, stdin);
    binario[strcspn(binario, "\r\n")] = 0;

    unsigned long long decimal = binarioADecimal(binario, strlen(binario));
    printf("El binario %s es %llu en decimal", binario, decimal);
    return 0;
}

unsigned long long binarioADecimal(char *cadenaBinaria, int longitud)
{
    unsigned long long decimal = 0;
    int multiplicador = 1;
    char caracterActual;
    for (int i = longitud - 1; i >= 0; i--)
    {
        caracterActual = cadenaBinaria[i];
        if (caracterActual == '1')
        {
            decimal += multiplicador;
        }
        multiplicador = multiplicador * 2;
    }
    return decimal;
}
