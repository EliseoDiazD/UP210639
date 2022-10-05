/*
    Unidad 2
    Nombre del programa: Tramos 
    Autor: Eliseo Diaz Delgadillo
    proposito del programa: Calcula el impuesto y el monto al pagar dependiendo la renta de tu casa
    fecha: 27/09/2022
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () 
{ 
   int R;
   int t;
   int T;
   cout << "Cual es el monto de tu renta \n";
   cin >> R;
   if (R >=0 && R <= 65000)
    {
        if (R < 10000 ) {
            printf("Impuesto a pagar de 5%\n");
            t=R*.05;
            T=R+t;
            cout << "Total a pagar" << T << endl;
            
        }

        else if (R >= 10000 && R < 20000) {
            printf("Impuesto a pagar de 15%\n");
            t=R*.15;
            T=R+t;
            cout << "Total a pagar" << T << endl;
            
        }
        else if (R >= 20000 && R < 35000) {
            printf("Impuesto a pagar de 20%\n");
            t=R*.2;
            T=R+t;
            cout << "Total a pagar" << T << endl;
            
        }
        else if (R >= 35000 && R < 60000) {
            printf("Impuesto a pagar de 30%\n");
            t=R*.3;
            T=R+t;
            cout << "Total a pagar" << T << endl;
            
        }
        else {
            printf("Impuesto a pagar de 45%\n");
            t=R*.45;
            T=R+t;
            cout << "Total a pagar" << T << endl;
        }
    }
    else
        printf("No pagas impuesto\n");

    return 0;
}


