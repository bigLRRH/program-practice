import java.io.*;

private class KakutaniConjecture{
    static void main(string[]args){
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        for(n!=1){
            n=n%2==0?n/=2:n*=3+=1;
        }

        System.out.println("结果为1")
    }
}