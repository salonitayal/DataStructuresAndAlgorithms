
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
int l=s.size();
string a;
string b;
string c;
int max=0;
for(int i=1;i<=l;i++)
{
for(int j=0;j<=l-i;j++)
{
a=s.substr(j,i);
b=a;
reverse(a.begin(),a.end());
if(a==b)
{
int n=b.length();
if(n>max)
{
max=n;
c=b;
}
}
}
}
cout<<c<<endl; }
return 0;}

