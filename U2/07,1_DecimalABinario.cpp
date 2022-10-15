
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int p = 18;
    int s = 0;
    float r = 0;

    string Binario;

    cout << "Bienvenido al convertidor de decimal a binario \n";
    cout << "Ingrese el numero decimal \n";
    // cin >> p;
    do
    {
        r = p % 2;

        p = p / 2;

        if (r == 0)

        {
            Binario = '0' + Binario; // Te lo imprime al reves 
            // Binario = Binario + '0'; // te lo imprime normal

        }

        else
        {
            Binario = '1' +  Binario;
        }

        s = s + 1;

    } while (s <= 7);

    cout << Binario << endl;

    return 0;

}