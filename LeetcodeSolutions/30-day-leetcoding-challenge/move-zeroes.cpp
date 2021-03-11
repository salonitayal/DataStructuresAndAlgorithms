class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int i=0, j=1;
        while(j < v.size())
        {
            if(v[i] == 0 && v[j] == 0)
            {
                ++j;
            }
            else if(v[i] == 0 && v[j] != 0)
            {
                swap(v[i], v[j]);
                ++i, ++j;
            }
            else if(v[i] != 0 && v[j] != 0)
            {
                ++i, ++j;
            }
            else 
            {
                ++i, ++j;
            }
        }
    }
};