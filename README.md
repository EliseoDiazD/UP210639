
<center>

# Bienvenidos al repositorio de Eliseo Diaz Delgadillo
# ¿Helao?

*Hola*  
*Portafolio de todos los codigos de programacion*
</center>

**Lista de programas por unidad** 
 |PROGRAMA | Unidad|Lenguaje|
 |---------|-------|----|
 |Ciclos|1|C++|
 |Hola mundo|1|C++|
 |ParImpar|1|C++|
 |TiposDeDatos|1|C++|
 |EvaluacionDeEdades|1|C++|
 |Tramos|2|C++|
 |Alfabeto|2|C++|

![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/Recursos/Link.jpg)

# Codigos De Todo El Cuatrimestre

![screenshot](https://github.com/UP210639/UP210639_CPP/blob/main/Recursos/Elma.jpg)  


# Unidad 1
**Ciclos**
````
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int suma = 0;
    int par = 0;
    int impar = 0;
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
          par = par + i;   
        }
        else
        {
          impar = impar + i;
        } 
    }
    suma=par+impar;
    printf("el reusltado de la suma es: %d \n", par);
    printf("el reusltado de la suma es: %d \n", impar);
    printf("el reusltado de la suma es: %d \n", suma );
    return 0;
}

````
---
**HolaMundo**
````
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Hola Mundo" << endl;
    return 0;
}
````
---
**ParImpar**
````
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Par o Impar" << endl;
    return 0;
}

````
---
**TiposDeDatos**
````
#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
    int entero= 21;
    float flotante=3.4e38;
    double grande= 2.5654;
    char caracter= 65;
    cout << "Este programa demuestra los tipos datos, \n";
    cout << "El numero entero es: "<< entero << endl;
    cout << "el tamaño del entero es:" << sizeof (entero) << "bytes" << endl;
    cout << "El numero entero es: "<< caracter << endl;
    cout << "el tamaño del entero es:" << sizeof (caracter) << "bytes" << endl;

    return 0;

}
````
--- 
**Evaluacion de edades**
````
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int e;
    cout << "dime tu edad \n";
    cin >> e;
    if (e >= 1 && e <= 150)
    {
        if (e <= 30) {
            printf("1er edad \n");
        }
        else if (e >= 31 && e <= 60) {
            printf("2da edad \n");
        }
        else if (e >= 61 && e <= 90) {
            printf("3er edad \n");
        }
        else {
            printf("Horas Extras \n");
        }
    }
    else
        printf("dato invalido \n");

    return 0;
}

````
---
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
---

`https://www.LinkdePrueba.com`

https://www.Linkdeprueba.com

[Abrelo :D](https://www.youtube.com/watch?v=dQw4w9WgXcQ)

[NoLoAbras D:](https://www.youtube.com/watch?v=E9de-cmycx8)

<http://example.com/> "Original Title Theme"