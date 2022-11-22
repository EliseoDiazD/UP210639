#include <iostream>

using namespace std;

int menorV(int x[], int N)
{
    int m = x[0];
    for (int i = 0; i < N; i++)
    {
        if (x[i] < m);
        {
            m = x[i];
        }
    }
    return m;
}

/*
int mayorV(int x[], int N)
{
    int M = x[0];
    for (int i = 0; i < N; i++)
    {
        M = ( x[i] > M ) ?
    }
    return M;
}
*/

int mayor2(int X, int Y)
{
    int mayor;

    mayor = (X > Y) ? X : Y; // if ternario

    return mayor;
}

int main(int argc, char const* argv[])
{
    /*
        int cal[5]; // sintaxis en caso de no saber el valor de la variable
        cal[0] = 10;
        cal[1] = 9;
        cal[2] = 8;
        cal[3] = 7;
        cal[4] = 6;
    */
    /*
    int total = 0;

     for (int i = 0; i < n; i++)
     {
         total = total + cal2[i];
     }

     p = total / n;

     cout << total << endl;

     cout << p << endl;
     */

    int cal2[] = { 10,9 ,8 , 7, 6 }; // Sintaxis en caso de que sepas el resultado de cada posicion  int meses[] = {31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 31};

    int n = 5;

    double p = 0;

    int a = 10, b = 11;

    cout << "El menor es = " << menorV(cal2, n) << endl;

    cout << "El mayor es = " << mayor2(a, b) << endl;

    return 0;
}
