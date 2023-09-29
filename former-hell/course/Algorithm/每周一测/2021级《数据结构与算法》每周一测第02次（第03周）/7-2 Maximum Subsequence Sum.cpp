#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int k,n,current_sum(0),max_sum(0),first_num,last_num,current_first_num,max_first_num,max_last_num;
    bool flag1(true),flag2(true),flag3(true),flag4(false);//可优化
    cin>>k;
    while(k--)
    {
        cin>>n;
        if(n==0)flag4=true;
        if(n>=0)flag3=false;
        if(flag2)
        {
            first_num = n;
            flag2=false;
        }
        if(flag1)
        {
            current_first_num = n;
            flag1=false;
        }
        current_sum+=n;
        if(current_sum<0)
        {
            current_sum=0;
            flag1 = true;
        }
        if(current_sum>max_sum)
        {
            
            max_sum=current_sum;
            max_first_num=current_first_num;
            max_last_num = n;
        }
        last_num = n;
    }
    if(max_sum==0&&flag4)
    {
        max_first_num = 0;
    }
    if(flag3)
    {
        max_first_num = first_num;
        max_last_num= last_num;
    }

    printf("%d %d %d\n",max_sum,max_first_num,max_last_num);
}