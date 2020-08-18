#include<iostream>
using namespace std;

void *functn(int* a, int d)
{
    int b[8];
    for(int j=0; j<d; j++)
    {
        (a[1]==0)?b[0]=0:b[0]=1;
        (a[6]==0)?b[7]=0:b[7]=1;

        for(int i=1; i<7; i++)
            (a[i-1] == a[i+1])?b[i]=0:b[i]=1;

        for(int i=0; i<8; i++)a[i]=b[i];
    }
    for(int i=0; i<8; i++)cout << a[i] << " ";
}
int main()
{
    int a[8], b[8], d;
    cin>>d;
    for(int i=0; i<8; i++)cin>>a[i];
    functn(a, d);
    return 0;
}