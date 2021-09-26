#include <bits/stdc++.h>
using namespace std;

vector<string> res = {"0", "1"};
void gc(int n, int i)
{
    if(i == n-1)return;

    vector<string> temp_v = res;
    reverse(temp_v.begin(), temp_v.end());

    for(int j=0; j<temp_v.size(); j++)
    {
        res[j] = '0' + res[j];
        temp_v[j] = '1' + temp_v[j];
    }
    for(int j=0; j<temp_v.size(); j++)
        res.push_back(temp_v[j]);

    gc(n, i+1);

}

int main() {
	//code
	int t; cin >> t; 
	while(t--)
	{
	    int n; cin >> n;
        res = {"0", "1"};
	    gc(n, 0);
	    for(auto i:res)cout << i << " ";
	    cout << endl;
	}
	return 0;
}