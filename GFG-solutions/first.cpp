#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

bool f(int x, int y)
{
    return x > y;
}

void VectorDemo()
{
    vector<int> a = {11, 2, 4, 3};
    cout << a[1];
    sort(a.begin(), a.end());
    cout << a[1] << endl;
    
    bool prst =  binary_search(a.begin(), a.end(), 7);    // ret 0 or 1
    cout << prst << endl;

    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(120);

    cout << a[4] << endl;
    //vector<int>::iterator it = lower_bound(a.begin(), a.end(), 100);  // gives first digit which is just greater than equal to      >=  
    auto it = lower_bound(a.begin(), a.end(), 100);
    vector<int>::iterator it2 = upper_bound(a.begin(), a.end(), 100);  // gives first digit which is strictly greater than equal to  >

    cout << *it << endl << *it2 << endl;
    cout << it2 - it << endl;   // gives the count ; value in it is 100 since its ptg to 100
    cout << *it << endl;


    // Sorting in dec order
    sort(a.begin(), a.end(), f);
    vector<int>::iterator it3;
    for(it3 = a.begin(); it3 != a.end(); it3++)
    {
        cout << *it3 << " " ;
    } 
    cout << endl;
    // shortened way to use for loop here
    for (int x: a)
    {
        cout << x << " ";
    }
    cout << endl;

    // Referencing 
    //for (int &x: a)
    //{
      //  x++;
    //}

    for (int x: a)
    {
        x++;
        cout << x << " ";
    }
    cout << endl;
 
}


void SetDemo()
{
    set <int> s;
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(10);

    for(int x : s)
    {
        cout << x << " ";
    }

    auto it = s.find(-1);
    if(it == s.end())
    {
        cout << "not present\n";
    }
    else
    {
        cout << "present\n";   
    }
    

}


// =      n      b
int main(){
   
    VectorDemo();
    cout << "============SETS=================" << endl;
    SetDemo();

    return 0;
}