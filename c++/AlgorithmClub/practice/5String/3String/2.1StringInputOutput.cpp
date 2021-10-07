#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1,s2;

    cin >> s1 >> s2;
    cout << s1 << s2 << endl;

    return 0;
}

//注意：不能用printf直接输出string，需要写成：printf(“%s”, s.c_str());