#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int r;

    for (int n = 1; n <= 100; n++)
    {
        for (int i = 1; i <= 100; i++)
        {
            r = n * i;
            cout << n << "X" << i << "=" << r << endl;
        }
    }
}