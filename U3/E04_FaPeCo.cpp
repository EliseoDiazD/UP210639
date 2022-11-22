#include <iostream>
#include "MiLibro.h"

using namespace std;

int main()
{
    long int r;
    
    r = factorial(0);

    r = combinacion(5, 2);

   cout << permutacion(5, 2) << endl;
   cout << combinacion(5, 2) << endl;
   cout << r <<  endl;

    return 0;
}

