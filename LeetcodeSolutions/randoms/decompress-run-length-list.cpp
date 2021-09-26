class Solution {
public:
    vector<int> decompressRLElist(vector<int>& v) {
        vector<int> a;
        for(int i=0; i<v.size(); i+=2)
        {
            int x = v[i];
            while(x--)a.push_back(v[i+1]);
        }
        return a;
    }
};