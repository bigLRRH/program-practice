#include <iostream>

using namespace std;

int m,t,s; //总共m个苹果，吃一个苹果花费t分钟，时间过去了s分钟

int main(){
    cin >> m >> t >> s;

    if (s==0)
        cout << m <<endl;
    else if(s>m*t)
        cout << 0 << endl;
    else{
        if(s%t==0)
            cout << m-s/t << endl;
        else
            cout << m-s/t-1 << endl;
    }

    return 0;
}