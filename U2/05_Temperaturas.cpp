/*
    Unidad 2
    Nombre del programa: Temperatuas
    Autor: Eliseo Diaz Delgadillo
    proposito del programa: Hacer un programa en el que se ingresen 6 temperaturas y determine el promedio, la mas
    baja y la mas alta.
    fecha: 10/10/2022
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int temperatura, sumatoria, mayor, menor;
    for (int i = 1; i <= 6; i++)
    {
        cout << "Ingresar la temperatura " << i;
        cin >> temperatura;
        sumatoria = sumatoria + temperatura;
        if (i == 1)
        {
            mayor = temperatura;
            menor = temperatura;
        }
        else
        {
            if (temperatura > mayor)
            {
                mayor = temperatura;
            }
            else
            {
                if (temperatura < menor)
                {
                    menor = temperatura;
                }
            }
        }
    }
    cout << "El promedio de las 6 temperaturas es:" << sumatoria / 6;
    cout << "La  temperatura mas grande es: " << mayor;
    cout << "La  temperatura mas pequeña es: " << menor;

    return 0;
}