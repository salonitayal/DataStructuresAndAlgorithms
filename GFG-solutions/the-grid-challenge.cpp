#include <string> 
#include <iostream> 

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int r, c; cin >> r >> c;
        string s[r];
        for(int i=0; i<r; i++)cin >> s[i];

        int r2, c2; cin >> r2 >> c2;
        string s2[r2];
        for(int i=0; i<r2; i++)cin >> s2[i];

        int is2 = 0, jnew = 0, count = 0;
        for(int i=0; i<r; i++)
        {
            for(int j=jnew; j<c; j++)
            {
                if(s[i][j] == s2[is2][0])
                {
                    string x = s[i].substr(j, c2);
                    if(x == s2[is2])
                    {
                        jnew = j;
                        ++is2;
                        ++count;
                        break;
                    }
                }
                else 
                {
                    jnew = 0;
                    count = 0;
                }
            }
            if(count == r2){cout << "YES"; break;}
        }
        
        if(count != r2) cout << "NO";
        cout << endl;    
    }
    return 0;
}
