#include <iostream>
#include <string.h>

//练习：把一个字符串中特定的字符全部用给定的字符替换，得到一个新的字符串。

using namespace std;

int main(){
    char str[100];
    char a,b; cin >> a >> b;

    gets(str);

    for(char element : str) element = element==b ? a : element;

    cout << str << endl;

    return 0;
}