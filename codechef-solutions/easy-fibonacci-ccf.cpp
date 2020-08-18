#include <iostream>
#include <math.h>
using namespace std;
int fibcry[70]={0, 1, 1, 2, 3, 5, 8, 3, 1, 4, 5, 9, 4, 3, 7, 0, 7, 7, 4, 1, 5, 6, 1, 7, 8, 5, 3, 8, 1, 9, 0, 9, 9, 8, 7, 5, 2, 7, 9, 6, 5, 1, 6, 7, 3, 0, 3, 3, 6, 9, 5, 4, 9, 3, 2, 5, 7, 2, 9, 1};
int main()
{
	long long T,N,K=0;
cin >> T;
for (int i=0 ;i<T ;i++){
    cin>>N;
    K=-1;
    while (N){
        K++;
        N =N>>1;
    }
    K=pow(2,K);
    K=K%60;
    if (K==0){
        K=60;
    }
    cout<<fibcry[K-1]<<endl;
}
return 0;
}