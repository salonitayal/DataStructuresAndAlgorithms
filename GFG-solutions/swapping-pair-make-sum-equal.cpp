// ==================       https://ide.geeksforgeeks.org/NR5Y0ajuHn       ====================

#include <iostream>
#include<unordered_map>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--)
	{
	    int n,m;cin>>n>>m;
	    int a[n];
	    int b[m];
	    int s1=0,s2=0;
	    unordered_map<int,int>map;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        s1+=a[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>b[i];
	        s2+=b[i];
	        map[b[i]]++;
	    }
	    int sum=abs(s1-s2);
	    int i;
	    for(i=0;i<n;i++)
	    {
	        if(map.find(sum-a[i])!=map.end())
	        {
	            cout<<"1";
	            break;
	        }
	    }
	    if(i==n)
	    {
	        cout<<"-1";
	        
	    }
	    cout<<endl;
	}
	return 0;
}