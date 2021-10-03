using System;

/*
7-8 四个数中的最大值 (100 point(s))
利用关系运算和条件运算，编程输入4个整数，输出它们中的最大值。

输入样例:
1 2 3 4
结尾无空行
输出样例:
4
结尾无空行
输入样例:
3 1 4 2
结尾无空行
输出样例:
4
结尾无空行
*/

namespace HelloWorldApplication{
    class MaxPro{
        static void Main(string[] args){
            string input = Console.ReadLine();
            string[] input_ = input.Split(' ');
            int arraysize = 1;
            foreach (string element in input_)
                arraysize++;

            int[] a = new int[arraysize];         

            int i = 0;
            foreach(string element in input_){
                a[i] = Int32.Parse(element);
                i++;
            }

            int max = a[0];
            foreach(int element in a)
                max = element>max?element:max;

            Console.WriteLine(max);
        }

        int[] DataInput(){
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