
# Codes from unit 2

![screenshot](https://github.com/UP210639/UP210639_CPP/blob/main/Recursos/Elma.jpg)  

# Unit 2 
**Bisection**
````
#include <iostream>
#include <cmath>

using namespace std;

double fnEcuacion1(double x) // x^2 - 8x + 15
{
    return pow(x,2) - 8*x + 15;
}

int main()

{
    double x1= -10 , x2 = 4.5 , x = 0;

    double Ea = .001;            // Limita el margen del punto decimal  (Error estandar)

    double Er = abs(x2 - x1) ;  // Error relativo  abs = valor absoluto 

    int i = 1;

    while ( Er > Ea )
    {
        x = (x1 + x2) / 2;

        printf ("%3d | %10.4f | %10.4f | %10.4f | %10.4f | %10.4f | %10.4f | \n",  i , x1, x2 , Er, x, fnEcuacion1(x1), fnEcuacion1(x2));


        if (fnEcuacion1 (x1) * fnEcuacion1(x) < 0 )
        {
            x2 = x;
        }
        else 
        {
            x1 = x;
        }

        Er = abs(x2 - x1);

        i = i + 1 ;
    }
    
    cout << "i = "  <<  i  <<   "Raiz = " <<  x <<  endl;

    return 0;
}

````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U3/Imagenes/03_1.png)
---
**Leap year**
````
#include <iostream>

using namespace std;

bool esBisiesto(int year)
{
    bool r = true;

    r = year%400 == 0 ||  (year%4 == 0 && year%100 != 0);

    return r;

}

int main()
{
    int a;
    cout << "Dame un anio" << endl;
    cin >> a;

    if (esBisiesto(a)== 0)
    {
        cout << "No es bisiesto" << endl;
    }
    else
    {
        cout << "Es bisiesto" << endl;
    }
    return 0;
}

````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U3/Imagenes/03_2.png)
---
**Cosine**
````
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U3/Imagenes/03_3.png)
---
**Multiplicaciones**
````
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U3/Imagenes/03_4.png)
---
**Beneficios**
````
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U3/Imagenes/03_5.png)
---
**Entradas**
````
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U3/Imagenes/03_6.png)
---
**Pizzeria**
````
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U3/Imagenes/03_7.png)
---
