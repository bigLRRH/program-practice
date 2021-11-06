using System;

namespace LoopQuestions
{
    class CollatzConjecturePro1
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string[] input_= input.Split(' ');
            int a =int.Parse(input_[0]),b = int.Parse(input_[1]);
            for(int n = a;n<=b;n++){
                Console.Write(n+":");
                if (n % 2 != 0)
                {
                    n = n * 3 + 1;
                    Console.Write(n);
                }
                else
                {
                    n = n / 2;
                    Console.Write(n);
                }
                while (n != 1)
                {
                    if (n % 2 != 0)
                    {
                        n = n * 3 + 1;
                        Console.Write(" " + n);
                    }
                    else
                    {
                        n = n / 2;
                        Console.Write(" " + n);
                    }
                }
                Console.WriteLine();
            }
        }
    }
}