#include<bits/stdc++.h>
using namespace std ; 
const int mxo  = 1e5+10 ; 
int ar[mxo] ; 
                        // S.C -> O( 1 )
void insertionSort(int n) // Worst T.C -> O ( n * n) // O( n^2)
{                      // Best T.C. -> O( n )
    for(int i = 1 ; i< n ; i++ )
    {
        int j = i-1 , tmp = ar[i];  
        while(j>=0)
        {
            if(ar[j] > tmp) ar[j+1] = ar[j] ; 
            else break ; 
            j--;
        }
        ar[j+1] = tmp ; 
    }
}
int main()
{
    int n , k ; cin>>n ; 
    for(int i= 0 ; i<n; i++) cin>>ar[i] ; 
    for(int i= 0; i<n; i++) cout<<ar[i]<<" ";
    cout<<endl;
    
    
    insertionSort(n) ; 
    for(int i=0 ; i<n ; i++) cout<<ar[i]<<" ";
    cout<<endl; 
    
    return 0 ; 
}