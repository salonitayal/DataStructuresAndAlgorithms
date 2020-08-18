import java.util.*;
class Cs
{
     public static void subArray(int N, int S, int k, int a[])
        {
            int s=0; int i=k;
            while(s<S)
            {
                s=s+a[i];
                i++;
            }
            if(s==S)
                System.out.println(k+" "+(i-1)) ;
            else if(k!=N)
            {
                k++;
                subArray(N,S,k,a);
            }
            else
                System.out.println(-1);
        }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int N= sc.nextInt();
        int a[]= new int[N];
        for(int i=1;i<=N;i++)
            a[i]= sc.nextInt();
        int S= sc.nextInt();
        Cs ob = new Cs();
        int k=1; 
        int i;
        ob.subArray(N,S,k,a);
    }
}