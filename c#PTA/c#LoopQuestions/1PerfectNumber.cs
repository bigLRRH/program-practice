using System;

/*
7-1 找完数 (20 point(s))
所谓完数就是该数恰好等于除自身外的因子之和。例如：6=1+2+3，其中1、2、3为6的因子。本题要求编写程序，找出任意两正整数m和n之间的所有完数。

输入格式：
输入在一行中给出2个正整数m和n（1<m≤n≤10000），中间以空格分隔。

输出格式：
逐行输出给定范围内每个完数的因子累加形式的分解式，每个完数占一行，格式为“完数 = 因子1 + 因子2 + ... + 因子k”，其中完数和因子均按递增顺序给出。若区间内没有完数，则输出“None”。

输入样例：
2 30
结尾无空行
输出样例：
6 = 1 + 2 + 3
28 = 1 + 2 + 4 + 7 + 14
结尾无空行
*/

namespace LoopQuestions{
    class PerfectNumber{
        static void Main(string[] args){
            string input = Console.ReadLine();
            int idx = input.IndexOf(' ');
            int m = Int32.Parse(input.Substring(0,idx));
            int n = Int32.Parse(input.Substring(idx+1));

            int k = 0;//检测区间内是否没有完数

            for(int i=m;i<=n;i++){
                if(i==1){
                    k++;
                    continue;
                }
                int sum = 0;
                int[] a = new int[i/2];
                for(int j=1;j<=i/2;j++)
                    sum += i%j==0?j:0;

                if(sum==i){
                    Console.Write("{0} = 1",i);
                    for(int j=2;j<=i/2;j++){
                        if(i%j==0)
                            Console.Write(" + {0}",j);
                    }
                    Console.WriteLine();
                }else
                    k++;
            }

            if(k == n-m+1)
                Console.WriteLine("None");
        }
    }
}