#include <iostream>
#include <array>
using namespace std;

void print(array<int,1000>primo)
{
    for(unsigned int i=0;i<primo.size();i++)
    {
        cout<<primo[i]<<" ";
    }
}


int main()
{
    cout<<"Ejercicio 7.27\n";
    array<int,1000>primo;
    for(unsigned int i=0;i<primo.size();i++)
    {
        primo[i]=1;
    }
    print(primo);

    for(unsigned int i=1,j=2;i<primo.size();i++,j++)
    {
        if(j%2==0||j%3==0||j%5==0||j%7==0||j%11==0||j%13==0||j%17==0||j%19==0||j%23==0||j%31==0)
        {
            primo[i]=0;/// multiplos de... se vuelven 0
        }
    }
    primo[0]=0;
    for(int i=1;i<31;i++)
    {
        if(i==1||i==2||i==4||i==6||i==10||i==12||i==16||i==18||i==22||i==30)
        {
            primo[i]=1;
        }
    }
    cout<<endl<<endl;
    print(primo);/// falta contar al 2 y 3.
    cout<<endl<<endl;
    cout<<"Numeros primos del 2 al 999: \n";
    for(unsigned int i=1;i<primo.size();i++)
    {
        if(primo[i]==1)
        {
            cout<<i+1<<" ";
        }
    }

    return 0;
}







