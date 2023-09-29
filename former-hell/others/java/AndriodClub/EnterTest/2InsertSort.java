import java.io.*;

public class InsertSort{
    public void main(string[] args){
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String input = br.readLine();
        String[] input_ = input.split(' ');
        int n = Integer.parseInt(input_[0]);
        int l = Integer.parseInt(input_[1]);
        int r = Integer.parseInt(input_[2]);

        input = br.readLine();
        String[] input2_ = input.split(' ');
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            a[i]=Integer.parseInt(input2_[i]);
        }

        sort(a[i],l,r);

        for(int element:a){
            System.print(element+" ");
        }
         
    }
    
    public void sort(int a[],int l,int r){
        int temp;
        for(int i=l;i<r;i++){
            for(int j=l,j<r;j++){
                if(a[j]>a[j+1]){
                    temp = a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp; 
                }
            }
        }
    }
}