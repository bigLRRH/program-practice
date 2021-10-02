/*
7-3 判断某一年是否为闰年 (50 point(s))
编写一个类的方法，判断某一年是否为闰年。闰年的条件是符合下面二者之一：能被 4 整除，但不能被 100 整除；或者，能被400 整除。给定一个整数年份，能输出是否是瑞年，是则输出“Yes”，否则输出“No”。

输入格式:
输入一个整数年份year

输出格式:
输出是否是瑞年，是则输出“Yes”，否则输出“No”

输入样例:
1983

输出样例:
No
*/
using System;

namespace HelloWorldApplication{
    class Year{
        static void Main(string[] args){
        int year = Int32.Parse(Console.ReadLine());
        if((year%100!=0 && year%4==0) || year%400==0)
            Console.WriteLine("Yes");
        else
            Console.WriteLine("No");
        }
    }
}