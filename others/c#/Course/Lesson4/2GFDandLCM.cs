using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

/*
7-15 最大公约数和最小公倍数 (15 point(s))
本题要求两个给定正整数的最大公约数和最小公倍数。

输入格式:
输入在一行中给出两个正整数M和N（≤1000）。

输出格式:
在一行中顺序输出M和N的最大公约数和最小公倍数，两数字间以1空格分隔。

输入样例:
511 292
结尾无空行
输出样例:
73 2044
结尾无空行
*/

namespace Lesson4
{
    class GFDandLCM
    {
        static void Main(string[] args)
        {
            int[] a = Array.ConvertAll<string,int>(Console.ReadLine().Split(' '), int.Parse);
            int m = a[0], n = a[1];

            int gfd, lcm;

            //求最大公约数——辗转相除法
            int bigger = m > n ? m : n;
            int smaller = m > n ? n : m;

            for (int d = bigger % smaller; d > 0; d = bigger % smaller)
            {
                bigger = smaller;
                smaller = d;
            }
            gfd = smaller;
            // 最小公倍数
            lcm = (m * n) / gfd;
            Console.WriteLine("{0} {1}", gfd, lcm);
        }
    }
}