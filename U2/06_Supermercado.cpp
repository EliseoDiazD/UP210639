/*
    Unidad 2
    Nombre del programa: SuperMercado
    Autor: Eliseo Diaz Delgadillo
    proposito del programa: Realizar un programa que lea indefinidamente cantidades de productos y su precio, y al final
    indique el total de la factura. Para saber que se ha terminado con la compra, se deberáingresar un 0 en la cantidad.
    fecha: 10/10/2022
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int c = 0;
    int p = 0;
    int t = 0;
    int s = 0;

    do
    {
        cout << "Cantidad de productos \n";
        cin >> c;
        cout << "Precio por unidad \n";
        cin >> p;

        s = c * p;

        t = t + s;

    } while ( c != 0);

    cout << "\n El total a pagar es: " << t;
    cout << "vuelva pronto :D \n";
    
    return 0;

}