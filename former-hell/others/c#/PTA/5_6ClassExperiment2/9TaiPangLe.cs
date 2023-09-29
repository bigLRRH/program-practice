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
