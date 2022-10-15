#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int doble(int a) //Funcion que dobla el resultado del numero dado
{
    int r;
    r = a * 2;
    return r;
}
int sumatoria(int n)
{
    int x = 0, i = 0;

    for (int i = 0; i <= n; i++)
    {
        x = x + i;
    }
    return n; 
}

int main()
{
    int x = 10;
    // int r = doble(x);// no afecta la variable que uses, en el proceso va a convertirla a la asignada en la funcion :D
    int r = sumatoria(x);

    cout << r << endl;
    return 0;
}