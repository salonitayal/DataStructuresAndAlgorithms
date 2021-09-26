int firstMissingPositive(vector<int>& v) {
        if(!v.size())return 1;
        for(int i=0; i<v.size(); i++)
        {
            while(v[i]>0 && v[i]<=v.size() && v[i] != v[v[i]-1])
            {
                swap(v[i], v[v[i]-1]);
            }
        }
        for(int i=0; i<v.size(); i++)
        {
            if(v[i] != i+1)
            {
                return i+1;
            }
        }
        return v.size()+1;
    }