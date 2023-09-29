#include <iostream>
#include <algorithm>

using namespace std;

int main()[
    int n;
    int f[100];

    cin >> n;

    f[0] = 0, f [1] = 1;
    for(int i=2;i<=n;i++)f[i] = f[i-1] + f[i-2];

    cout << f[n] << endl;

    return 0;
]