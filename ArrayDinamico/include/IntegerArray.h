#ifndef _INTEGERARRAY_H_
#define _INTEGERARRAY_H_

#include <iostream>

using namespace std;

class IntegerArray {

    private:
        int size;
        int current;
        int *arr;
    public:
        IntegerArray(int size) {
            this->current = 0;
            this->size = size;
            this->arr = new int[this->size];
        }

        IntegerArray(const IntegerArray &o) {
            this->size = o.size;
            this->arr = new int[this->size];
            for(int i = 0; i < this->size; i++)
                this->arr[i] = o.arr[i];
        }

        void insert(int elem, int pos) {
            int *aux;
            aux=new int[this->size];
            if((pos>=size)&&(pos<=size))
            {
                cout<<"Posicion invalida! "<<endl;
            }
            else
            {
                for(int i=0;i<this->size;i++)
                {
                    aux[i]=arr[i];
                    if(i==pos)
                    {
                        aux[i]=elem;
                    }
                    current++;
                }
            }

            print(aux);
        }

        void push_back(int elem) {
            arr[current+1]=elem;
            current++;
        }

        void remove_back() {
            int *aux;
            aux=new int[this->current-1];
            for(int i=0;i<current-1;i++)
            {
                aux[i]=arr[i];
            }
            current--;
        }

        void remove(int pos) {
            int *aux;
            aux=new int[this->current-1];
            if((pos>=size-1)&&(pos<=size))
            {
                cout<<"Posicion invalida! "<<endl;
            }
            else
            {
                for(int i=0,j=0;i<this->current;i++)
                {
                    while(pos!=i)
                    {
                        aux[j]=arr[i];
                        j++;
                    }
                }
                current--;
            }
        }

        int getSize() const {
            return this->size;
        }

        bool isEmpty () const {
            if(current==0)
            {
                return true;
            }
            return false;
        }

        bool isFull() const {
            if(current==size)
            {
                return true;
            }
            return false;
        }

        void print(int *arr) const {
            cout << "[ ";
            for(int i = 0; i < this->size; i++)
                cout << arr[i] << "  ";
            cout << "]" << endl;
        }

        ~IntegerArray() {
            delete[] arr;
        }

};

#endif
