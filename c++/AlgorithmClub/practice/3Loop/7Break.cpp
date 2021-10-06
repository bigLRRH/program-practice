#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;

    bool is_prime = true;
    for (int i=2;i<n;i++){
        if(n%i==0){
            is_prime = false;
            break;
        }
    }
    if(is_prime) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}