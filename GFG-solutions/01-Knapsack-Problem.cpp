#include <iostream>
using namespace std;

int knapsack(int wt[], int val[], int w, int n)
{
    if(n == 0 || w == 0)return 0;

    if(wt[n-1] <= w)
        return max((val[n-1] + knapsack(wt, val, w-wt[n-1], n-1)), knapsack(wt, val, w, n-1));

    else 
        return knapsack(wt, val, w, n-1);
}
int main() {
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int w; cin >> w;
        int wt[n], val[n];
        for(int i=0; i<n; i++)cin >> val[i];
        for(int i=0; i<n; i++)cin >> wt[i];

        cout << knapsack(wt, val, w, n) << endl;
    }	
	return 0;
}