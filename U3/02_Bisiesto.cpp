#include <iostream>

using namespace std;

bool esBisiesto(int year)
{
    bool r = true;

    r = year%400 == 0 ||  (year%4 == 0 && year%100 != 0);

    return r;

}

int main()
{
    int a;
    cout << "Dame un anio" << endl;
    cin >> a;

    if (esBisiesto(a)== 0)
    {
        cout << "No es bisiesto" << endl;
    }
    else
    {
        cout << "Es bisiesto" << endl;
    }
    return 0;
}
