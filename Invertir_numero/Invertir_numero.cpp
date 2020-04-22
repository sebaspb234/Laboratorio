#include <iostream>

using namespace std;

int main()
{
    int x, y, num, dig{ 0 };
    cout << "Ingresa un numero: "; cin >> x;
    y = x;
    while (y > 0)
    {
        dig++;
        y /= 10;
    }

    for (int i = 1; i <= dig; i += 1)
    {
        num = x % 10;//4321 -> 1    432 -> 2   43 -> 3    4 -> 4
        cout << num << " ";//1   ,   2    , 3   ,   4
        x /= 10;//432  ,   43  ,  4   ,  0
    }

    return 0;
}
