
# Codigos De La Unidad 2

![screenshot](https://github.com/UP210639/UP210639_CPP/blob/main/Recursos/Elma.jpg)  

# Unidad 2 
**Alfabeto**
````
#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
    char A = 65;
    char a ='Z';
    int n=0;
    cout << "Alfabeto Mayuscula A-Z" << endl;
    for (char A = 65; A <= 90 ; A++)
    {
       cout << A << endl;
    }
    cout << "Alfabeto Mayuscula Z-A" << endl;
    
    for (int i = 0; i <= 26; i++)
    {
        cout << a << endl;
        a=a-1;
    }
    cout << "Numeros del 1 al 10" << endl;
    for (int n = 0; n <= 10; n++)
    {
        cout << n << endl;
    }
    return 0;   
}

````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U2/Imagenes2/02_1.png)
---
**Tramos**
````
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
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U2/Imagenes2/02_2.png)
---
**Tabla De Multiplicar**
````
/*
    Unidad 2
    Nombre del programa: Tabla de multiplicar
    Autor: Eliseo Diaz Delgadillo
    proposito del programa: Dependiendo la edad dada se categoriza en 4 clases "1er edad",  "2da edad", "3er edad" y "Horas extras"
    fecha:
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
    int n = 5;
    int r = 0;
    int m = 0;
/*
    cout << "¿Cual tabla de multiplacion quieres realizar?";
    cin >> n;
*/
    cout << "Tabla de multipliacion Acendente\n";

    for (int i = 1; i <= 10; i++)
    {
        r = n * i;
        cout << n << "X" << i << "=" << r << endl;
    }

    cout << "Tabla de multipliacion Decendente \n";

    for (int i = 10; i >=1; i--)
    {
        r = n * i;
        cout << n << "X" << i << "=" << r << endl; 
    }   

    cout << "Tabla de multipliacion (while) Acendente \n";

    while (m < 10)
    {
        m = m + 1;
        r = n * m;
        cout << n << "X" << m << "=" << r << endl;

    }

    cout << "Tabla de multipliacion (while) Decendente \n";
    
    m=10;

     while (m > 0)
    {
        r = n * m;
        cout << n << "X" << m << "=" << r << endl;
        m = m - 1;

    }

    cout << "Tabla de multipliacion (Do-while) Acendente \n";

    m=0;

    do
    {
        m = m + 1;
        r = n * m;
        cout << n << "X" << m << "=" << r << endl;

    } while (m < 10);

     cout << "Tabla de multipliacion (Do-while) Decendente \n";

    m=10;

    do
    {
        r = n * m;
        cout << n << "X" << m << "=" << r << endl;
         m = m - 1;

    } while (m > 0);

return 0;

}

````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U2/Imagenes2/02_3.png)


![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U2/Imagenes2/02_3.1.png)
---
**Multiplicaciones**
````
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    int r, m;
    char opcion = 's';

    printf("Tabla De Multiplicacion \n");
    printf("Deseas iniciar el proceso s/n \n");
    scanf("%s", &opcion);

    while (opcion == 's')
    {
        printf("Numero:  \n");
        scanf("%d", &n);
        printf("Tabla de multipliacion (Do-While) Acendente\n");

        m = 0;

        do
        {
            m = m + 1;
            r = n * m;
            printf("%d X %d = %d \n", n, m, r);

        } while (m < 10);

        printf("Tabla de multipliacion (Do-While) Decendente\n");

        m = 10;

        do
        {
            r = n * m;
            printf("%d X %d = %d \n", n, m, r);
            m = m - 1;

        } while (m > 0);

        printf("Quieres continuar s/n \n");
        scanf("%s", &opcion);
    }

    printf("Nos vemos \n");

    return 0;
}
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U2/Imagenes2/02_4.png)
---
**44**
````
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
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U2/Imagenes2/02_5.png)
---
**Beneficios**
````
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    float p = 40;
    float P=0;
    float r=0;
    char rendimiento = 'I';

    cout << "Bienvenido, Inserte la puntacion del empleado"; //Toma valores enteros y dentro del programa ya lo trasforma a punto decimal 
    cin >> p;

    if (p == 0)
    {
        rendimiento = 'I';
        if (p == 0 || p == 40 || p >= 60)

            P = p / 100; //Aqui cambia el valor con puntod decimal 
            r = P * 2400; 

             cout << "\n El rendimiento del empleado es: " << rendimiento << " \n Recibira :" << r;
    }
    else if (p == 40)
    {
        rendimiento = 'A';
        if (p == 0 || p == 40 || p >= 60)

            P = p / 100;
            r = P * 2400;

            cout << "\n El rendimiento del empleado es: " << rendimiento << " \n Recibira :" << r;
    }
    else if (p >= 60)
    {
        rendimiento = 'M';
        if (p == 0 || p == 40 || p >= 60)

            P = p / 100;
            r = P * 2400;

            cout << "\n El rendimiento del empleado es: " << rendimiento << " \n Recibira :" << r;
    }
    else
        cout << "\n No califica";

    return 0;
}
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U2/Imagenes2/02_6.png)
---
**Entradas**
````
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () 
{
    int e=5;
    cout << "Bievenido \n" << "¿Cuantos años tienes? \n";
    cin >> e;
    if (e < 4)
    { 
        int p=0;
        cout << "\n Bienvenido";
    }
    else if  (e >= 4 && e <= 18)
    { 
        int p=5;
        cout << "\n Paga " << p << "\n Bienvenido :D";
    }
    else if (e > 18)
    { 
        int p=10;
        cout << "\n Paga" << p << "\n Bienvenido :D";
    }

    else 

    cout << ("\n Vuelva pronto");

    return 0;

}
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U2/Imagenes2/02_7.png)
---
**Pizzeria**
````
include <iostream>
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
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U2/Imagenes2/02_8.png)
---
**Temperaturas**
````
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int temperatura, sumatoria, mayor, menor;
    for (int i = 1; i <= 6; i++)
    {
        cout << "Ingresar la temperatura " << i;
        cin >> temperatura;
        sumatoria = sumatoria + temperatura;
        if (i == 1)
        {
            mayor = temperatura;
            menor = temperatura;
        }
        else
        {
            if (temperatura > mayor)
            {
                mayor = temperatura;
            }
            else
            {
                if (temperatura < menor)
                {
                    menor = temperatura;
                }
            }
        }
    }
    cout << "El promedio de las 6 temperaturas es:" << sumatoria / 6;
    cout << "La  temperatura mas grande es: " << mayor;
    cout << "La  temperatura mas pequeña es: " << menor;

    return 0;
}
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U2/Imagenes2/02_9.png)
---
**SuperMercado**
````
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int c=0;
    int p=0;
    int t=0;
    int s=0;

    do
    {
        cout << "Cantidad de productos \n";
        cin >> c;
        cout << "Precio por unidad \n";
        cin >> p;

        s = c * p;

        t = t + s;

    } while ( c != 0);

    cout << "\n El total a pagar es: " << t;
    cout << "vuelva pronto :D \n";
    
    return 0;

}
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U2/Imagenes2/02_10.png)
---
**Binario a decimal**
````

unsigned long long binarioADecimal(char *cadenaBinaria, int longitud);

int main()
{

    char binario[LONGITUD_MAXIMA];
    printf("Introduce un número binario de hasta %d caracteres:\n",
           LONGITUD_MAXIMA - 1);
    fgets(binario, LONGITUD_MAXIMA, stdin);
    binario[strcspn(binario, "\r\n")] = 0;

    unsigned long long decimal = binarioADecimal(binario, strlen(binario));
    printf("El binario %s es %llu en decimal", binario, decimal);
    return 0;
}

unsigned long long binarioADecimal(char *cadenaBinaria, int longitud)
{
    unsigned long long decimal = 0;
    int multiplicador = 1;
    char caracterActual;
    for (int i = longitud - 1; i >= 0; i--)
    {
        caracterActual = cadenaBinaria[i];
        if (caracterActual == '1')
        {
            decimal += multiplicador;
        }
        multiplicador = multiplicador * 2;
    }
    return decimal;
}

````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U2/Imagenes2/02_11.png)