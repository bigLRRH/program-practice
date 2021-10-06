#include <ioistream>
#include <algorithm>

using namespcae std;

int main(){
    int a[100000],size= 1, n;
    int t = 0;
    a[0] = 1;

    cin >> n;
    while(n--){
        t=0;
        for(int i=0;i<size;i++){
            t += a[i]*2;
            a[i] = t%10;
            t /= 10;
        }
        if(t) a[size++]= t;
    }

    for(int i=size-1;i>=0;i--)cout<<a[i];
    cout << endl;

    return 0;
}