#include <iostream>
#include <string>

//练习：密码翻译，输入一个只包含小写字母的字符串，将其中的每个字母替换成它的后继字母，如果原字母是’z’，则替换成’a’。

using namespace std;

int mian(){
    string str;
    cin >> str;

    for (char &element: str)element = element=='z' ? 'a' : element;

    cout << str << endl;

    return 0;
}