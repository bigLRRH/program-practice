using System;

/*
7-10 求三门课程的平均分 (10 point(s))
某同学本学期学习了C语言，高数和英语，请输入三门课程的成绩，并输出三门课程的平均分。

输入格式:
在一行中输入3个浮点型数据，空格分隔。

输出格式:
输出平均分，保留2位小数。

输入样例:
在这里给出一组输入。例如：

79 87.6 83
结尾无空行
输出样例:
在这里给出相应的输出。例如：

83.20
结尾无空行
*/

namespace HelloWorldApplication{
    class AverageScores{
        static void Main(string[] args){
            double[] a = DataInput();

            Console.WriteLine("{0:f2}",(a[0]+a[1]+a[2])/3);
        }

        static private double[] DataInput(){
            string input = Console.ReadLine();
            string[] input_ = input.Split(' ');

            int arraysize = 1;
            foreach (string element in input_)
                arraysize++;

            double[] dataArray = new double[arraysize];         

            int i = 0;
            foreach(string element in input_){
                dataArray[i] = double.Parse(element);
                i++;
            }

            return dataArray;
        }
    }
}