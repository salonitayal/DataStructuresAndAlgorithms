class Solution {
public:
    
    int minimumLengthEncoding(vector<string>& v) {
        unordered_map<string, int> m;
        string s = "";
        for(int i=0; i<v.size(); i++)++m[v[i]];
        for(int i=0; i<v.size(); i++)
        {
            string x = v[i];
            for(int j=1; j<x.length(); j++)
            {
                string z=x.substr(j, x.length());
                if(m[z]>0)
                    m[z]=-1;
            }
        }
        for(auto i:m)
        {
            if(i.second>0)
            {
                s += i.first;
                s.push_back('#');
            }
        }
        cout << s;
        
        return s.length();
    }
};




