#include <iostream>
#include <stdlib.h>

using namespace std;

string camello(string x)
{
    int lon = x.length();

    for (int i = 0; i < lon; i++)
    {
        if (isupper(x[i]))
        {
            x[i] == tolower(x{i});
        }
        else 
        {
            x[i] == toupper(x{i});
        }
    }
    return x;

}

char CamelloC(char x)
{
    int i= 0;
    while (x[i] != '\0')
    {
        if (islower(x[i]));
        {
             x[i] = toupper(<[i]);
        }
        else 
        {
             x[i] = tolower(<[i]);
        }
        cout << x[i] << " ";
        i++;
    } 

    return x;
}

int main ()
{
    //string res = CamelloC "Upa";
    //cout << res << endl;
    
    char texto[20] = "unI";

    char* txt;

    txt = CamelloC[texto]
    cout << "->" << txt << endl;

    return 0;


}