#include <iostream>

//求1~100中所有数的立方和。

using namespace std;

int main(){
    int i = 1, sum = 0;
    while (i<=100){
        sum += i*i*i;
        i++;
    }
    cout << sum << endl;

    return 0;
}