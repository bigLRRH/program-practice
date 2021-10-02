/*
7-2 整除问题 (10 point(s))
判断一个数是否能被另一个整数整除是一个挺简单的问题，懒惰的小明还是不想自己做，于是找到你帮他写代码，你就帮帮他吧。

输入格式:
输入包括两个由空格分开的整数 M和 N(1≤M,N≤500)。

输出格式:
输出包括一行，如果 M 可以被 N 整除就输出YES，否则输出NO（结果大小写敏感）。

输入样例:
21 7
结尾无空行
输出样例:
YES
结尾无空行
*/
using System;

namespace Divisibility{
    class divisibility{
        static void Main(string[] args){
            string input = Console.ReadLine();
            string[] input_ = input.Split(' ');
            int m = Int32.Parse(input_[0]);
            int n = Int32.Parse(input_[1]);

            if(m%n==0)
                Console.WriteLine("YES");
            else
                Console.WriteLine("NO");
        }
    }
}