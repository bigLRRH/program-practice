using System;
namespace   LoopQuestions{
    class SandGlass{
        static void Main(string[] args){
            int num = int.Parse(Console.ReadLine());
                for(int i=num;i>0;i--){
                    for(int j=0;j<num-i;j++)
                        Console.Write(' ');
                    for(int j = i*2-1;j>0;j--)
                        Console.Write('*');
                    Console.WriteLine();
                }
                for(int i =1;i<num;i++){
                    for(int j =num-i;j>1;j++)
                        Console.Write(' ');
                    for(int j =1;j<=i*2+1;j++)
                        Console.Write('*');
                    Console.WriteLine();
                }
        }
    }
}