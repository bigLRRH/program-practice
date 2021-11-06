using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace LoopQuestions
{
    class EpsPI
    {
        static void Main(string[] args)
        {
            double[] input= Array.ConvertAll<string,double>(Console.ReadLine().Split(new char[]{'E','e'}),double.Parse);
            double eps;
            try{
                eps = input[0]*Math.Pow(10,input[1]);
            }catch(Exception){
                eps = input[0];
            }
            double sum=1,demination=1,numerator=1,n;
            if (eps>1)
                Console.WriteLine("PI = 2.00000");
            else if(eps<0.000001)
                Console.WriteLine("PI = 3.14159");
            else{
                for(int i=1;;i++){
                    n=numerator/demination;
                    sum+=n;
                    numerator*=i;
                    demination*=(2.0*i+1.0);
                    if(n<eps)
                        break;
                }
                Console.WriteLine("PI = {0:f5}",sum*2-2);
            }
        }
    }
}