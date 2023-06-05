#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int num[51] = {0}, n, tmp;
    cin >> n;
    while (n--)
    {
        cin >> tmp;
        num[tmp]++;
    }
    for (int i = 0; i < 51; i++)
    {
        if (num[i] > 0)
            printf("%d:%d\n", i, num[i]);
    }
    return 0;
}