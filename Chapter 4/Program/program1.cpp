// This program displays the values of true anhd false states.
#include <iostream>
using namespace std;

int main()
{
    bool trueValue, falseValue;
    int x = 5, y =10;

    trueValue = x < y;
    falseValue = y == x;

    cout << " True is " << trueValue << endl;
    cout << " Flase is " << falseValue << endl;
    return 0;
}