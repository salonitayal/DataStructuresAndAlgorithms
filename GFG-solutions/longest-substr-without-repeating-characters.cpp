#include <bits/stdc++.h>
using namespace std;

int SubsequenceLength (string s) 
{
    if(s.length()==0)
    return 0;
    int hash[26];
    memset(hash,-1,sizeof(hash));
    int start=0;
    int ans=0;
    for(int i=0;i<s.length();i++)
    {
        if(hash[s[i]-'a']!=-1)
        {
            start=max(start,hash[s[i]-'a']+1);
        }
        
        ans=max(ans,i-start+1);
        hash[s[i]-'a']=i;
    }
    return ans;
}
int main() {
	//code
	string s; cin >> s;
    cout << SubsequenceLength(s);
	
	return 0;
}