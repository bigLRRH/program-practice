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
            int a = Int32.Parse(Console.ReadLine());
            
            if(a%3==0 && a%5==0 && a%7==0)
                Console.WriteLine("3 5 7");
            else if(a%3==0 && a%5==0)
                Console.WriteLine("3 5");
            else if(a%3==0 && a%7==0)
                Console.WriteLine("3 7");
            else if(a%5==0 && a%7==0)
                Console.WriteLine("5 7");
            else if(a%3==0)
                Console.WriteLine("3");
            else if(a%5==0)
                Console.WriteLine("5");
            else if(a%7==0)
                Console.WriteLine("7");          
            else
                Console.WriteLine('n') ;
        }
    }
}
