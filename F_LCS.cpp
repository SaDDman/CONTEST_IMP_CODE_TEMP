/*In the name of Almighty Allah*/
#include<bits/stdc++.h>
using namespace std;

#define                 endl                        '\n'
#define                 speed                       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define                 YES                         cout<<"YES"<<endl;
#define                 Yes                         cout<<"Yes"<<endl;
#define                 yes                         cout<<"yes"<<endl;
#define                 NO                          cout<<"NO"<<endl;
#define                 no                          cout<<"no"<<endl;
#define                 No                          cout<<"No"<<endl;
#define                 ll                          long long
#define                 frac(a)                     cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);//frac(4); cout<<a; 1.1234
#define                 f(i,pp,n)                   for(ll (i) = pp; i <n; i++)
#define                 rf(i,pp,n)                  for(ll (i) = pp; i >=n; i--)
#define                 fr(i,pp,n)                  for(ll (i) = pp; i <=n; i++)
#define                 ita                         vector<int>::iterator it; for(it=v.begin();it!=v.end();it++) { cout<<*it<<" "; } cout<<endl;
#define                 ita2(n)                     for(auto pri : (n)) { cout<<pri<<" " ;} cout<<endl;
#define                 ita2d(n)                    for( auto u : (n)){ for(auto x : u) { cout<<x<<" "; } cout<<endl;} // for( ll i = 0 ; i<vectorsize; i++) { for( ll j = 0 ; j< v[i].size() ; j++) { cout << v[i][j]<<" "; }  cout<<endl; }
#define                 ita3(n)                     for(auto pri : (n)) { cout<<pri.first<<" "<<pri.second<<endl; }
#define                 vsort(n)                    sort(n.begin(),n.end()); 
#define                 vrsort(n)                   sort(n.begin(),n.end(),greater <> ()); 
#define                 MOD                         1000000007
#define                 bug                         cout<<"ekane asche"<<endl;
#define                 testcases                   ll t; cin >> t; while (t--) 
#define                 unique(n)                   👎.erase(unique(👎.begin(),(n).end()),(n).end());
#define                 mem(a,b)                    memset(a, b, sizeof(a) )
const int inf = 2000000000;
ll test ,cnt = 0 ; 
// modulo // PBDS // graph_index


int dp[3010][3010];
int ok ( int idx1 , int idx2 , string &a , string &b)
{
    if(idx1==a.size() || idx2==b.size()) return 0 ; 

    if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];

    int mxo = (a[idx1]==b[idx2])+ ok(idx1+1,idx2+1 , a , b );
    mxo = max(mxo,ok(idx1+1,idx2,a,b));
    mxo = max(mxo,ok(idx1,idx2+1,a,b));

    return dp[idx1][idx2] = mxo;
}
// int ok ( int idx1 , int idx2 , string &a , string &b)
// {
//     if(idx1==a.size() || idx2==b.size()) return 0 ; 

//     if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];

//     int ans = ok ( idx1+1 , idx2 , a , b) ; 
//     ans = max( ans,ok ( idx1 , idx2+1 , a , b) ) ;
//     ans = max(ans, ok ( idx1+1 , idx2+1 , a , b) + (a[idx1]==b[idx2]) );

//     return dp[idx1][idx2] = ans ;
// }
void solve()
{
    string a , b ; 
    cin>>a;
    cin>>b ; 

    mem(dp,-1);
    ll ans =  ok(0 , 0,a , b );
    ll l = 0, r = 0;
    
    int i = 0 , j =  0;
    string anss ; 
    while(i<a.size() && j<b.size())
    {
        if(a[i]==b[j]) anss+=a[i], i++, j++;//,cout<<i<<j<<" ";
        else if(dp[i+1][j]>dp[i][j+1]) i++;
        else j++;
            // cout<<i<<j<<" ";

    }
    // reverse(anss.begin(),anss.end());
    cout<<anss<<endl;
}   











int main()
{
    speed 
    
    solve();
 
    return 0 ; 
}
