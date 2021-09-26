#include<iostream>
using namespace std;

int main()
{
    cout << "Enter the number of elements in an array: ";
    int n; cin >> n;
    int a[n];
    cout << "Enter the elements in an array: ";
    for(int i = 0; i < n; i++)cin >> a[i];
    
    for(int i = 0 ; i < n; i ++)
    {
        int x = a[i];
        int j = i-1;
        while(x < a[j] && j >= 0)
        {
            int temp = x;
            x  =  a[j];
            a[j] = temp;
            j--;
        }
    }
    for(int i = 0; i < n; i++)cout << a[i] << " ";
    return 0;
}