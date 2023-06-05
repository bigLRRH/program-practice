#include <iostream>
using namespace std;
int main()
{
    int k,n,current_sum(0),max_sum(0);
    cin>>k;
    while(k--)
    {
        cin>>n;
        current_sum+=n;
        if(current_sum<0)
            current_sum=0;
        if(current_sum>max_sum)
            max_sum=current_sum;
    }
    cout<<max_sum<<endl;
}