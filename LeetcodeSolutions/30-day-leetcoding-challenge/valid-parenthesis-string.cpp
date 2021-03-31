class Solution {
public:
    bool checkValidString(string s) {
        int l=0, r=0, a=0, x=1;
        for(int i=0; s[i]; i++)
        {
            if(s[i] == '(')++l;
            else if(s[i] == ')')
            {
                if(l>0)--l;
                else if(a>0)--a;
                else x=0;
            }
            else ++a;
        }
        
        // checking open bracket
        l=0, a=0; 
        int x1=1;
        for(int i=s.length()-1; i>=0; i--)
        {
            if(s[i] == ')')++l;
            else if(s[i] == '(')
            {
                if(l>0)--l;
                else if(a>0)--a;
                else x1=0;
            }
            else ++a;
        }

        
        if(x&&x1)return true;
        else return false;
        
    }
};