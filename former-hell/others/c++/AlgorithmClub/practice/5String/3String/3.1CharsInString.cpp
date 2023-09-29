#include <iostream>
#include <string>

using namespace std;

int main(){
    string s = "hello world";

    for(char element: s)cout << element << endl;

    return 0;
}