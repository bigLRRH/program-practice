#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;

    int c = n/2;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(abs(i-c)+abs(j-c) <= c)
                cout << "*";
            else
                cout << ' ';
        }
        cout << endl;
    }

    return 0;
}