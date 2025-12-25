#include<bits/stdc++.h>
using namespace std ; 

const int mxo  = 1e5+10 ; 
int ar[mxo] ;  // S.C. O( n ) // cause merge e array nici


/* Main motive 
    -> devide the array by 2 
    -> in the end MERGE 
*/
void merge(int l , int r , int m)
{
    int sz1 = m-l+1 ; // l to mid 
    int sz2 = r-(m+1)+1  ;  // mid to R 

    int L[sz1] , R[sz2] ; 

    int k =  l ;
    for(int i = 0 ; i<sz1 ; i++) L[i] = ar[k] , k++;  // fill L 

    for(int i = 0 ; i<sz1 ; i++) R[i] = ar[k] , k++; // fill R 
    

    int i = 0 , j = 0 ; k = l ; 

    while(i<sz1 && j<sz2) // get the value which one is small 
    {
        if(L[i] <= R[j])ar[k] = L[i] ,  i++;
        else ar[k] = R[j] ,  j++;
        k++;        
    }

    while(i<sz1) ar[k] = L[i] , i++ , k++ ; 
    while(j<sz2) ar[k] = R[j] , j++ , k++ ; 
}

void mergesort( int l , int r ) // O( N Log(n) ) T. C.
{
    if(l>=r) return ; 

    int mid = ( l + r ) / 2 ; 

    mergesort(l,mid) ; 
    mergesort(mid+1 , r) ;  
    merge(l , r , mid) ; 
}
int main()
{
    int n , k ; cin>>n ; 
    for(int i= 1 ; i<= n ; i++) cin>>ar[i] ; 
    for(int i= 1 ; i<= n ; i++) cout<<ar[i]<<" ";
    cout<<endl;
    
    mergesort(1,n) ; 
    for(int i= 1 ; i<= n ; i++) cout<<ar[i]<<" ";
    cout<<endl; 

}