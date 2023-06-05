#include <iostream>
using namespace std;
int main()
{
    int a,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(i==0)
            cout<<a;
        else
            cout<<" "<<a;
    }
    cout<<endl;
    return 0;
}