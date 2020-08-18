#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n; cin >> n; 
    int a[n]; for(int i = 0; i < n; i++)cin >> a[i];

    int m_c, m_g; // m_c == max_current; m_g == max_global
    m_c = a[0];
    m_g = a[0];
    for(int i = 1; i < n; i++)
    {
        m_c = max(a[i], m_c + a[i]);
        if(m_c > m_g)
            m_g = m_c;
    }
    cout << m_g << endl;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	int n; cin >> n; 
    int a[n]; for(int i = 0; i < n; i++)cin >> a[i];

    int m_c, m_g; // m_c == max_current; m_g == max_global
    m_c = 0;
    m_g = 0;
    for(int i = 0; i < n; i++)
    {
        m_c = m_c + a[i];
        if(m_c < 0)m_c = 0;
        if(m_c > m_g)
            m_g = m_c;
    }
    if(m_g)
      cout << m_g << endl;
      else
      cout << *max_element(a,a+n) << endl;
	}
	return 0;
}
*/