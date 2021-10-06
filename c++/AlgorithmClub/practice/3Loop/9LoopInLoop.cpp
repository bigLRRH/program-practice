#include <iostream>

using namespace std;

int main(){
    for(int i=0,k=1;i<10;i++){
        for(int j=0;j<10;j++,k++){
            cout << k << ' ';
        }
        cout << endl;
    }

    return 0;
}