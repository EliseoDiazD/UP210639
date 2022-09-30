/*
    Unidad 1
    Nombre del programa: Ciclo
    Autor: Eliseo Diaz Delgadillo
    proposito del programa: Utilizar un ciclo for para sumar numeros impares y pares
    fecha:
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int suma = 0;
    int par = 10;
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
    printf("el reusltado de la suma es: %d \n", par);
    printf("el reusltado de la suma es: %d \n", impar);
    printf("el reusltado de la suma es: %d \n", suma );
    return 0;
}