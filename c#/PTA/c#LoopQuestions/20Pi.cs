using System;

/*
7-20 计算PI值 (10 point(s))
写一个程序显示如下式子的结果： PI = 4 *(1 -1/3 +1/5 -1/7 +1/9 -1/11 +1/13).

在程序中使用1.0代替1。

输入格式:
无

输出格式:
算式的值

输入样例:
在这里给出一组输入。例如：

结尾无空行
输出样例:
在这里给出相应的输出。例如：

3.2837384837384844
结尾无空行
*/

namespace LoopQuestions{
    class Pi{
        static void Main(string[] args){
            double PI = 4 *(1.0-1.0/3 +1.0/5 -1.0/7 +1.0/9 -1.0/11 +1.0/13);

            Console.WriteLine(PI);
        }
    }
}