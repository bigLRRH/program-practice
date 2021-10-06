using System;

namespace LoopQuestions{
    class Fib{
        static void Main(string[] args){
            int n = int.Parse(Console.ReadLine());
            long f1,f2;
            f1 = 1;f2=1;
            long f3=0;

            for(int i=3;i<=n;i++){
                f3 = f1+f2;
                f1 = f2;
                f2 = f3;
            }

            Console.WriteLine(f2%10086);
        }
    }
}