#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    int r, m;
    char opcion = 's';

    printf("Tabla De Multiplicacion \n");
    printf("Deseas iniciar el proceso s/n \n");
    scanf("%s", &opcion);

    while (opcion == 's')
    {
        printf("Numero:  \n");
        scanf("%d", &n);
        printf("Tabla de multipliacion (Do-While) Acendente\n");

        m = 0;

        do
        {
            m = m + 1;
            r = n * m;
            printf("%d X %d = %d \n", n, m, r);

        } while (m < 10);

        printf("Tabla de multipliacion (Do-While) Decendente\n");

        m = 10;

        do
        {
            r = n * m;
            printf("%d X %d = %d \n", n, m, r);
            m = m - 1;

        } while (m > 0);

        printf("Quieres continuar s/n \n");
        scanf("%s", &opcion);
    }

    printf("Nos vemos \n");

    return 0;
}
