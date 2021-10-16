using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

/*
7-16 公约数和公倍数 (10 point(s))
任务描述
于龙被一个问题给难住了，现在需要你帮帮忙。问题是：给出两个正整数，求出它们的最大公约数和最小公倍数。

输入格式:
第一行输入一个整数n（0<n<=10000)，表示有n组测试数据; 随后的n行输入两个整数i,j（0<i,j<=32767)。

输出格式:
输出每组测试数据的最大公约数和最小公倍数

输入样例:
3
6 6
12 11
33 22
结尾无空行
输出样例:
6 6
1 132
11 66
结尾无空行
*/

namespace Lesson4
{
    class GFDandLCM
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            for (int k = 0; k < n; k++)
            {
                int[] a = Array.ConvertAll<string, int>(Console.ReadLine().Split(' '), int.Parse);
                int i = a[0], j = a[1];

                int gfd, lcm;

                //求最大公约数——辗转相除法
                int bigger = i > j ? i : j;
                int smaller = i > j ? j : i;

                for (int d = bigger % smaller; d > 0; d = bigger % smaller)
                {
                    bigger = smaller;
                    smaller = d;
                }
                gfd = smaller;
                // 最小公倍数
                lcm = (i * j) / gfd;
                Console.WriteLine("{0} {1}", gfd, lcm);
            }
        }
    }
}