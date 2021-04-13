#include<bits/stdc++.h>
using namespace std;



void rec(string s, int i, int j, vector<string> &v)
	    {
	        if(i==s.length())return;
            for(j=i; j<s.length(); j++)
            {
                swap(s[i], s[j]);
                rec(s, i+1, j, v);
                if(i==s.length()-1)
                    v.push_back(s);
            }
	    }
vector<string>find_permutation(string S)
		{
		    vector<string> v;
		    rec(S, 0, 0, v);
            sort(v.begin(), v.end());
		    return v;
		}


int main()
{
    string s; cin >> s;
    vector<string> v= find_permutation(s);
    for(auto i:v)cout << i << " ";

}