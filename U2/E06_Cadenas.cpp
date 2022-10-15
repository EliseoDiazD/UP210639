#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int r = 0;
    int i = 0;
    int a = 0;
    string cadena= "universidad";
    char texto[20] = "PoliTecnicA";
    int longitud= cadena.length();
    for (int i = 0; i < longitud; i++)
    {
        if (cadena[i] == 'i' )
        {
            r = r + 1;
        }
        cout << cadena[i] << " ";
    }

    i = 0;

    while (texto[i] != '\0')
    {
        cout << texto[i] << " ";
        i++;
    }

     for (int i = 0; i < 20; i++)
    {
        cout << texto[i] << " ";
    }

    cout << "La letras mayusculas son: \n" << a << endl; 
    cout << ". . . lito \n";

    int contador;
    char letra = 's';
    return 0;
}