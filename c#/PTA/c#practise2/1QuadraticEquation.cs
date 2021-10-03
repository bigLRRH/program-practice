using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

/*
7-1 一元二次方程 (100 point(s))
输入三个系数，求一元二次方程的解,要求输出所有可能的情况,包括复根。

输入格式:
三个实数a,b,c

输出格式:
按输出样例格式输出，注意输出顺序。

输入样例:
1 6 9
结尾无空行
输出样例:
x1=x2=-3.000000
结尾无空行
输入样例:
1 -5 6
结尾无空行
输出样例:
x1=3.000000,x2=2.000000
结尾无空行
输入样例:
1 1 9
结尾无空行
输出样例:
x1=-0.500000+2.958040i
x2=-0.500000-2.958040i
结尾无空行
*/
namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            string str = Console.ReadLine();
            string[] str_ = str.Split(' ');
            double a = double.Parse(str_[0]);
            double b = double.Parse(str_[1]);
            double c = double.Parse(str_[2]);

            double result1, result2;
            double delta;

            if (a == 0 && b == 0)
            {
                if (c == 0)
                    Console.WriteLine("Zero Equation");
                else
                    Console.WriteLine("Not An Equation");
            }else if(a == 0)
            {
                result1 = -c/b;
                Console.WriteLine("x1=x2={0:f6}",result1);
            }
            else
            {
                delta = Math.Pow(b, 2) - 4*a*c;
                if (delta > 0)
                {
                    result1 = (-b + Math.Sqrt(delta)) / (2*a);
                    result2 = (-b - Math.Sqrt(delta)) / (2*a);
                    Console.WriteLine("x1={0:f6},x2={1:f6}",result1,result2);
                }
                else if (delta == 0)
                {
                    result1 = -b / (2*a);
                    Console.WriteLine("x1=x2={0:f6}",result1);
                }
                else
                {
                    result1 = -b / (2*a);
                    result2 = Math.Sqrt(-delta) / (2*a);
                    Console.WriteLine("x1={0:f6}+{1:f6}i", result1, result2);
                    Console.WriteLine("x2={0:f6}-{1:f6}i", result1, result2);
                }
            }
        }
    }
}
