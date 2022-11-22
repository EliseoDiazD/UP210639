#include <iostream>
#include <cmath>
#include "MiLibro.h"

using namespace std;

int main()
{
    double b = 45;
    double x1 = 0;
    double x2 = 1;
    double Es = 0.0001;
    double Er = abs(x2 - x1);
    double r = 0;
    int i = 0;

    while (Er > Es)
    {
        x1 = r;

        r = r + Coseno(b, i);

        x2 = r;

        Er = abs(x2 - x1);

        i++;
    }


    cout << r << endl;

    cout << "HECHO. . ." << endl;

    return 0;
}
