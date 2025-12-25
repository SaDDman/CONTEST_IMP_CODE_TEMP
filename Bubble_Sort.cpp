#include<bits/stdc++.h>
using namespace std ; 
const int mxo  = 1e5+10 ; 
int ar[mxo] ; 
                        // S.C -> O( 1 )
void bubbleSort(int n) // Worst T.C -> O ( n * n) // O( n^2)
{                      // Best T.C. -> O( n )
    for(int i = 1 ; i< n ; i++)
    {
        bool flag = false ; 
        for(int j = 0 ; j< n-i ; j++) // every time biggest value goes last n-i  
        {
            if(ar[j] > ar[j+1]) swap(ar[j] , ar[j+1]) , flag = true ; 
        }
        if(flag==false) break ; 
    }
}
int main()
{
    int n , k ; cin>>n ; 
    for(int i= 0 ; i<n; i++) cin>>ar[i] ; 
    for(int i= 0; i<n; i++) cout<<ar[i]<<" ";
    cout<<endl;
    
    
    bubbleSort(n) ; 
    for(int i=0 ; i<n ; i++) cout<<ar[i]<<" ";
    cout<<endl; 
    
    return 0 ; 
}