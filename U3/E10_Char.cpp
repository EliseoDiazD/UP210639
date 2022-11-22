#include <iostream>
#include <string.h>


using namespace std;

int main(int argc, char const *argv[])
{
    char letra = 'a';
    char texto[20]="uni10vEr20sida41d";
    char texto2[]= {'A','D','I','O','S', '\0'};
    char texto3[100]= "Universidad Politecnica De Aguascalientes";
    int n = 0 ;

    for (int i = 0; texto[i] != '\0'; i++)
    {


        cout << texto[i] << "  ";
        
    }

    cout << endl;

    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == 'a' ||  texto[i] == 'e'  || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u')
        {
            //cout << texto[i] << "  ";
        }
        else 
        {
            cout << texto[i] << "  ";
        }
    }

    cout << endl;


    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (isdigit(texto[i]))

        cout <<  texto[i] << "  ";
    }

    cout << endl;
    
    for (int i = 0; texto[i] != '\0'; i++)
     {
        if (islower(texto[i]) && isalpha(texto[i]))
        {
            texto[i] = toupper(texto[i]);

            cout << texto[i] << "  ";
        }
        else if (isupper(texto[i]) && isalpha(texto[i]))
        {
            texto[i] = tolower(texto[i]);

            cout << texto[i] << "  ";
        }

        
    }

    for (int i = 0; texto3[i] != '\0'; i++)
    {
        if (strchr(texto3, ' '))
        {
            texto3 = texto3;
            n++;
        }
    }

    cout << endl;
 
    strcat(texto3 , "  La mejor  "); //Concatenar :,

    cout << texto3 << " ";

    cout << endl;
    
    cout << strchr(texto3, ' '); // traer substring

    cout << endl;

    cout << n;

    
    return 0;
}
