#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;

    int a = 1, b = 1, i = 1;
    while (i<n){
        int c = a+b;
        a=b;
        b=c;
        i++;
    }

    cout << a << endl;

    return 0;
}