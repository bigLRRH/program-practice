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
            string[] str_ = str.Split(' ');
            double w = double.Parse(str_[0]);
            double s = double.Parse(str_[1]);

            double price = w*s;
            
            if(s<250)
                ; 
            else if(s<500)
                price = price*0.98;
            else if(s<1000)
                price = price*0.95;
            else if(s<2000)
                price = price*0.92;
            else if(s<3000)
                price = price*0.9;
            else
                price = price*0.85;
            
            Console.WriteLine("{0:0}",price);
        }
    }
}
