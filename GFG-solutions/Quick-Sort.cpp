#include <bits/stdc++.h> 
using namespace std;  
  
int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high], i = low, j = high-1;
    while(i<=j)
    {
        if(arr[j] >= pivot)j--;
        else if(arr[i] <= pivot)i++;
        else{  swap(arr[i], arr[j]); 
                i++, j--;  
            }
    }
    j++;
    swap(arr[j], arr[high]);
    return j;  
}  

void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        int pi = partition(arr, low, high);  
    // Separately sort elements before  
    // partition and after partition  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}   
// Driver Code 
int main()  
{  
    int n; cin >> n;
    int arr[n];  
    for (int i = 0; i < n; i++)  
        cin >> arr[i];
     
    quickSort(arr, 0, n - 1);  
    for (int i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    return 0;  
}  

