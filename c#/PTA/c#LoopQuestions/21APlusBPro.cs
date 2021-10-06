using System;

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
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());

            long c = a+b;
            Console.WriteLine(c);
        }
    }
}