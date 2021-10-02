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
            int age = Int32.Parse(Console.ReadLine());
            
            switch (age){
                case 2:
                case 3:
                    Console.WriteLine("age {0},enter Lower class.",age);
                    break;
                case 4:
                    Console.WriteLine("age {0},enter Middle class.",age);
                    break;
                case 5:
                case 6:
                    Console.WriteLine("age {0},enter Higher class.",age);
                    break;
                default:
                    Console.WriteLine("Error.");
                    break;
            }
        }
    }
}
