using System;

/*
7-9 完美与普通 (10 point(s))
诺诺看到三角形，觉得很好玩。有等边三角形、直角三角形、等腰三角形……她最喜欢等边三角形，认为它是完美的，评价为“Perfect”；而直角三角形评价为“Very Good”，等腰三角形评价为“Good”，其他三角形评价为“Ordinary”。

输入格式:
有多组测试数据。每组测试数据第一行是正整数n(n<=20)，表示有n组测试。每组测试输入三个正整数a,b,c(1<=a,b,c<=1000)，表示三角形的三条边长，a,b,c之间以一个空格分隔。

输出格式:
对于每组测试数据，在一行上输出诺诺对该三角形的评价；若不是三角形，输出单词“Sorry”。引号不必输出。

输入样例:
3
3 4 5
1 1 1
1 2 1
输出样例:
Very Good
Perfect
Sorry
*/

namespace HelloWorldApplication{
    class Triangles{
        static void Main(string[] args){
            int n = Int32.Parse(Console.ReadLine());
            for (int i=0;i<n;i++){

                int[] a = DataInput();

                if(a[0]+a[1]>a[2] && a[0]+a[2]>a[1] && a[1]+a[2]>a[0]){
                    if(a[0]==a[1] && a[1]==a[2])
                        Console.WriteLine("Perfect");
                    else if(Math.Pow(a[0],2)+Math.Pow(a[1],2)==Math.Pow(a[2],2) || Math.Pow(a[0],2)+Math.Pow(a[2],2)==Math.Pow(a[1],2) || Math.Pow(a[1],2)+Math.Pow(a[2],2)==Math.Pow(a[0],2))
                        Console.WriteLine("Very Good");
                    else if(a[0]==a[1] || a[1]==a[2] || a[0]==a[2])
                        Console.WriteLine("Good");
                    else
                        Console.WriteLine("Ordinary");
                }else
                    Console.WriteLine("Sorry");

            }
            
        }

        static private int[] DataInput(){
            string input = Console.ReadLine();
            string[] input_ = input.Split(' ');

            int arraysize = 1;
            foreach (string element in input_)
                arraysize++;

            int[] dataArray = new int[arraysize];         

            int i = 0;
            foreach(string element in input_){
                dataArray[i] = Int32.Parse(element);
                i++;
            }

            return dataArray;
        }

    }
}

