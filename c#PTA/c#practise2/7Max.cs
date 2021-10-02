using System;

/*
7-7 两个整数最大值 (10 point(s))
求两个整数a，b的最大值，结果存入max中。

输入格式:
在一行中输入两个整数，之间用一个空格间隔，没有其它任何附加字符。

输出格式:
在一行中按照“max=结果”的顺序输出，结果原样输出，没有其它附加格式。

输入样例:
3 5
结尾无空行
输出样例:
max=5
结尾无空行
*/

namespace HelloWorldApplication{
    class Max{
        static void Main(string[] args){
            string input = Console.ReadLine();
            int idx = input.IndexOf(' ');
            int a = Int32.Parse(input.Substring(0,idx));
            int b = Int32.Parse(input.Substring(idx+1));

            int max = a>b?a:b;

            Console.WriteLine("max={0}",max);
        }
    }
}