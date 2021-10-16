using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Lesson4
{
    class GFDandLCM
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            char[] ca = input.ToCharArray();
            int L = ca.Length;
            int[] ca_int = new int[L];

            for(int i=0;i<L;i++)
                ca_int[i] = (char)ca[i];

            //排序ca_asc数组
            for(int i=0;i<L-1;i++){
                for(int j=i;j<L-i-1;j++){
                    if(ca_int[j]>ca_int[j+1]){
                        int temp = ca_int[j];
                        ca_int[j] = ca_int[j+1];
                        ca_int[j+1] = temp;
                    }
                }
            }

            int[] output_int = new int[L];
            int output_L = L;
            int abc = 0;
            for(int i = 0;i<L;i++){
                    if(ca_int[i]!=ca_int[i+1]){
                        output_int[abc]=ca_int[i];
                        abc++;
                    }else
                        output_L--;
            }

            for(int i=0;i<output_L;i++){
                Console.Write("{0}",output_int[i]);
            }
            Console.WriteLine();
        }
    }
}