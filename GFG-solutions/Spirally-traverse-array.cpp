#include <iostream>
using namespace std;

 void func(int a, int i, int j, int m, int n)
{
    if(i >= m or j >= n)return   
    for(int p = i; p < n; p++)
        cout << a[i][p] << " ";
    
    for(int p = i + 1; p < m; p++)
        cout << a[p][n-1] << " ";
    
    if(m-1 != i){
        for(int p = n-2 ; p >= j; p--)
            cout << a[m-1][p] << " ";
    }
    if(n-1 != j){
        for(int p = m-2 ; p > i; p--)
            cout << a[p][j] << " ";
    }
    func(a, i+1, j+1, m-1, n-1);
}
int main() {
	int t; cin >> t;
    while(t--)
    {
        int m, n; cin >> m >> n;
        int a[m][n];
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)cin >>a[i][j];
        }
        int i = 0, j = 0;
        func(a, 0, 0, m, n);
       
    }
    return 0;
}


//======================================================================================================================
//======================================================================================================================


#include<iostream>
#include<vector>
using namespace std;

void print_in_spiral(vector<vector<int> > arr,int rowi,int rowf,int coli,int colf){
    if(coli>colf || rowi>rowf)
        return;
    for(int i=coli;i<=colf;i++)
        cout<<arr[rowi][i]<<" ";
    for(int i=rowi+1;i<=rowf;i++)
        cout<<arr[i][colf]<<" ";
    if(rowi!=rowf)
        for(int i=colf-1;i>=coli;i--)
            cout<<arr[rowf][i]<<" ";
    if(coli!=colf)
        for(int i=rowf-1;i>rowi;i--)
            cout<<arr[i][coli]<<" ";
    print_in_spiral(arr,rowi+1,rowf-1,coli+1,colf-1);
}

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int row,col;
	    cin>>row>>col;
	    vector<vector<int> > arr(row,vector<int>(col));
	    for(int j=0;j<row;j++){
	        for(int k=0;k<col;k++)
	            cin>>arr[j][k];
	    }
	    print_in_spiral(arr,0,row-1,0,col-1);
	    cout<<endl;
	}
	
	return 0;
}