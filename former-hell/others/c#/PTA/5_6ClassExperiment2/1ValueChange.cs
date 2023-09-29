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
            string str= Console.ReadLine();
            int idx = str.IndexOf(" ");
            int x = int.Parse(str.Substring(0,idx));
            int y = int.Parse(str.Substring(idx+1));
            int z = x;
            x = y;
            y = z;
            Console.WriteLine(x + " " + y);
        }
    }
}