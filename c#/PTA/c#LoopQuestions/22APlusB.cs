using System;

/*
7-22 A+B (15 point(s))
计算两个绝对值不大于10000的整数和并输出

输入格式:
输入共两行，每行一个不大于10000的整数

输出格式:
输出两个数的和

输入样例:
在这里给出一组输入。例如：

1
2
结尾无空行
输出样例:
在这里给出相应的输出。例如：

3
结尾无空行
*/

namespace LoopQuestioons{
    class APlusB{
        static void Main(string[] args){
            int a = Int32.Parse(Console.ReadLine());
            int b = Int32.Parse(Console.ReadLine());

            Console.WriteLine(a+b);
        }
    }
}