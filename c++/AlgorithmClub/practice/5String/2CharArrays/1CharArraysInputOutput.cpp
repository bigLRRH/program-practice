#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    char str[100];
    cin >> str;             //输入字符串时，遇到空格或者回车就会停止
    cout << str << endl;    //输出字符串时，遇到空格或者回车不会停止
    printf("%s\n",str);
}