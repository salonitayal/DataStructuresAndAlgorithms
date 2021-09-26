#include<bits/stdc++.h>
using namespace std;
int * fncn(int* a[], int l)
{
    int *a_new[l];
    for(int i=l-1; i>=0; i--)
        *a_new[i] = *a[i];

    return *a_new;

}
int main()
{
    int *a[10] = new int[10];
    int length = 10;
    cout << fncn(*a, length);
    return 0;
}