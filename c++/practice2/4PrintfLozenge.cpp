#include <iostream>
#include <cstdio>
#include <cmath>

using namespace PrintfLozenge;

int main(){
    char c = NULL;
    int n = NULL; 
    cin >> c >> n;
    int c = n/2;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(abs(j-c) + abs(i-c) >= c){//曼哈顿距离小于等于行数的一半
                printf("%c",c);
            }else{
                printf(" ");
            }
        }
        cout << endl;
    }

    return 0;
}