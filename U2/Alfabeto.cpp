/*
    Unidad 2
    Nombre del programa: Alfabeto 
    Autor: Eliseo Diaz Delgadillo
    proposito del programa: Muestra el alfabeto
    fecha: 28/09/2022
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
    char A = 65;
    char a ='Z';
    int n=0;
    cout << "Alfabeto Mayuscula A-Z" << endl;
    for (char A = 65; A <= 90 ; A++)
    {
       cout << A << endl;
    }
    cout << "Alfabeto Mayuscula Z-A" << endl;
    
    for (int i = 0; i <= 26; i++)
    {
        cout << a << endl;
        a=a-1;
    }
    cout << "Numeros del 1 al 10" << endl;
    for (int n = 0; n <= 10; n++)
    {
        cout << n << endl;
    }
    return 0;   
}
