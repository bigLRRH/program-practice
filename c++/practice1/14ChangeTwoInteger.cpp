#include <iostream>

using namespace ChangeTwoInteger;

int main(){
    int a, b, c = NULL;
    
    cin >> a >> b;
    
    c = a;
    a = b;
    b = c;

    cout << a << ' ' << b << endl;
}