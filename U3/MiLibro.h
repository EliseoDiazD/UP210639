#include <iostream>
#include <cmath>


using namespace std;

long int factorial(int n);
long int permutacion(int, int); 
long int combinacion (int, int);

int suma (int x, int y)
{
    return (x + y);
}

double G2R (double a)
{
    double r = 0;

    r = a * M_PI / 180;

    return r;
}

double Seno (double a)
{
    double r = 0;

    r = sin(G2R(a));

    return r;
}

long int factorial(int n)
{
    long int r = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        r *= i;
    }

    return r;
}

long int permutacion(int m, int p)
{
    long int x = 5, z = 2, t = 1;

    z = x - z;
    x = factorial(x);
    z = factorial(z);

    t = x / z;

    return t;

}

long int combinacion(int m, int p)
{
    long int x = 5, z = 2, t = 1;

    t = permutacion (x, z);

    t = t / factorial(z);

    return t;

}


double Coseno (double a, double i)

{
    double r = 0;

    a = G2R(a);

    r = r + pow(-1,i) * pow(a,2*i)/ factorial(2*i);
    
    return r;


}

/* 

1) Biseccion LISTO

2) Funcion de Grados a Radianes, Radianes a Grados  LISTO

3) Es bisiesto  año%400=0 ||  (año%4 == 0 && año %100 == 0) (año) funcion  LISTO

4) Coseno (-1)n x2n/(2n)! LISTO

5) Desviacion Estandar (poblacional) 

6) Desgloce de moneda 

7) Numeros Romanos [1 - 3999]

8) Ordenar un Vector

9) Realizar el Rfc

10) Funcion recursivo (funcion que se llama a si misma)

*/

