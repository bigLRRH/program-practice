#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;cin >> N;
    int a[N];
    for(int i=0;i<N;i++)cin >> a[i];
    int output = i-i-

    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                output++;
            }
        }
    }

    cout << output << endl;

    return 0;
}