/*
    Unidad 2
    Nombre del programa: Evaluacion de edades
    Autor: Eliseo Diaz Delgadillo
    proposito del programa: Dependiendo la edad dada se categoriza en 4 clases "1er edad",  "2da edad", "3er edad" y "Horas extras"
    fecha:
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int e;
    cout << "dime tu edad \n";
    cin >> e;
    if (e >= 1 && e <= 150)
    {
        if (e <= 30) {
            printf("1er edad \n");
        }
        else if (e >= 31 && e <= 60) {
            printf("2da edad \n");
        }
        else if (e >= 61 && e <= 90) {
            printf("3er edad \n");
        }
        else {
            printf("Horas Extras \n");
        }
    }
    else
        printf("dato invalido \n");

    return 0;
}