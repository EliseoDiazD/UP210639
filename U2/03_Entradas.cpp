/*
    Unidad 2
    Nombre del programa: Tramos 
    Autor: Eliseo Diaz Delgadillo
    proposito del programa: Escribir un programa para una empresa que tiene salas de juegos para todas 
    las edades y quiere calcular de forma automática el precio que debe cobrar a sus clientes por entrar
    fecha: 10/10/2022
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () 
{
    int e=5;
    cout << "Bievenido \n" << "¿Cuantos años tienes? \n";
    cin >> e;
    if (e < 4)
    { 
        int p=0;
        cout << "\n Bienvenido";
    }
    else if  (e >= 4 && e <= 18)
    { 
        int p=5;
        cout << "\n Paga " << p << "\n Bienvenido :D";
    }
    else if (e > 18)
    { 
        int p=10;
        cout << "\n Paga" << p << "\n Bienvenido :D";
    }

    else 

    cout << ("\n Vuelva pronto");

    return 0;

}