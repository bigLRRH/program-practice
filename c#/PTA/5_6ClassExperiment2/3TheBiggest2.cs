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
            string[] str_ = str.Split(' ');
            double a = double.Parse(str_[0]);
            double b = double.Parse(str_[1]);

            if (a > b)
            {
                if (a > c)
                    Console.WriteLine(a);
                else
                    Console.WriteLine(c);
            }
            else
            {
                if (b > c)
                    Console.WriteLine(b);
                else
                    Console.WriteLine(c);
            }
        }
    }
}
