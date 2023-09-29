
#include <iostream>
#include <stack>
using namespace std;
int main()
{
	int n;
	cin>>n;
    int n1,n2;
 	char op;
	stack<int> S1;
	stack<char> S2;
	for(int i=0;i<n;i++)
	{
		cin>>n1;
		S1.push(n1);
	}
	--n;
	for(int i=0;i<n;i++)
	{
		cin>>op;
		S2.push(op);
	}
	for(int i=n;i>0;i--)
	{
		n1 = S1.top();
		S1.pop();
		n2 = S1.top();
		S1.pop();
		op = S2.top();
		S2.pop();
		switch(op)
		{
		case '+':
			n1 = n2+n1;
			break;
		case '-':
			n1 = n2-n1;
			break;
		case '*':
			n1 = n2*n1;
			break;
		case '/':
			if(n1==0)
			{
				cout<<"ERROR: "<<n2<<"/0"<<endl;
				return 0;
			}
			n1=n2/n1;
		}
		S1.push(n1);
	}
	cout<<S1.top()<<endl;
	return 0;
}