#include<iostream>
#include<deque>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);																																																																																																																												
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
	    int n, k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0; i < n; i ++)cin>> a[i];
		deque<int> dq   ;
        int i;
        for(i = 0; i < k; i ++)
        {
            while((!dq.empty()) && a[i] >= a[dq.back()])dq.pop_back();
            dq.push_back(i);
        }cout << a[dq.front()] <<  " ";
        for(; i < n; i++)
        {
            while((!dq.empty()) && dq.front() <= i-k)dq.pop_front();
            while((!dq.empty()) && a[i] >= a[dq.back()])dq.pop_back();
            dq.push_back(i);
            cout << a[dq.front()] << " ";
        }
        cout << endl;
	}
    return 0;
}