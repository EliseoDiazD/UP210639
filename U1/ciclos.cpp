#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int suma, par, impar;
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        if ( i % 2 == 0)
        par = par + i;
        else 
        impar = impar + i;
    }
    printf("el reusltado de la suma es: %d", par);
    printf("el reusltado de la suma es: %d", impar);
    suma= par + impar;
    printf("el reusltado de la suma es: %d", suma );
    return 0;
}