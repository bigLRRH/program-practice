#include <iostream>

using namespace std;

int main(){
    int sum = 0;

    for (int i=1;i<=100;i++){
        if(i%2==1)continue;
        sum +=i;
    }

    cout << sum <<endl;

    return 0;
}