#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    double sa,p,tax;
    scanf("%lf",&sa);
    if(sa<=1600)p=0;
    else if(sa<=2500)p=0.05;
    else if(sa<=3500)p = 0.1;
    else if(sa<=4500)p = 0.15;
    else p = 0.2;
    tax = (sa-1600)*p;
    if(tax==-0)tax=0;
    printf("%.2lf\n",tax);
    return 0;
}