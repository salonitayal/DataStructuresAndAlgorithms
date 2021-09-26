class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
        priority_queue<int> q;
        for(auto i:v)q.push(i);
        while(q.size()>1)
        {
            int x = q.top();
            q.pop();
            x -= q.top();
            q.pop();
            q.push(x);
        }
        return q.top();
    }
};