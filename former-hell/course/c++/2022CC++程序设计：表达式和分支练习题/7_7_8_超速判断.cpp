#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int v;
    scanf("%u",&v);
    string s;
    if(v<=60)s="OK";
    else s="Speeding";
    printf("Speed: %u - %s\n",v,s.c_str());
    //或者s.c_str()可以换成&s[0]
    return 0;
}