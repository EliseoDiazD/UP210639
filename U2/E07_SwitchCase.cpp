/*
    Unidad 2
    Nombre del programa: Tramos
    Autor: Eliseo Diaz Delgadillo
    proposito del programa: Calcula el impuesto y el monto al pagar dependiendo la renta de tu casa
    fecha: 27/09/2022
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int r = 0;
    int a = 3, b = 5;
    int o = 2, O = 0;
    cout << "Bienvenido  :D \n  ¿Que quieres hacer, bro? \n1)Suma \n2)Multiplicacion \n3)Division \n4)Resta " << endl;
    // cin >> o;

    do
    {
        switch (o)
        {

        case 1:
        {

            //cout << " Suma \n  Dame 2 numeros ";
            //cin >> a , b;

            r = a + b;

            cout << "El resultado es: " << r;
            break;
        }

        case 2:
        {

            //cout << " Multiplicacion \n  Dame 2 numeros ";
            //cin >> a, b; 

            r = a * b;

            cout << "El resultado es: " << r;
            break;
        }
        case 3:
        {
            //cout << " Division \n  Dame 2 numeros ";
            // cin >> a, b;

            r = a / b;

            cout << "El resultado es: " << r;
            break;
        }

        case 4:
        {
            //cout << " Resta \n  Dame 2 numeros ";
            // cin >> a, b;

            r = a - b;


            cout << "El resultado es: " << r;
            break;
        }
        default:
        {
            cout << "NO JALA , NO CHINGUES D: \n";
        }
        break;

        }

    } while (O != 0);

    return 0;

}