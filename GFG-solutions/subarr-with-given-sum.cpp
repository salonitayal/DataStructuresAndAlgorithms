#include<iostream>
using namespace std;
int subArray(int N, int S, int k, int a[])
{
    int s=0; int i=k;
            while(s<S)
            {
                s=s+a[i];
                i++;
            }
            if(s==S)
                (cout << k << " "<<i-1);
            else if(k!=N)
            {
                k++;
                subArray(N, S, k, a);
            }
            else
               cout << -1;
}
int main()
{
    int t;cin>> t;
    while(t--)
    {
        int N;
    cin>> N; 
    int a[N];
    
    int S;
    cin>> S;

    for(int i=1;i<=N;i++)
    cin>> a[i];
    int k = 1;
    subArray(N, S, k, a);
    cout << endl;
    }

}
