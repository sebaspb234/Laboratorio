#include <iostream>
#include <array>

using namespace std;

const int tam=5;
int printAr(array<int,tam>arreglo,int i=0)
{
    if(i==arreglo.size()-1)
    {
        cout<<arreglo[arreglo.size()-1];
    }
    else{
        cout<<arreglo[i]<<" ";
        printAr(arreglo,i+1);
    }
}

int main()
{
    /// ejercicio 7.30
    array<int,tam>arreglo{9,6,15,4,7};
    printAr(arreglo);



    return 0;
}
