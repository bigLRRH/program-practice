/*
1.	简单计算器输入两个数，以及一个运算符+, -, *, /，输出这两个数运算后的结果。
当运算符是/，且除数是0时，输出”Divided by zero!”; 当输入的字符不是+, -, *, /时，输出”Invalid operator!”。
*/
#include <iostream>

using namespace Question1;

int main(){
    double a, b = NULL;
    char c = NULL;
    
    cin >> a >> b >> c;

    switch(c){
        case '+':
            cout << a+b << endl;
            break;
        case '-':
            cout << a-b << endl;
            break;
        case '*':
            cout << a*b << endl;
        case '/':
            if(b==0)
                cout << "Divided by zero!" << endl;
            else
                cout << a/b << endl;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}