#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t; cin>> t;
    cin.ignore();
    while(t--)
    {
        string s1;
        getline(cin, s1);
        string s2 = "AEIOU aeiou";
        int n = s1.length();
        int count = 0;

        for(int i = 0; i < n; i ++)
        {
            for(int j = 0; j < 11; j++)
            {
                if(s1[i] == s2[j])
                {
                    cout << s1[i];
                    count ++; //its not zero; means vowel is present
                }
            }
        }
        if(count == 0)
        {
            cout << "No Vowel";
        }
        cout << endl;
    }
    return 0;
}