#include <bits/stdc++.h>
using namespace std;
float roundof(float var)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =3767.16    for rounding off value
    // then type cast to int so value is 3767
    // then divided by 100 so the value converted into 37.67
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}
int main() {
	int t; cin >> t;
	while(t--)
	{
	    float k1, k2, k3, v; cin >> k1 >> k2 >> k3 >> v;
	    v *= k1*k2*k3;
	    v = 100/v;
	    v = roundof(v);
	    v *= 100;
	    //cout << v;
	    if(v<958)cout << "YES";
	    else cout << "NO";
	    cout << endl;
	}
	return 0;
}
