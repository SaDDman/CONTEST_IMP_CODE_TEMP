                                             /*In the name of Almighty Allah*/




#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree< long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update > ordered_set; 
typedef tree< long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update > ordered_mset;  //x.order_of_key(xx)
#define                 endl                        '\n'
#define                 speed                       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define                 YES                         cout<<"YES"<<endl;
#define                 Yes                         cout<<"Yes"<<endl;
#define                 yes                         cout<<"yes"<<endl;
#define                 NO                          cout<<"NO"<<endl;
#define                 no                          cout<<"no"<<endl;
#define                 No                          cout<<"No"<<endl;
#define                 ll                          long long
#define                 ull                         unsigned long long
#define                 frac(a)                     cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);//frac(4); cout<<a; 1.1234
#define                 f(i,pp,n)                   for(ll (i) = pp; i <n; i++)
#define                 fr(i,pp,n)                  for(ll (i) = pp; i <=n; i++)
#define                 ita                         vector<int>::iterator it; for(it=v.begin();it!=v.end();it++) { cout<<*it<<" "; } cout<<endl;
#define                 ita2(n)                     for(auto pri : (n)) { cout<<pri<<" " ;} cout<<endl;
#define                 ita2d(n)                    for( auto u : (n)){ for(auto x : u) { cout<<x<<" "; } cout<<endl;} // for( ll i = 0 ; i<vectorsize; i++) { for( ll j = 0 ; j< v[i].size() ; j++) { cout << v[i][j]<<" "; }  cout<<endl; }
#define                 ita3(n)                     for(auto pri : (n)) { cout<<pri.first<<" "<<pri.second<<endl; }
#define                 vsort(n)                    sort(n.begin(),n.end()); 
#define                 prque                       while(!q.empty()){ cout<<q.top().first<<" "<<q.top().second<<endl; q.pop(); }
#define                 nrque                       while(!q.empty()) { cout<<q.top()<<endl; q.pop();}
#define                 ct(print)                   cout<<(print)<<endl;
#define                 MOD                         1000000007
#define                 bug                         cout<<"ekane asche"<<endl;
#define                 testcases                   ll t; cin >> t; while (t--) 
ll gcd(ll a, ll b)                      { if (b == 0) return a;       return gcd(b, a%b );  }
ll lcm(ll a, ll b)                      {  return ((a*b) / gcd(a, b)) ; }
ll power(ll base, ll power,ll mod)      {ll res=1;while(power){if(power%2==1){res=(res*base)%mod;power-=1;}else{base=(base*base)%mod;power/=2;}}return res;} ////0(log2(p)) 
void normal(ll &a)                      { a %= MOD; (a < 0) && (a += MOD); }
ll modAdd(ll a, ll b)                   { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
ll modSub(ll a, ll b)                   { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
ll modMul(ll a, ll b, ll mod)           { a %= mod, b %= mod; normal(a), normal(b); return (a*b)%mod; }
ll modInverse(ll b , ll mod)            {return  (power(b,mod-2,mod)) % mod ;}
ll moddiv(ll a , ll b , ll mod)         {return modMul(a,modInverse( b , mod),mod);}// ll ans = ((a % M )* power(b,M-2,M))% M ;// return ans ;



subarray ->(n*(n+1))/2
subset -> 2^n
subsequence -> 2^n


// Topic-all posible subsets
// Topic-To calculate ncr by formula 
// Topic-To calculate ncr by recurtion 
// Topic - calculate per box can generate  how many unique strings 

/*
    subset->
    123456
    1
    2 
    3
    12
    13
    14
    124
    125
    126
    ext
    zekono vabe banano jai sub set e order maintain kra lage na 
*/

//      0110 (decimal 6)
//  AND 1011 (decimal 11)
//   =  0010 (decimal 2)
// all posible subsets using bit 
int main()
{
     // Time Complexity : O(N*2^(N))
        int n;// n=3 -> 2^3 = 8
// 1
// 2 
// 1 2 
// 3 
// 1 3 
// 2 3 
// 1 2 3
        cin>>n;
        vector<ll>nums(n);
        f(i,0,n)
        {
            cin>>nums[i];
        }
        vector<vector<int>>ans;
        for(int i=0;i<(1<<n);i++)
        {   
            vector<int>v;
            for(int j=0;j<n;j++)
            {   
                if((1<<j)&i) 
                    v.push_back(nums[j]); 
            }
            ans.push_back(v);
        }
        ita2d(ans);
}



n
 c - > n!/(n-r)! ->
  r 



how 5 student arrange to sit in 2 sits?
is nothing but 5p2 
in 5p2 every 2person arrange to sit in 2! those are also are one combination 

students -> a b c d e 
sit -> _ _ 

all combination are -> ab ac ad ae bc bd be cd ce dc
                       ba ca da ea cb db eb dc ec cd 

thats mean total npr -> 5p2 combinations = 5!/(5-2)! = 20
but every 2 person  arrange to sit in 2! if those r one combination then 
the ans will be ncr -> 5p2 / 2! = 10 

without arrangement is combination 
with arrangement is permutation



ASSASSINATION ->3A 4S 2I 2N
1. total fec - > 13! /(3! 4! 2! 2!)  
2. starts with O , 12!/ (3! 4! 2! 2!) -> O->ASSASSINATION
3. starts with S , 12!/ (3! 3! 2! 2!) -> S->ASASSINATION
3. ends with A , 12!/ (2! 4! 2! 2!) -> SSASSINATION->A
4. starts with A and ends with N -> 11!/ (2! 4! 2! 1!) -> A->SSASSINATIO->N
5. starts with A or ends with N -> starts with A + ends with N - starts with A and ends with N
        12!/ (2! 4! 2! 2!) -> A<-SSASSINATION  +  
        12!/ (3! 4! 2! 1!) -> ASSASSINATIO->N -
        11!/ (2! 4! 2! 1!) -> A->SSASSINATIO->N
        cause in summation starts with a and ends with n can be repeat 
6. vowels together AAAIIO ,
    without vowels ssssntn total 7, 7+1 = 8 here 1 is vowel part &
    they are not in fixed position thats why addition  
    8!/(4!2!) * 6!/(3!2!)

DIGITS

## 4 DIgit even number greater then 4000
1,2,4,5,7,9

 | 4,5,7,9 |  |  | 2,4 | 
 after write down 2 dig we have 6-2 = 4 number 

  | 4,5,7,9 | 4 | 3 | 2,4 | 

but if we write last digit 2 then we can take all those 4,5,7,9 number in 1st digits 
but if we take 4 in last digits then we can take 5,7,9 numbers in 1st digits 
so the solution will be 
    | 4,5,7,9 | 4 | 3 | 2 |  + | 5,7,9 | 4 | 3 | 4 | 

    ans-> 4* 4p2 + 3* 4p2

same exmple->  4 DIgit even number greater then 2000 using 1,2,4,5,7,9

 | 2,4,5,7,9 |   |   | 2,4 | 
 | 2,4,5,7,9 | 4 | 3 | 2,4 | 
 ans-> 4*4p2*2 -> 4 because if we either use 2 or 4 in last digit both r in 1st digit thats why we take 4*
 




Topic- To calculate ncr by formula 
real formula -> ncr = n! / r! * (n-r)! ; 

7c3 -> 7*6*5 / 6 
-> this works like this 
7 * 6 * 5 * 4                            7 * 6 * 5      n * (n-1) * (n-2)     n to n-(r-1)
----------------- === 4 & 4 kati gele = ------------ == -----------------= ----------------- 
4! * (1 * 2 * 3)                         1 * 2 * 3          r!                      r!

3c2 -> 3 to 3-(3-2) / 2! = 3*2*1 / 2 


Topic-To calculate ncr by recurtion 
ll nCr(ll n, ll r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

Topic - counting sub sequence by bitmask

A,B,C 
A ,B , C , AB , BC , AC , ABC 

Number of subsequence is (2^n)-1 

Binary of 0 to 7- >

000 - 
001 - C
010 - B
011 - B ,C     -> Complexity ( 2^n  - 1 ) * n - here n is length of string & 2^n -1 is total subsequence 
100 - A
101 - A , C
110 - A, B
111 - A, B ,C 
int main()
{
   int n ;
   cin>>n ; 
 
   f(i,0,(1<<n)-1) // total subsequence
   {
      string bits ;
      f(j,0,n) // bits 3 - > 0 0 0 <- size not binary 
      {
         if(i&(1<<j)) bits+='1'; // i prottek bit er shate & kre oi bit er man 1 anar try kre 
         else bits+='0';

         bits+=" ";
      }
      reverse(bits.begin(),bits.end());
      cout<<i<<" -> "<<bits<<endl;
   }

   return 0 ;
}

      2^2= 4  2^1= 2  2^0= 1
-----------------------------------
0 ->       0       0       0
1 ->       0       0       1   - > 1&1
2 ->       0       1       0   - > 2&2
3 ->       0       1       1   - > 3&(2^0) , 3&(2^1) 
4 ->       1       0       0   - > 4&(2^2)
5 ->       1       0       1   - > 5&(2^0) ,5&(2^2) 
6 ->       1       1       0   - > 6&(2^1) , 6&(2^2) 




j bit e 1 pacci oi bit er man vec theke ni all kind of 
combination easily banate paro



// Topic - calculate per box can generate  how many unique strings 

if we have to generate string by only 2 char example - > 7 and 8 then 
every digit have 2 posibilities 

if length is 2 then 
2 2  which is 4 output 
if length is 4 then 
2 2 2 2 which is 16 output 
- - - - 

so we can jst simply get the all (1<<i) till n(size of string) 
ll sum = 0 ;
fr(i,1,n)
{                        // 2 4 8 16     
    sum+=(1ll<<i); // for 4 - - - - 
}