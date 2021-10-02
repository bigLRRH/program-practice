#include <iostream>

using namespace ReverseThreeDigit;

int main(){
    int n = NULL;
    cin >> n;

    int a = n % 10;
    n = n / 10;
    int b =n % 10;
    n = n / 10;
    int c = n;

    cout a << b << c << endl;

    return 0;
}