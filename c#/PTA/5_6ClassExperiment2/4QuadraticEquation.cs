using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            string str = Console.ReadLine();
            int idx1 = str.IndexOf(" ");
            int idx2 = str.IndexOf(" ", idx1+1);
            double a = double.Parse(str.Substring(0, idx1));
            double b = double.Parse(str.Substring(idx1 + 1,idx2-idx1-1));
            double c = double.Parse(str.Substring(idx2 + 1));

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
                Console.WriteLine("{0:f2}",result1);
            }
            else
            {
                delta = Math.Pow(b, 2) - 4 * a * c;
                if (delta > 0)
                {
                    result1 = (-b + Math.Sqrt(delta)) / (2 * a);
                    result2 = (-b - Math.Sqrt(delta)) / (2 * a);
                    Console.WriteLine("{0:f2}",result1);
                    Console.WriteLine("{0:f2}",result2);
                }
                else if (delta == 0)
                {
                    result1 = (-b + Math.Sqrt(delta)) / (2 * a);
                    Console.WriteLine("{0:f2}",result1);
                }
                else
                {
                    result1 = -b / (2 * a);
                    result2 = Math.Sqrt(-delta) / (2 * a);
                    Console.WriteLine("{0:f2}+{1:f2}i", result1, result2);
                    Console.WriteLine("{0:f2}-{1:f2}i", result1, result2);
                }
            }
        }
    }
}
