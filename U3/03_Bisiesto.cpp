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
    cout << esBisiesto(2022) << endl;
    return 0;
}
