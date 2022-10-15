/*
    Unidad 2
    Nombre del programa: Tramos
    Autor: Eliseo Diaz Delgadillo
    proposito del programa: Escribir un programa que lea la puntuación del usuario e indique su nivel de rendimiento,
    así como la cantidad de dinero que recibirá el usuario
    fecha: 10/10/2022
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    float p = 40;
    float P=0.0f;
    float r=0.0f;
    char rendimiento = 'I';

    cout << "Bienvenido, Inserte la puntacion del empleado"; //Toma valores enteros y dentro del programa ya lo trasforma a punto decimal 
    cin >> p;

    if (p == 0)
    {
        rendimiento = 'I';
        if (p == 0 || p == 40 || p >= 60)

            P = p / 100; //Aqui cambia el valor con punto decimal 
            r = P * 2400; 

             cout << "\n El rendimiento del empleado es: " << rendimiento << " \n Recibira :" << r;
    }
    else if (p == 40)
    {
        rendimiento = 'A';
        if (p == 0 || p == 40 || p >= 60)

            P = p / 100;
            r = P * 2400;

            cout << "\n El rendimiento del empleado es: " << rendimiento << " \n Recibira :" << r;
    }
    else if (p >= 60)
    {
        rendimiento = 'M';
        if (p == 0 || p == 40 || p >= 60)

            P = p / 100;
            r = P * 2400;

            cout << "\n El rendimiento del empleado es: " << rendimiento << " \n Recibira :" << r;
    }
    else
        cout << "\n No califica";

    return 0;
}
