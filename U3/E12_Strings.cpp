#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[]="sida";
    string texto="Universidad UPA";
    string texto2("HolA");


    cout << "  Funcion            " << "Resultado"<< endl;
    cout << "| Contenido:        |" << texto << endl;
    cout << "| Largo:            |" << texto.length() << endl; 
    cout << "| Comparar:         |" << texto.compare("universidad") << endl;
    cout << "| Encontrar:        |" << texto.find(a) << endl;
    cout << "| Subtrc:           |" << texto.substr(6,4)<< endl;
    cout << "| Encuentra_Ultima  |" << texto.find_last_of("i") << endl;
    cout << "| replace:          |" << texto.replace(6,5, "vih") << endl;

    texto = texto + ".";

    cout << "| Concatenar:       |" << texto << endl;

    texto.clear();

    cout << "| Clear:            |" << texto << endl;

    texto.swap(texto2);

    cout << "| Swap:             |" << texto << endl;
    



    return 0;
}
