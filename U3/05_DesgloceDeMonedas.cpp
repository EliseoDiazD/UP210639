#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int c = 3699;
    int a[10];
    int m[] = { 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    int g = 0, p = 0;

    g = c;

    for (int i = 0; i <= 10; i++)
    {
        if (c >= m[i])
        {
            a[i] = 0;

            while (c >= m[i])
            {
                cout << c / m[i] << " DE " << m[i] << endl;

                c = c % m[i];

                a[i]++;
            }

        }

    }

    cout << "Total = " << g << endl;

    return 0;
}