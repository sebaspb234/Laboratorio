#include <iostream>
#include <array>
using namespace std;



void mayorEl(array<int,5>arreglo,int suma,int i=0)
{
    if(i==arreglo.size()-1)
    {
        cout<<suma;
    }
    else
    {if(arreglo[i]>suma)
        {
            suma=arreglo[i];
            mayorEl(arreglo,suma,i+1);
        }
        else{
            mayorEl(arreglo,suma,i+1);
        }
    }

}

int main()
{

    array<int,5>arreglo{9,6546,15555,4,2};
    /// ejercicio 7.32
    int suma=arreglo[0];
    mayorEl(arreglo,suma);


    return 0;
}
