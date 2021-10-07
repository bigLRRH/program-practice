#include <iostream>
#include <algorithm>


//练习题：输入一个n行m列的矩阵，从左上角开始将其按回字形的顺序顺时针打印出来。

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int arr[50][50];

    for(int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            cin >> arr[i][j];

    bool st[50][50] = {false};
    int dx[4] = {-1,0,1,0}, dy[4] = {0,1,0,-1};
    int d=1, x=0, y=0;
    for(int i=0;i<n*m;i++){
        int a = x+dx[d], b = y+dy[d];
        if(a<0 || a>=n || b<0 || b>=m || st[a][b]){
            d = (d+1)%4;
            a = x+dx[d],b = y+dy[d];
        }
        cout << arr[x][y] << ' ';
        st[x][y] = true;
        x = a,y = b;
    }

    return 0;
}