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
            int a = Int32.Parse(str.Substring(0, idx1));
            int b = Int32.Parse(str.Substring(idx1 + 1,idx2-idx1-1));
            int c = Int32.Parse(str.Substring(idx2 + 1));

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
