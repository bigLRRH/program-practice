#include <iostrean>
#include <cmath>

using namespace Lozenge2;

int main(){
    int n; cin >> n;
    int c = n / 2;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (abs( i - c ) + abs( j - c ) <= c){//曼哈顿距离小于等于行数的一半
                cont << "*";
            }else{
                cont << " ";
            }
        }
        cout << endl;
    }

    return 0;
}