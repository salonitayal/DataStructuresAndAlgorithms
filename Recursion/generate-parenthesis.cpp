class Solution {
public:
    vector<string> res;
    void parenthesis(int n, int o, int c, string tmp)
    {
        if(o == c && o == n)
        {
            res.push_back(tmp);
            return;
        }
        if(o > n)return;
        if(c > o)return;
        
        parenthesis(n, o+1, c, tmp + "(");
        parenthesis(n, o, c+1, tmp + ")");
    }
    vector<string> generateParenthesis(int n) {
        parenthesis(n, 0, 0, "");
        return res;
    }
};