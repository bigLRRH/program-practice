#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int a[100];
    for(int i=0;i<n;i++)cin >> a[i];

    reverse(a,a+k);
    reverse(a+k,a+n);
    reverse(a,a+n);

    for(int i=0;i<n;i++)cout << a[i] << ' ';
    cout << endl;

    return 0;
}