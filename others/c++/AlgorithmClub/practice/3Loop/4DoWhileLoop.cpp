#include <iostream>

using namespace std;

int main(){
    int x = 1;
    while (x<1){
        cout << "x!" << endl;
        x++;
    }
    int y = 1;
    do{
        cout << "y!" << endl;
    }while(y<1);

    return 0;
}