#include<iostream>
using namespace std;

int main()
{
    cout << "Enter the number of elements in an array: ";
    int n; cin >> n;
    int a[n];
    cout << "Enter the elements in an array: ";
    for(int i = 0; i < n; i++)cin >> a[i];
    
    for(int i = n-1 ; i > 0; i --)
    {
        for(int j = 0; j < i; j ++)
        {
            if(a[j] > a[j+1])swap(a[j], a[j+1]);
        }
    }
    for(int i = 0; i < n; i++)cout << a[i] << " ";
    return 0;
}