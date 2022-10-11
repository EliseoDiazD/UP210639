/*
    Unidad 2
    Nombre del programa: Pizzeria
    Autor: Eliseo Diaz Delgadillo
    proposito del programa: Escribir un programa que pregunte al usuario si quiere una pizza vegetariana o no,
    y enfunción de su respuesta le muestre un menú con los ingredientes disponibles para que elija.
    Solo se puede eligir un ingrediente además de la mozzarella y el tomate que están en todas la pizzas.
    fecha: 10/10/2022
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int P = 1;
    int I = 2;

    cout << "Bienvenido a pizza Bella Napoli \n" << "Que va a llevar? 1=Vegetariana 0=Tradicional";
    cin >> P;

    if (P == 1)
    {
        cout << "Que ingrediente extra desea agregar? \n";
        cout << "Menu \n"
             << "1 = Pimiento, 2 = tofu \n";
        cin >> I;

        if (I == 1)
        {
            cout << "Su orden es: Un Pizza Vegetariana con Pimiento \n";
            cout << "Espero la disfrute :D \n";
        }
        else
            cout << "Su orden es: Un Pizza Vegetariana con Tofu \n";
        cout << "Espero la disfrute :D \n";
    }

    else if (P == 0) 

    {
        cout << "Que ingrediente extra desea agregar? \n";
        cout << "Menu \n"
             << "1 = Jamon, 2 = Peperoni, 3 = Salmon \n";
        cin >> I;

        if (I == 1)
        {
            cout << "Su orden es: Un Pizza Tradicional con Jamon \n";
            cout << "Espero la disfrute :D \n";
        }
        else if (I == 2)
        {
            cout << "Su orden es: Un Pizza Tradicional con Peperoni \n";
            cout << "Espero la disfrute :D \n";
        }
        else
            cout << "Su orden es: Un Pizza Tradicional con Salmon \n";
        cout << "Espero la disfrute :D \n";
    }

    else 

    cout << "VUelva pronto \n";
    
    return 0;
}