                                             /*In the name of Almighty Allah*/
#include<bits/stdc++.h>
using namespace std;

#define                 endl                        '\n'
#define                 C(a)                        cout<<(a)<<endl;
#define                 ll                          long long
#define                 frac(a)                     cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);//frac(4); cout<<a; 1.1234
#define                 f(i,pp,n)                   for(ll (i) = pp; i <n; i++)
#define                 rf(i,pp,n)                  for(ll (i) = pp; i >=n; i--)
#define                 fr(i,pp,n)                  for(ll (i) = pp; i <=n; i++)
#define                 ita2(n)                     for(auto pri : (n)) { cout<<pri<<" " ;} cout<<endl;
#define                 ita3(n)                     for(auto pri : (n)) { cout<<pri.first<<" "<<pri.second<<endl; }
#define                 vsort(n)                    sort(n.begin(),n.end()); 
#define                 vrsort(n)                   sort(n.begin(),n.end(),greater <> ()); 
#define                 MOD                         1000000007
#define                 bug                         cout<<"ekane asche"<<endl;
#define                 unique(n)                   (n).erase(unique((n).begin(),(n).end()),(n).end());
const long long inf = 90000000000000000;
ll test ,COUNT = 0 ; 
// // modulo // PBDS // graph_index // rotator // issort? // sum // count //SUBSTR //CMP






/*
Topic - Taking maximum number to make sum 
Topic - Taking minimum number to make sum 



*/


//  Topic - Taking maximum number to make sum 
long long n , a,b,c,q, m ,k; 
long long dp[4][4004];
long long ok(vector<long long>&v , long long i, long long sum )
{
    if(i==v.size()) return LONG_LONG_MIN ; 
    if(sum<0) return LONG_LONG_MIN;
    if(sum==0) return 0 ; 
    if(dp[i][sum]!=-1) return dp[i][sum];
    ll take = 1+ok(v,i,sum-v[i]);
    ll nottake = ok(v,i+1,sum);
 
    return dp[i][sum] = max<long long>(take,nottake) ; 
}
//or 

long long ok(vector<long long>&v , long long sum )
{
    if(sum<0) return LONG_LONG_MIN;
 
    if(sum==0) return 0 ; 
    if(dp[sum]!=-1) return dp[sum];
    ll mx = LONG_LONG_MIN ; 
    ll take = 0 ; 
    for(ll j = 0 ; j< v.size() ; j++ )
    {
        take = 1+ok(v,sum-v[j]);
        mx = max<ll>(mx, take);
    }
    return dp[sum]=mx ; 
}


// or ,
long long dp[4004][3];
long long ok(vector<long long>&v , long long sum , ll i )
{
    if(sum<0) return LONG_LONG_MIN;
 
    if(sum==0) return 0 ; 
    if(dp[sum][i]!=-1) return dp[sum][i];
    ll mx = LONG_LONG_MIN ; 
    ll take = 0 ; 
    for(ll j = i ; j< v.size() ; j++ )
    {
        take = 1+ok(v,sum-v[j],0);
        mx = max<ll>(mx, take);
    }
    return dp[sum][i]=mx ; 
}


// Topic - Taking minimum number to make sum 

int N , m ;
vector<int>v;
int dp[10001];
int solve(int n,int i)
{
    if(n==0) return 0 ; 
    if(n<0) return 1e9; 
    if(i==v.size()) return 1e9; 
    if(dp[n]!=-1) return dp[n];

    int take = 1+solve(n-v[i],i);
    int nottake = solve(n,i+1);

    return dp[n]=min(take,nottake) ; 
}


// or , 
int N , m ;
vector<int>v;
int dp[10001];
int solve(int n)
{
    if(n<0) return N; 
    if(n==0) return 0 ; 
    if(dp[n]!=-1) return dp[n];
    int mn = INT_MAX ;
    for(int i =0 ; i< v.size() ; i++ )
    {
        int res = 1+solve(n-v[i]);
        mn = min(res,mn);
    }

    return dp[n] = mn ; 
}