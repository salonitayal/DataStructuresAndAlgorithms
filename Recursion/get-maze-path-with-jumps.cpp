#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<string> solve(int sx, int sy, int dx, int dy)
{
    if(sy == dy && sx == dy)
    {
        vector<string> tmp;
        tmp.push_back("");
        return tmp;
    }
    if(sy > dy || sx > dy)
    {
        vector<string> tmp;
        //tmp.push_back("");
        return tmp;
    }
    vector<string> hpath, vpath, dpath, tpath;
    for(int i=1; i<=dy-sy; i++) // loop is to determine ke max kitne size ka jump le skte h as in this case 3 is max jump we can take and 1 is min jump
    {
        hpath = solve(sx, sy+i, dx, dy); // faith in this question is ki h1, h2, h3 points se hme destination tkki path miljaegi
        for(auto itr:hpath)
        {
            // we have added "i" as its running for loop. bcs yadi h1 se dest phuchna h to we need to add h1 on the result and so on
            tpath.push_back("h" + to_string(i) + itr); 
        }
    }
    for(int i=1; i<=dx-sx; i++)
    {
        vpath = solve(sx+i, sy, dx, dy);
        for(auto itr:vpath)
        {
            tpath.push_back("v" + to_string(i) + itr);
        }
    }
    for(int i=1; i<=dy-sy && i<=dx-sx; i++)
    {
        dpath = solve(sx+i, sy+i, dx, dy);
        for(auto itr:vpath)
        {
            tpath.push_back("d" + to_string(i) + itr);
        }
    }
    return tpath;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        
        vector<string> res;
        res = solve(1, 1, 4, 4);
        for(auto i: res)
        cout << i << " ";
    }
    
    return 0;
}