using System;

/*

7-6 计算标准体重 (10 point(s))
据说一个人的标准体重应该是其身高（单位：厘米）减去100、再乘以0.9所得到的公斤数。已知公斤是市斤的两倍。现给定某人身高，请你计算其标准体重应该是多少？（顺便也悄悄给自己算一下吧……）

输入格式:
输入第一行给出一个正整数H（100 < H ≤ 300），为某人身高。

输出格式:
在一行中输出对应的标准体重，单位为市斤，保留小数点后1位。

输入样例:
在这里给出一组输入。例如：

169
结尾无空行
输出样例:
在这里给出相应的输出。例如：

124.2
*/

namespace HelloWorldApplication{
    class StandardWeight{
        static void Main(string[] args){
        int H = Int32.Parse(Console.ReadLine());

        double standardWeight = (H-100)*0.9*2;

        Console.WriteLine("{0:f2}",standardWeight);
        
        }
    }
}