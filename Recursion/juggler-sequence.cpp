class Solution{
public:
    void rec(vector<int> &v, int n)
    {
        if(n==1){
        v.push_back(n);
        return;
        }
        v.push_back(n);
        (n&1)?rec(v, pow(n, 1.5)):rec(v, pow(n, 0.5));
    }
    vector<int> jugglerSequence(int N){
        vector<int> v;
        rec(v, N);
        return v;
    }
};