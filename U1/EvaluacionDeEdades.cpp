#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int e;
    printf("dime tu edad \n");
    scanf("Edad", &e);

    if (e >= 1 && e <= 150)
    {
        if (e >= 1 && e <= 30)
        {
            printf("1er edad \n");
        }
        else if (e >= 31 && e <= 60)
        {
            printf("2da edad \n");
        }
        else if (e >= 61 && e <= 90)
        {
            printf("3er edad \n");
        }
        else
            printf("Horas Extras \n");
    }
    else
        printf("dato invalido \n");

    return 0;
}