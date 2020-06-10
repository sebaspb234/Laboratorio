#include <iostream>
#include "IntegerArray.h"

using namespace std;

int main() {

    IntegerArray a(2);


    a.insert(100,1);// funciona
    a.push_back(6);
    cout<<a.isEmpty()<<endl;
    cout<<a.isFull()<<endl;

}
