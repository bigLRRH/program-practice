#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a[3] = {0,1,2};
    cout << a[0] << ' ' << a[1] << ' ' << a[2] << endl;
    a[0] = 5;
    cout << a[0] << endl;

    return 0;
}