#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int W;cin>>W;
    float cost;
    if(W<0)
    {
        cout<< "Invalid Value!"<<endl;
        return 0;
    }
    else
    {
        if(W<=50)cost = W*0.53;
        else cost = 50*0.53+(W-50)*0.58;
        printf("cost = %.2f\n",cost);
        return 0;
    }
}