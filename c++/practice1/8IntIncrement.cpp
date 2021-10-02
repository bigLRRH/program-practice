#include <iostream>

using namespace IntIncrement;

int main(){
    int a = 1;
    int b = a++;

    cout << a << ' ' << b << endl;

    int c = ++a;

    cout << a << ' ' << c << endl;

    return 0;
}