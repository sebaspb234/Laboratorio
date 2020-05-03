#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;


void calculateCharges(float hora1,float hora2, float hora3)
{
    float t1=20.00,total=0,totalh=0;
    totalh=hora1+hora2+hora3;
    cout<<"Carro: \t"<<"Hora: \t"<<"Monto: "<<endl;
    cout<<"1"<<"\t"<<hora1<<"\t";
    if(hora1<3.0 && hora1>0.0)
    {
        cout<<t1;
    }
    else if(hora1>3.0){
        for(int i=0;i<hora1;i++)
        {
            t1+=1.25;
            if(t1==50)
            {
                break;
            }
        }
    }
    total+=t1;
    cout<<t1;
    t1=20.00;
    cout<<"\n"<<"2"<<"\t"<<hora2<<"\t";
    if(hora2<3.0 && hora2>0.0)
    {
        cout<<t1;
    }
    else if(hora2>3.0){
        for(int i=0;i<hora2;i++)
        {
            t1+=1.25;
            if(t1==50)
            {
                break;
            }
        }
    }
    cout<<t1;
    total+=t1;
    cout<<"\n"<<"3"<<"\t"<<hora3<<"\t";
    t1=20.00;
    if(hora3<3.0 && hora3>0.0)
    {
        cout<<"\t"<<t1;
    }
    else if(hora3>3.0){
        for(int i=0;i<hora3;i++)
        {
            t1+=1.25;
            if(t1==50)
            {
                break;
            }
        }
    }
    cout<<t1<<"\n";
    total+=t1;
    cout<<"Total: "<<totalh<<"\t"<<total;
    cout<<endl;
}


int integerPower(int b,int e)
{
    int res=1;
    for(int i=1;i<=e;i++)
    {
        res*=b;
    }
    cout<<b<<" elevado a la "<<e<<" es: ";
    return res;
}

bool isFactor(int a,int b)
{
    cout<<b<<" es factor de "<<a<<"? : ";
    if (!(a%b))
    {
        return true;
    }
    return false;
}

int reloj(int dia,int hora,int minuto)
{
    int minutos=minuto;
    for(int j=0;j<dia;j++)
    {
        for(int i=0;i<hora;i++)
        {
            minutos+=60;
        }
    }
    cout<<"El numero de minutos es: ";
    return minutos;
    cout<<" minutos "<<endl;
}

int esPrimo(int num)
{
    //a
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            sum++;
        }
    }
    if(sum==2)
    {
        cout<<num<<" Es primo\n"<<endl;
    }
    else{
        cout<<num<<" No es primo\n"<<endl;
    }

    //b
    int lim=10000,suma2=0;
    cout<<"Los numeros primos entre 2 y 10000 son: "<<endl;
    for(int i=2;i<=lim;i++)
        {
            for(int j=1;j/2<=i;j++)
            {
                if(i%j==0)
                {
                    suma2++;
                }
            }
            if(suma2==2)
            {
                cout<<i<<" ";
                suma2=0;
            }
            else{
                suma2=0;
            }
        }

        //c
        cout<<"\n\nForma mas eficiente: "<<endl;
        for(int i=2;i<=lim;i++)
            {
                for(int j=1;j/2<=i;j++)
                {
                    if(i%j==0)
                    {
                        suma2++;
                    }
                }
                if(suma2==2)
                {
                    cout<<i<<" ";
                    suma2=0;
                }
                else{
                    suma2=0;
                }
            }
}


void invertir(int num)
{
    int dig=0,aux,rev;
    aux=num;
    while(aux>0)
    {
        dig++;
        aux/=10;
    }
    for(int i=0;i<dig;i++)
    {
        rev=num%10;
        num/=10;
        cout<<rev<<" ";
    }

}


int exponente(int b,int e)
{
    if(e==0)
    {
        return 1;
    }
    else{
        return b*exponente(b,e-1);
    }
}

int fibonacciIterarivo(int n)
{
    int x=0,y=0,z=1;
    for(int i=1;i<n;i++)
    {
        x=y+z;
        y=z;
        z=x;
    }
    return x;

}

void hanoi(int n,int A,int B,int C)
{
    int num=1,s=0;
    for(int i=0;i<n;i++)
    {
        s=num*2+1;
        num++;
    }
    int a{1},b{2},c{3},d{4},e{5},f{6},g{7};
    for(int i=1;i<=s;i++)
    {
        if(i==a)
        {
            cout<<A<<"->"<<C<<endl;
        }
        if(i==b)
        {
            cout<<A<<"->"<<B<<endl;
        }
        if(i==c)
        {
            cout<<C<<"->"<<B<<endl;
        }
        if(i==d)
        {
            cout<<A<<"->"<<C<<endl;
        }
        if(i==e)
        {
            cout<<B<<"->"<<A<<endl;
        }
        if(i==f)
        {
            cout<<B<<"->"<<C<<endl;
        }
        if(i==g)
        {
            cout<<A<<"->"<<C<<endl;
        }
    }
}


int mcDivisor(int x,int y)
{
    if(y==0)
    {
        return x;
    }
    else{
        return mcDivisor(y,x%y);
    }
}






int main()
{

/// Ejercicio 4.26
cout<<"Ejercicio 4.26"<<endl;
    int lado;
   cout<<"Ingresa un numero del 1 al 20:";cin>>lado;

    for(int i=0;i<lado;i++)
    {
        for(int j=0;j<lado;j++)
        {
            if(j==0 || j==lado-1 || i==0 || i==lado-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

/// Ejercicio 4.27
cout<<"\nEjercicio 4.27"<<endl;
    int pal,aux,dig=0,d1=0,d2=0,d3=0,d4=0,d5=0;
    do{
    cout<<"Ingresa un numero de 5 digitos: ";cin>>pal;
        aux=pal;
        while(aux>0)
        {
            aux/=10;
            dig++;
        }
        if(dig!=5)
        {
            dig=0;
        }
    }while(dig!=5);

        d1=pal%10;
        pal/=10;
        d2=pal%10;
        pal/=10;
        d3=pal%10;
        pal/=10;
        d4=pal%10;
        pal/=10;
        d5=pal%10;

    if(d1==d5 && d2==d4)
    {
        cout<<"Es palindrome"<<endl;
    }
    else{
        cout<<"No es palindrome"<<endl;
    }

/// Ejercicio 4.28
cout<<"\nEjercicio 4.28"<<endl;
    int binario,binario2,digi=0,suma=0,x=0,y=0,cuadrado=1;
    cout<<"Ingresa un numero binario: ";cin>>binario;
    binario2=binario;
    while(binario2>0)
    {
        binario2/=10;
        digi++;
    }

    for(int i=0;i<digi;i++)
    {
        x=binario%10;
        binario/=10;
        suma+=cuadrado*x;
        cuadrado*=2;
    }
    cout<<"El numero entero es: "<<suma<<endl;



/// Ejercicio 4.30
cout<<"\nEjercicio 4.30"<<endl;
cout<<"Fibonacci: "<<endl;
long long a=0,b=0,c=1,vueltas=0;
    cout<<b<<" ";
    while(true)/// con el true dentro del while, se vuelve un bucle infinito, imprime la serie fibonacci infinitamente
    {
        a=b+c;
        b=c;
        c=a;
        cout<<b<<" ";
        if(vueltas==100)
        {
            break; /// se coloca el break para que pase al siguiente ejercicio
        }
        vueltas++;
    }
cout<<endl;


/// Ejercicio 5.11
cout<<"\nEjercicio 5.11"<<endl;
    int cant,minimo,numero;
    cout<<"Cuantos numeros deseas ingresar? ";cin>>cant;
    for(int i=0;i<cant;i++)
    {
        cout<<"Ingresa un numero: ";cin>>numero;
        if(numero<=minimo)
        {
            minimo=numero;
        }
    }

    cout<<"El numero menor es: "<<minimo;
cout<<endl;


/// Ejercicio 5.15
cout<<"\nEjercicio 5.15"<<endl;
    int patron=10;
    char pat[patron][patron];
// a
    for(int i=0;i<patron;i++)
    {
        for(int j=0;j<patron;j++)
        {
            if(i>=j)
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    cout<<"\n";
// b
    for(int i=0;i<patron;i++)
    {
        for(int j=0;j<patron;j++)
        {
            if(i<=j)
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
cout<<"\n";

// c
    for(int i=0;i<patron;i++)
    {

        for(int j=0;j<patron;j++)
        {
            if(i==j || j>i)
            {
                cout<<"*";
            }
            else{
                cout<<' ';
            }

        }
        cout<<"\n";
    }

cout<<"\n";

// d
for(int i=0;i<=patron;i++)
    {
        for(int l=0;l<patron-i;l++)
        {
            cout<<' ';
        }
        for(int j=0;j<patron;j++)
        {
            if(i>j)
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }

cout<<"\n";


/// Ejercicio 5.19
cout<<"\nEjercicio 5.19"<<endl;
float pi=0;
int j=0,terminos=0;
for(int i=1;i<=200000;i+=2)
{
    if(i==1 || j==4)
    {
        pi+=(4/(float)i);
        j=2;
    }
    else{
        pi-=(4/(float)i);
        j=j+2;
    }
    if(pi<=3.14159)
    {
        terminos++;
    }
}
cout<<"La aproximacion con 200000 terminos es: "<<pi<<endl;
cout<<"El numero de terminos usados para llegar hasta 3.14159 es: "<<terminos;
cout<<endl;



/// Ejercicio 5.29
cout<<"\nEjercicio 5.29"<<endl;
     cout << fixed << setprecision(2);

     double principal=24.00;
     double interes=0.05;

     cout << "Cantidad inicial: " << principal << endl;
     cout << "Tasa de interes: " << interes << endl;

     cout << "\nAnio" <<setw(20)<< "Cantidad depositada" << endl;

     for(interes=0.05;interes<=0.1;interes+=0.05)
     {
         for (int anio=1; anio <= 394; anio++) {
         double monto = principal * pow(1.0 + interes, anio);
         cout << setw(4) << anio << setw(20) << monto << endl;
        }
        cout<<endl;
     }


/// Ejercicio 6.12
cout<<"Ejercicio 6.12 "<<endl;
calculateCharges(4,24,15);
cout<<endl;

/// Ejercicio 6.18
cout<<"Ejercicio 6.18 "<<endl;
cout<<integerPower(3,3)<<endl;
cout<<endl;

/// Ejercicio 6.20
cout<<"Ejercicio 6.20 "<<endl;
cout<<isFactor(30,6)<<endl;
cout<<endl;

/// Ejercicio 6.25
cout<<"Ejercicio 6.25 "<<endl;
cout<<reloj(15,20,6)<<endl;
cout<<endl;
/// Ejercicio 6.29

cout<<"Ejercicio 6.29 "<<endl;
esPrimo(97);
cout<<endl;

/// Ejercicio 6.30
cout<<"Ejercicio 6.30 "<<endl;
invertir(7631);
cout<<endl;



    /// Ejercicio 6.36
    cout<<"Ejercicio 6.36"<<endl<<endl;
    cout<<exponente(5,4)<<endl;
    /// Ejercicio 6.37
    cout<<"Ejercicio 6.37"<<endl<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"Fibonacci ("<<i<<"): "<<fibonacciIterarivo(i)<<endl;
    }
    cout<<"Fibonacci (20): "<<fibonacciIterarivo(20)<<endl;
    /// Ejercicio 6.39
    cout<<"Ejercicio 6.39"<<endl<<endl;
    int A=1,B=2,C=3;
    hanoi(3,A,B,C);

    ///Ejercicio 6.41
    cout<<"Ejercicio 6.41"<<endl<<endl;
    cout<<"El maximo comun divisor es:"<<mcDivisor(111,21)<<endl;

    return 0;
}

