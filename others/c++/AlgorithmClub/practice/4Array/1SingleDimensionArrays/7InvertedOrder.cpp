#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,k;
    int a[100];

    cin >> n >>k;
    for(int i=0;i<n;i++)cin >> a[i];

    //傻瓜排序
    for(int i=0;i<n;i++)
        for(int j = i+1;j<n;j++)
            if(a[i]>a[j])
                swap(a[i],a[j]);

    for(int i=0;i<n;i++)cout << a[i] << ' ';
    cout << endl;

    return 0;
}