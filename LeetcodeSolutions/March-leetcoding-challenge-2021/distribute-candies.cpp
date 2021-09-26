class Solution {
public:
    int distributeCandies(vector<int>& v) {
        int n = v.size()/2;
        sort(v.begin(), v.end());
        int x=v[0], c=1;
        
        for(int i=1; i<v.size(); i++)
        {
            if(x != v[i])
            {
                x = v[i];
                ++c;
            }
        }
        if(c>n)return n;
        else return c;
        
    }
};