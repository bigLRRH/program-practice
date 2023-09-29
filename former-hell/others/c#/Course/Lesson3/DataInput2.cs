using System;

namespace Lesson3{
    class DataInput2{
        private int[] DataInput(){
            int[] a = Array.ConvertAll(Console.ReadLine().Split(' '),Convert.ToInt32);
        } 
    }
}