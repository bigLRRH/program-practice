#include<iostream>
#include<algorithm>
using namespace std;
int a[5000100];
int main() 
{
	int m, n;
	cin >> m >> n;

	for (int i = 0; i < m; i++)
	{
		cin >> a[i];
	}
	nth_element(a, a + m - n, a + m);
	printf("%d\n", a[m-n]);
    return 0;
}