using System;

/*
7-4 判断体质完整版 (10 point(s))
体质指数（ BMI）是目前国际上常用的衡量人体胖瘦程度以及是否健康的一个标准。BMI的计算方法如下： 体质指数（BMI） = 体重（kg）/ 身高（ m )的平方。

胖瘦程度	BMI
偏瘦	BMI < 18.5
正常	18.5<=BMI < 24
偏胖	24<= BMI <28
肥胖	28<=BMI <40
极重度肥胖	BMI >= 40
输入格式:
在一行里输入体重 和 身高的值

输出格式:
根据BMI的值，输出表格中的肥胖程度。

输入样例:
在这里给出一组输入。例如：

62 1.71
结尾无空行
输出样例:
在这里给出相应的输出。例如：

正常
结尾无空行
*/

namespace HelloWorldApplication{
    class BMI{
        static void Main(string[] args){
            string input = Console.ReadLine();
            string[] input_ = input.Split(' ');
            double weight = double.Parse(input_[0]);
            double height = double.Parse(input_[1]);

            //计算BMI
            double bmi = weight/Math.Pow(height,2);

            /*
            偏瘦	BMI < 18.5
            正常	18.5<=BMI < 24
            偏胖	24<= BMI <28
            肥胖	28<=BMI <40
            极重度肥胖	BMI >= 40
            */
            if(bmi < 18.5)
                Console.WriteLine("偏瘦");
            else if (bmi < 24)
                Console.WriteLine("正常");
            else if (bmi < 28)
                Console.WriteLine("偏胖");
            else if (bmi < 40)
                Console.WriteLine("肥胖");
            else
                Console.WriteLine("极重度肥胖");

        }
    }
}