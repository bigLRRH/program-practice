using System;

namespace LoopQuestions{
    class Pi1{
        static void Main(string[] args){
            double sum=0;
            bool flag=true;
            for (int i =1;;i+=2){
                double x = 1.0/i;
                if(flag){
                    flag=false;
                    sum += x;
                }else{
                    flag=true;
                    sum -= x;
                }
                if(x<0.000001)break;
            }    
            Console.WriteLine("{0:f6}",sum*4);
        }
    }
}