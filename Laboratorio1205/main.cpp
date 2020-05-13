#include <iostream>
using namespace std;

swap(int& a, int& b)
{
    int aux = a;
    a = b;
    b = aux;

}

void imprimir(int arr[], int tam) {

    for (int i = 0; i < tam; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

void invertir(int arr[], int tam)
{
    for (int i = 0; i < tam / 2; i++)
    {
        swap(arr[i], arr[tam - i - 1]);
    }
}

int invrec(int arr[], int tam, int i = 0)
{
    swap(arr[i], arr[tam - i - 1]);
    if (i < (tam / 2 - 1)) {
        return invrec(arr, tam, i + 1);
    }

}


int main() {
    ///invertir elementos
    int arr[] = { 1,2,3,4,5,6 };
    int arr2[] = { 4,5,6,7,8,9 };
    int tam = sizeof(arr) / sizeof(arr[0]);
    int tam2 = sizeof(arr2) / sizeof(arr2[0]);
    ///iterativa
    imprimir(arr2, tam2);
    invertir(arr2, tam2);
    imprimir(arr2, tam2);
    /// recursiva
    cout << endl;
    imprimir(arr, tam);
    invrec(arr, tam);
    imprimir(arr, tam);


    return 0;
}










