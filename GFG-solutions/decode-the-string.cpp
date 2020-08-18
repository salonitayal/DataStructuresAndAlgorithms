#include <iostream>
#include<stack>
using namespace std;

int convertToInt(string num,int l){
    if(l==0){
        return 0;
    }
    int x=num[l-1]-'0';
    return x+convertToInt(num,l-1)*10;
}


void decodeString(string str){
    stack<char> s;
    for(int i=str.length()-1;i>0;){
        if(str[i]==']'  || (str[i]>='a' && str[i]<='z')){
            s.push(str[i]);
            i--;
        }
        else if(str[i]=='['){
            int index=i-1;
            while(index>=0 && str[index]>='0' && str[index]<='9'){
                index--;
            }
            string num;
            num=str.substr(index+1,i-index-1);
            int n=convertToInt(num,num.length());
            string temp="";
            while(!s.empty() && s.top()!=']'){
                temp+=s.top();
                s.pop();
            }
            s.pop();
            string put="";
            while(n--){
                put+=temp;
            }
            int x=put.length();
            while(x){
                s.push(put[x-1]);
                x--;
            }
            i=index;
        }
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}


int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    decodeString(s);
	    cout<<endl;
	}
	
	return 0;
}