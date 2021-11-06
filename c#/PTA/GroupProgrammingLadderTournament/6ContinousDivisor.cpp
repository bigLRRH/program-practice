#include <iostream>
#include <cstdio>
#include <cmath>
 
using namespace std;

int main(){
    int n;cin>>n;
    int a[100][100];
    int l=0,r=0,maxl=0,maxr=0,end=sqrt(n);
    bool flag=false;
    for(int i=2;i<=end;i++){
        if(n%i==0&&n%(i+1)==0){
			a[l][r] = i;
			a[l][r+1] = i+1;
			r++;
			flag = true;
			if(r>maxr){
				maxl = l;
				maxr = r;
			}
		}else if(flag){
			l++;
			flag = false;
			r=0;
		}
	}
	cout<<maxr<<endl;
	for(int i=0;i<=maxr;i++){
		cout<<a[maxl][maxr]<<' ';
	}
	
	return 0;
}