# Codigos De La Unidad 1

![screenshot](https://github.com/UP210639/UP210639_CPP/blob/main/Recursos/Elma.jpg)  

# Unidad 1
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
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U1/Imagenes/01_1.png)
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
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U1/Imagenes/01_2.png)
---
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
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U1/Imagenes/01_3.png)
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
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U1/Imagenes/01_4.png)
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
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U1/Imagenes/01_5.png)