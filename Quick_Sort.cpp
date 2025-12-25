#include<bits/stdc++.h>
using namespace std ; 
const int mxo  = 1e5+10 ; 
int ar[mxo] ; 

/* Main motive  
    - > T.c - > O ( N( log n) )
    -> W. C -> N * N - > N^2  

    
    -> Pivot Selection  ( take any element ) 
    -> Pertitioning ( devide by 2 / left side elem <= Pivot / Right side elem > Pivot)
    -> Recursion ( DO the same thing again and again )
*/
int PARTITION(int l , int r) // O( n )
{
    int pivot = ar[r] ; 
    int Pidx = l;

    for(int i = l ; i< r ; i++)
    {
        if(ar[i] <= pivot) {
            swap(ar[Pidx],ar[i]) , Pidx++ ; 
        }
    }
    swap(ar[Pidx] , ar[r]) ; 

    return Pidx ; 
}
void quickSort(int l , int r) // O( log n )
{
    if(l>=r) return ; 

    int pi = PARTITION(l,r) ; 
    quickSort( l , pi-1) ;
    quickSort( pi+1, r) ;
}

int main()
{
    int n , k ; cin>>n ; 
    for(int i= 1 ; i<= n ; i++) cin>>ar[i] ; 
    for(int i= 1 ; i<= n ; i++) cout<<ar[i]<<" ";
    cout<<endl;
     
    quickSort(1,n) ;  // Nlog(n)
    for(int i= 1 ; i<= n ; i++) cout<<ar[i]<<" ";
    cout<<endl; 
    
    return 0 ; 
}