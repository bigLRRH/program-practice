#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,*a,m;
    cin>>n>>m;
    m%=n;
    a= new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reverse(a,a+m);
    reverse(a+m,a+n);
    reverse(a,a+n);
    cout<<a[0];
    for(int i=1;i<n;i++)
    {
        cout<<" "<<a[i];
    }
    delete a;
    return 0;
}