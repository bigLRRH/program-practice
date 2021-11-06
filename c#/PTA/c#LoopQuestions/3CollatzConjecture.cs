using System;

namespace LoopQuestions
{
    class CollatzConjecture
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
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