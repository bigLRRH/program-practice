#include <iostream>
#include <cstdio>
#include <queue>
//A window[1] B window[0]
#define A 1
#define B 0
using namespace std;

int main()
{
    int n;
    queue<int> window[2];
    cin>>n;
    while(n--)
    {
        int tmp;
        cin>>tmp;
        window[tmp&1].push(tmp);//花里胡哨
    }
    if(window[A].size())
    {
        printf("%d",window[A].front());
        window[A].pop();
    }
    else if(window[B].size())
    {
        printf("%d",window[B].front());
        window[B].pop();
    }
    while(window[A].size() && window[B].size())
    {
        printf(" %d",window[A].front());
        window[A].pop();
        if(window[A].empty())break;
        printf(" %d",window[A].front());
        window[A].pop();
        printf(" %d",window[B].front());
        window[B].pop();
    }
    while(window[A].size())
    {
        printf(" %d",window[A].front());
        window[A].pop();
    }
    while(window[B].size())
    {
        printf(" %d",window[B].front());
        window[B].pop();
    }
    cout<<endl;
    return 0;
}