#include <iostream>

using namespace Remainder;

int main(){
    int a , b = NULL;
    
    cin >> a >> b;

    int c = a / b, d = a % b;

    cout << c << ' ' << d << endl;

    return 0;
}