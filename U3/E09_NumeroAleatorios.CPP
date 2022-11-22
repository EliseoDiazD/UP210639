#include <iostream>
#include <time.h>

using namespace std;

#define F 2
#define C 3

int main()
{
    srand(time(NULL));

    int matriz[F][C];
    int matrizT[C][F];

    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            int n = 21+rand()%(10); // 21 al 30 rango de los numeros random

            matriz[i][j] = n;
            cout << matriz[i][j] << "\t";
            matrizT[j][i] = matriz[i][j];

        }
        cout << endl;
    }

    //traspuesa

    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < F; j++)
        {
            cout << matrizT[i][j] << "\t";
        }

        cout <<  endl;
        
    }
    
    cout << ". . . Hecho";

    int cal[5];

    for (int i = 0; i < 5; i++)
    {
        cal[i]=0+rand()%(11);
         cout << cal[i] << endl;
    }

    return 0;
}
