#include<iostream>
#include <cstdio>
#include<queue>
#define A window[1]
#define B window[0]
using namespace std;
int main()
{
    int N;
    queue<int> window[2];
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int tmp;
        cin>>tmp;
        window[tmp&0].push(tmp);
    }
    if(A.size())
    {
        printf("%d",A.front());
        A.pop();
        if(A.size())
        {
            printf(" %d",A.front());
            A.pop();
        }
        if(B.size())
        {
            printf(" %d",B.front());
            B.pop();
        }
    }
    else if(B.size())
    {
        printf("%d",B.front());
        B.pop();
    }
    while(1)
    {
            if(A.empty())break;
            printf(" %d",A.front());
            A.pop();
                    if(A.empty())break;
            printf(" %d",A.front());
            A.pop();
        if(B.empty())break;
        printf(" %d",B.front());
        B.pop();
    }
    while(A.size())
    {
        printf(" %d",A.front());
        A.pop();
    }
    while(B.size())
    {
        printf(" %d",B.front());
        B.pop();
    }
    return 0;
}