#include <iostream>
#include <array>
using namespace std;


void output(array<int,10>entero1)
{
    for(int i=0;i<entero1.size()-3;i++)
    {
        cout<<entero1[i]<<" ";
    }cout<<"\n";
}

void output2(array<int,10>entero2)
{
    for(int i=0;i<entero2.size();i++)
    {
        cout<<entero2[i]<<" ";
    }cout<<"\n";
}
void output3(array<int,10>entero3)
{
    for(int i=0;i<entero3.size()-3;i++)
    {
        cout<<entero3[i]<<" ";
    }cout<<"\n";
}

void output2en1(array<int,10>entero1)
{
    for(int i=0;i<entero1.size();i++)
    {
        cout<<entero1[i]<<" ";
    }cout<<"\n";
}
/*void input1(array<int,7>entero1)
{
    for(int i=0;i<entero1.size();i++)
        {
            cin>>entero1[i];
        }cout<<"\n";
}

void input2(array<int,10>entero2)
{
    for(int i=0;i<entero2.size();i++)
    {
        cin>>entero2[i];
    }cout<<"\n";
}*/

int main()
{
    array<int,10>entero1{};
    array<int,10>entero2{};
    cout<<"El tamanio de entero1 es: "<<entero1.size()<<endl
    <<"El arreglo despues de la inicializacion: ";
    output(entero1);
    cout<<"El tamanio de entero2 es: "<<entero2.size()<<endl
    <<"El arreglo despues de la inicializacion: ";
    output2(entero2);

    cout<<"Ingresa 17 enteros: "<<endl;
        for(int i=0;i<entero1.size()-3;i++)   /// no almacena la funcion input
            {
                cin>>entero1[i];
            }cout<<"\n";
    //input2(entero2);
        for(int i=0;i<entero2.size();i++)
            {
                cin>>entero2[i];
            }cout<<"\n";
    cout<<"Luego de ingresar los enteros: \n"<<
    "Entero1: \n";
    output(entero1);
    cout<<"Entero2: \n";
    output2(entero2);

    cout<<"Evaluando si entero1 es diferente a entero2 \n";
    bool dif=0;
    for(int i=0;i<entero2.size();i++)
    {
        if(entero1[i]!=entero2[i])
        {
            dif=1;
        }
    }
    if (dif==1)
        cout<<"Los arreglos son diferentes \n";
    array<int,10>entero3{entero1};

    cout<<"El tamanio de entero3 es: "<<entero3.size()-3<<endl
    <<"El arreglo despues de la inicializacion: ";
    output3(entero3);
    cout<<"Asigno entero2 a entero1: \n";

    for(int i=0;i<entero2.size();i++)
    {
        entero1[i]=entero2[i];
    }

    cout<<"Entero1: \n";
    output2en1(entero1);
    cout<<"Entero2: \n";
    output2(entero2);

    cout<<"Evaluando si entero1 es igual a entero2 \n";
    int eq=0;
    for(int i=0;i<entero2.size();i++)
    {
        if(entero1[i]!=entero2[i])
        {
            eq++;
        }
    }
    if(eq==0){
        cout<<"Entero1 y entero2 son iguales \n";
    }

    cout<<"Asignando 1000 a entero1[5] \n";
    entero1[5]=1000;
    cout<<"Entero1: \n";
    output2en1(entero1);

    try {
     cout << "\nIntento de mostrar entero1.at(15)" << endl;/// Muestra error
     cout << entero1.at(15) << endl; // ERROR: fuera de rango
    }
    catch (out_of_range& ex) {
     cerr << "Ocurrio un error: " << ex.what() << endl;
    }

    cout<<"El tamanio de entero3 es: "<<entero3.size()-3<<endl;
    entero3[7]=1000;
    cout<<"El nuevo tamanio de entero3 es: "<<entero3.size()-2<<endl;
    cout<<"Entero3 contiene: \n";
        for(int i=0;i<entero3.size()-2;i++)
        {
            cout<<entero3[i]<<" ";
        }cout<<endl;




    return 0;
}
