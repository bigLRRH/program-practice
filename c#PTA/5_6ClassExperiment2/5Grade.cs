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
          int score = Int32.Parse(Console.ReadLine());
          int s = score/10;
          switch (s){
              case 10:
              case 9:
                  Console.WriteLine("A");
                  break;
              case 8:
                  Console.WriteLine("B");
                  break;
              case 7:
                  Console.WriteLine("C");
                  break;
              case 6:
                  Console.WriteLine("D");
                  break;
              default:
                  Console.WriteLine("E");
                  break;
          }
        }
    }
}
