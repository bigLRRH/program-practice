/*
2.	判断闰年。闰年有两种情况：
(1)	能被100整除时，必须能被400整除；
(2)	不能被100整除时，被4整除即可。
输入一个年份，如果是闰年输出yes，否则输出no。
*/

/*
条件表达式
	(1) 与 &&
	(2) 或 ||
	(3) 非 !
*/
#include <iostream>

using namespace Qusetion2;

int main(){
    int year = NULL;
    cin >> year;

    if((year%100!=0 && year%4==0) || year%400==0)
        cout << "yse" << endl;
    else
        cout << "no" << endl;

    return 0;
}