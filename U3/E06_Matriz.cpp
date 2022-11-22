#include <iostream>

using namespace std;

int main()
{
    int f = 2, c = 3;
    int mz[f][c];  // [Fila]  [Columna]
    int n = 0;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            /* cout << "Dame el valor de " << i << " , " << j << endl;
             cin >> n;
             */
            int contador = 1;
            mz[i][j] = contador;
            contador++;
        }
    }
    for (int i = 0; i < f; i++)
    {

        for (int j = 0; j < c; j++)
        {
            cout << mz[i][j] << "\t" << endl;
        }

        cout << endl;
    }

    return 0;
}
