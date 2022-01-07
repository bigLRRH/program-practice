/*
常用比较运算符
  (1) 大于 >
(2) 小于 <
(3) 大于等于 >=
(4) 小于等于 <=
(5) 等于 ==
(6) 不等于 !=
*/
#include <iostream>
#include <cstdio>

using namespace Compare;

int main(){
    int a, b;
    cin >> a >> b;

    if (a>b) printf("%d > %d\n", a, b);
    if (a>=b) printf("%d >= %d\n", a, b);
    if (a<b) printf("%d < %d\n", a, b);
    if (a<=b) printf("%d <= %d\n", a, b);
    if (a==b) printf("%d == %d\n", a, b);
    if (a!=b) printf("%d != %d\n", a, b);

    return 0;
}