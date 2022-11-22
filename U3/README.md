
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
#include <iostream>
#include <cmath>
#include "MiLibro.h"

using namespace std;

int main()
{
    double b = 45;
    double x1 = 0;
    double x2 = 1;
    double Es = 0.0001;
    double Er = abs(x2 - x1);
    double r = 0;
    int i = 0;

    while (Er > Es)
    {
        x1 = r;

        r = r + Coseno(b, i);

        x2 = r;

        Er = abs(x2 - x1);

        i++;
    }


    cout << r << endl;

    cout << "HECHO. . ." << endl;

    return 0;
}

````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U3/Imagenes/03_3.png)
---
**Standard Deviation**
````
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    short int i,j,n;
    cout<<"Introduzca el numero de elementos"<<endl;
    cin>>n;
    float a[n];
    float suma=0, media, mediana,desviacion=0,aux;
    for(i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]:"<<endl;
        cin>>a[i];
        suma+=a[i];
    }
    media=suma/n;
    for(j=0;j<n;j++)
        for(i=0;i<n;i++)
            if(a[i]>a[i+1]){
            aux=a[i];
            a[i]=a[i+1];
            a[i]=aux;}
    if ((n%2)==1)
    mediana=a[n/2];
    else
    mediana=(a[n/2]+a[n/2-1])/2;
    aux=0;
    for(i=0;i<n;i++)
        aux=aux+pow(a[i]-media,2);
        aux=aux/n;
        desviacion=sqrt(aux);
    cout<<"Desviacion estandar: "<<desviacion<<endl;    
    return 0;
}
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U3/Imagenes/03_4.png)
---
**Currency Breakdown**
````
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int c = 3699;
    int a[10];
    int m[] = { 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    int g = 0, p = 0;

    g = c;

    for (int i = 0; i <= 10; i++)
    {
        if (c >= m[i])
        {
            a[i] = 0;

            while (c >= m[i])
            {
                cout << c / m[i] << " DE " << m[i] << endl;

                c = c % m[i];

                a[i]++;
            }

        }

    }

    cout << "Total = " << g << endl;

    return 0;
}
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U3/Imagenes/03_5.png)
---
**Greek numbers**
````

````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U3/Imagenes/03_6.png)
---
**RFC**
````
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string nombre="Carlos";
    string AP="Esparza";
    string AM="Lopez";
    string fe="17/11/2022";
    string rfc="";
    int v=nombre.length(); 
    int p=0;
    
    rfc=rfc+AP[0];
    for (int i = 1; i < v && p<1; i++)
    {
        if (AP[i]=='a' || AP[i]=='e' || AP[i]=='i' || AP[i]=='o' || AP[i]=='u' )
        {
            rfc=rfc+AP[i];
            p++;
        }  
    }

    int d1=fe.find_last_of("/");
    int d2=fe.find("/");
    rfc=rfc+AM[0]+nombre[0]+fe.substr(d1+1,4)+fe.substr(d2+1,2)+fe.substr(0,2);
    
    v=rfc.length();
    for (int i = 0; i < v; i++)
    {
        rfc[i]=toupper(rfc[i]);
    }
    cout<<nombre<<" RFC: "<<rfc;
    return 0;
}
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U3/Imagenes/03_7.png)
---
**Ordered Vector**
````

#include <iostream>
#include <vector>
#include <algorithm>
 
int main()
{
    std::vector<int> v = { 3, 5, 2, 4, 7 };
 
    std::sort(v.begin(), v.end());
 
    for (const auto &i: v) {
        std::cout << i << ' ';
    }
 
    return 0;
}
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U3/Imagenes/03_8.png)
---
**Recursive function**
````
#include <iostream>
#include <cmath>


using namespace std;

long int factorial(int n);

int main()
{
    
    cout << factorial(5) << endl;
    return 0;
}

long int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
````
![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U3/Imagenes/03_9.png)
---

**In this unit we also made our own library where we could store all kinds of functions needed for two or more programs.**

````
#include <iostream>
#include <cmath>


using namespace std;

long int factorial(int n);
long int permutacion(int, int); 
long int combinacion (int, int);

int suma (int x, int y)
{
    return (x + y);
}

double G2R (double a)
{
    double r = 0;

    r = a * M_PI / 180;

    return r;
}

double Seno (double a)
{
    double r = 0;

    r = sin(G2R(a));

    return r;
}

long int factorial(int n)
{
    long int r = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        r *= i;
    }

    return r;
}

long int permutacion(int m, int p)
{
    long int x = 5, z = 2, t = 1;

    z = x - z;
    x = factorial(x);
    z = factorial(z);

    t = x / z;

    return t;

}

long int combinacion(int m, int p)
{
    long int x = 5, z = 2, t = 1;

    t = permutacion (x, z);

    t = t / factorial(z);

    return t;

}


double Coseno (double a, double i)

{
    double r = 0;

    a = G2R(a);

    r = r + pow(-1,i) * pow(a,2*i)/ factorial(2*i);
    
    return r;

}
````
---


