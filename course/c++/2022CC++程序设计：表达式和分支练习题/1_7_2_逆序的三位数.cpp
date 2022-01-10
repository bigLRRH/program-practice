#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    int a[3];
    scanf("%d",&n);
    a[0]=n%10;
    a[1]=n/10%10;
    a[2]=n/100;
    n=a[0]*100+a[1]*10+a[2];
    printf("%d\n",n);
    return 0;
}