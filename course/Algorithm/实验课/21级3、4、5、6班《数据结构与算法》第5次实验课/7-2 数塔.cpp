#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int dp[110][110];
int main()
{
    int C,N;
    scanf("%d",&C);
    while(C--)
    {
        scanf("%d",&N);
        memset(dp,0,sizeof(dp));    //清空数组
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<=i;j++)
            {
                scanf("%d",&dp[i][j]);  //输入数据
            }
        }
        //从后往往前找（其实是从下往上找），倒着找
        for(int i=N-1;i>0;i--)
        {
            for(int j=N-1;j>0;j--)
            {
                dp[i-1][j-1]+=max(dp[i][j-1],dp[i][j]); //每次都找到最大的那个，然后相加
            }
        }
        printf("%d\n",dp[0][0]);    //输出
    }
    return 0;
}