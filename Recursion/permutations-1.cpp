#include<bits/stdc++.h>
using namespace std;

/**
 * This is different way of approaching permutation based problems.
 * Although the solution is confusing for this, but its worth doing.
**/
void permutations(int cb, int tb, vector<int> itms, int ssf, int ts, string asf)
{
    if(cb > tb)
    {
        if(ssf == ts)
        {
            cout << asf << endl;
            return;
        }
    }
    for(int i=0; i<ts; i++)
    {
        if(itms[i] == 0)// use ni hua
        {
            itms[i] = 1;
            /**
             * current_box = cb is incremented, as now we have to choose from tb-cb,
             * selection_so_far = ssf is incremented, as we have to select from ts-ssf boxes now
            **/
            permutations(cb+1, tb, itms, ssf+1, ts, asf + to_string(i+1)); 
            itms[i] = 0;
        }
    }
    permutations(cb+1, tb, itms, ssf, ts, asf+'0');
}
int main()
{
    int n, itm; cin >> n >> itm;
    vector<int> x(n);
    for(int i=0; i<n; i++)x[i] = 0;
    permutations(1, n, x, 0, itm, "");
    return 0;
}

