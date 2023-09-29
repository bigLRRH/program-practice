using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

/*
7-21 A+B (10 point(s))
Caculate the sum of A and B.

Input:
two integer A and B.

Output:
the result of A+B.

Input:
3 5
结尾无空行
Output:
8
结尾无空行
*/

namespace LoopQuestioons{
    class APlusB{
        static void Main(string[] args){
            int[] a=Array.ConvertAll<string, int>(Console.ReadLine().Split(' '), int.Parse);

            long c = a[0]+a[1];
            Console.WriteLine(c);
        }
    }
}