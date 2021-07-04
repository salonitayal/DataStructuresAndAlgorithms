#include<bits/stdc++.h>
using namespace std;

struct Pair
{
    int min;
    int max;
};

struct Pair getmaxmin(int a[], int lo, int hi)
{
    struct Pair maxmin;
    if(lo == hi)
    {
        maxmin.max = a[lo];
        maxmin.min = a[lo];
        return maxmin;
    }
    else if(hi == lo+1)
    {
        maxmin.max = max(a[lo], a[hi]);
        maxmin.min = min(a[lo], a[hi]);
    }

    // If more than 2 elements present
    int mid = (lo + hi)/2;
    struct Pair mml = getmaxmin(a, lo, mid);
    struct Pair mmr = getmaxmin(a, mid+1, hi);

    // Compare minimums of two parts
    if (mml.min < mmr.min)
        maxmin.min = mml.min;
    else
        maxmin.min = mmr.min;    
     
    // Compare maximums of two parts
    if (mml.max > mmr.max)
        maxmin.max = mml.max;
    else
        maxmin.max = mmr.max;    
     
    return maxmin;

}

int main()
{
    int arr[] = { 1000, 11, 445,
                  1, 330, 3000 };
    int arr_size = 6;
     
    struct Pair minmax = getmaxmin(arr, 0, arr_size - 1);
                              
    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max;
          
    return 0;
}