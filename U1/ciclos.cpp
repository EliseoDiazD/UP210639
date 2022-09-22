#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int suma = 0;
    int par = 0;
    int impar = 0;
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
          par = par + i;   
        }
        else
        {
          impar = impar + i;
        } 
    }
    suma=par+impar;
    printf("el reusltado de la suma es: %d", par);
    printf("el reusltado de la suma es: %d", impar);
    printf("el reusltado de la suma es: %d", suma );
    return 0;
}