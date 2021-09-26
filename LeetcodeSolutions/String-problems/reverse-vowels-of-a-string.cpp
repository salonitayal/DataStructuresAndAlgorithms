bool isVowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c =='o' || c=='u' || c=='A' || c=='E' || c=='I' || c =='O' || c=='U')
        return true;
    return false;
}
class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
        stack<char> st;
        for(int i=0; i<n; i++)
            if(isVowel(s[i]))st.push(s[i]);
        for(int i=0; i<n; i++)
        {
            if(!st.empty() && isVowel(s[i]))
            {
                s[i] = st.top();
                st.pop();
            }
        }
        cout << s; 
        return s;
    }
};



// Better approach
class Solution {
public:
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int i=0,j=s.length()-1;
        int n=s.length()-1;
        while(i<j){
            while(i<n && !isVowel(s[i])){
                i++;
            }
            while(j>=0 && !isVowel(s[j])){
                j--;
            }
            if(i<j){
                swap(s[i],s[j]);
                i++;j--;
            }
        }
        return s;
    }
};