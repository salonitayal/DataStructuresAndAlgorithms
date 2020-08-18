#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int n1 = 2*n;
    int n2 = n;
    int n3, n4;
    int j;
    for(j = 1; j <= n/2+1 ; j ++)
    {
        {
            cout << n1 << " ";
            n3 = n1;
            for(int k =1; k < j; k++)
            {
                n3 -= 4;cout << n3 << " ";
            }
            for(int k = j; k < (n2 - 1); k ++)
            {
                cout << " " << " ";
            }
            if(j == 1)
            {
                cout << " ";
            }
            n4 = n3/2;
            for(int k = 1; k < j ; k ++)
            {
                if(n4 == 1)
                {
                    n4 += 2;
                }
                else 
                {
                    cout << n4 << " ";
                    n4 += 2;
                }
                
            }
            cout << n1/2 << endl;
            --n2;
        }
    }
    int count = 0;
    for(j = n/2; j > 0; j --)
    {
        cout << n1 << " ";
        n3 = n1;
        for(int k = 1; k < j; k ++)
        {
            n3 -= 4; cout << n3 << " ";
        }
        count += 2;
        for(int k = 1; k < count; k ++)
        {
            cout << " " << " ";
        }
        n4 = n3 /2;
        for(int k =1; k < j; k++)
        {
            cout << n4 << " ";
            n4 += 2;
        }
        if(j == 1)cout << " ";
        cout << n << endl;
    }


    return 0;
}