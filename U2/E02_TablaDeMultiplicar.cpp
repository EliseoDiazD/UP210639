/*
    Unidad 2
    Nombre del programa: Tabla de multiplicar
    Autor: Eliseo Diaz Delgadillo
    proposito del programa: Dependiendo la edad dada se categoriza en 4 clases "1er edad",  "2da edad", "3er edad" y "Horas extras"
    fecha:
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
    int n = 5;
    int r = 0;
    int m = 0;
/*
    cout << "¿Cual tabla de multiplacion quieres realizar?";
    cin >> n;
*/
    cout << "Tabla de multipliacion Acendente\n";

    for (int i = 1; i <= 10; i++)
    {
        r = n * i;
        cout << n << "X" << i << "=" << r << endl;
    }

    cout << "Tabla de multipliacion Decendente \n";

    for (int i = 10; i >=1; i--)
    {
        r = n * i;
        cout << n << "X" << i << "=" << r << endl; 
    }   

    cout << "Tabla de multipliacion (while) Acendente \n";

    while (m < 10)
    {
        m = m + 1;
        r = n * m;
        cout << n << "X" << m << "=" << r << endl;

    }

    cout << "Tabla de multipliacion (while) Decendente \n";
    
    m=10;

     while (m > 0)
    {
        r = n * m;
        cout << n << "X" << m << "=" << r << endl;
        m = m - 1;

    }

    cout << "Tabla de multipliacion (Do-while) Acendente \n";

    m=0;

    do
    {
        m = m + 1;
        r = n * m;
        cout << n << "X" << m << "=" << r << endl;

    } while (m < 10);

     cout << "Tabla de multipliacion (Do-while) Decendente \n";

    m=10;

    do
    {
        r = n * m;
        cout << n << "X" << m << "=" << r << endl;
         m = m - 1;

    } while (m > 0);

return 0;

}
