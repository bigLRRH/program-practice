using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

/*
7-5 到底是不是太胖了 (10 point(s))
据说一个人的标准体重应该是其身高（单位：厘米）减去100、再乘以0.9所得到的公斤数。真实体重与标准体重误差在10%以内都是完美身材（即 | 真实体重 − 标准体重 | < 标准体重×10%）。已知市斤是公斤的两倍。现给定一群人的身高和实际体重，请你告诉他们是否太胖或太瘦了。

输入格式：
输入第一行给出一个正整数N（≤ 20）。随后N行，每行给出两个整数，分别是一个人的身高H（120 < H < 200；单位：厘米）和真实体重W（50 < W ≤ 300；单位：市斤），其间以空格分隔。

输出格式：
为每个人输出一行结论：如果是完美身材，输出You are wan mei!；如果太胖了，输出You are tai pang le!；否则输出You are tai shou le!。

输入样例：
3
169 136
150 81
178 155
结尾无空行
输出样例：
You are wan mei!
You are tai shou le!
You are tai pang le!
结尾无空行
*/

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {   
            int n = Int32.Parse(Console.ReadLine());

            for (int i=0;i<n;i++){
                string str = Console.ReadLine();
                string[] str_ = str.Split();
                double height = double.Parse(str_[0]);
                double weight = double.Parse(str_[1]);

                double standardWeight = (height-100)*0.9*2;

                if(Math.Abs(weight-standardWeight)<(standardWeight*0.1))
                    Console.WriteLine("You are wan mei!");
                else if(weight>standardWeight)
                    Console.WriteLine("You are tai pang le!");
                else
                    Console.WriteLine("You are tai shou le!");
            }
            
        }
    }
}
