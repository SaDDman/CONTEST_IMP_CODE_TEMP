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
#define                 unique(n)                   (n).erase(unique((n).begin(),(n).end()),(n).end());
#define                 mem(a,b)                    memset(a, b, sizeof(a) )
const long long inf = 90000000000000000;
ll test ,cnt = 0 ; 
// // modulo // PBDS // graph_index // rotator // issort? // sum // count


const ll mx = 1e5+12 ; 
ll ar[mx] , br[mx];
ll t[mx*3];
ll query( ll node , ll l , ll r , ll i , ll j )
{
    if(l > j || i > r ) return 0 ; 
    if(i<=l && j>=r ) return t[node] ; 
    ll mid = (l+r)>>1 ;
    ll left = query ( node<<1 , l , mid , i , j );
    ll right = query ( (node<<1)+1 , mid+1 , r , i , j );

    return max(left , right) ;
}
void update( ll node , ll l , ll r , ll i , ll value)
{
    if(l>i || r<i) return; // i = 5 l = 7 && i=5 r = 4
    if(l==i && r==i)
    {
        t[node]=value ; 
        return;
    }
    ll mid = ( l+r )>>1 ; 
    // node<<1 == node*2
    update( node<<1 , l , mid , i , value);
    update( (node<<1)+1 , mid+1, r , i , value);

    t[node] = max(t[node<<1],t[(node<<1)+1]); 
}
void compress( ll n )
{
    ll val = 1 ; 
    map<ll,ll>mp;
    sort(br+1,br+n+1);
    // fr(i,1,n) cout<<br[i]<<" ";
    // cout<<endl;

    fr(i,1,n)
    {
        if(mp[br[i]]>0) br[i]=mp[br[i]];
        else 
        {
            mp[br[i]] = val;
            br[i]=val;
            val++;
        }
    }
    fr(i,1,n)
    {
        ar[i]=mp[ar[i]];
    }
}
void solve()
{
    ll n; 
    cin>>n;
    fr(i,1,n) 
    {
        cin>>ar[i];
        br[i]=ar[i];
    }
    compress(n);
    // fr(i,1,n) 
    // {
    //     cout<<ar[i]<<" ";
    // }
    // cout<<endl;
    ll total = 0 ; 
    ll mxo = 0; 
    fr(i,1,n)
    {
        ll getmax = 1+query(1,1,n,1,ar[i]-1);
        // cout<<getmax<<endl;
        mxo=max(mxo,getmax);
        update(1,1,n,ar[i],getmax);
    }
    cout<<mxo<<endl;
    mem(t,0);
}


int main()
{
    speed 

    ll  c = 1;
    cin >> test;
    cnt = 0 ;
    for(ll tc = 1 ; tc<= test ; tc++ )
    {
        cnt++ ;
        // cin.ignore();
        // cout << "Case " << c++ << ": ";
        solve();
    }
    return 0 ; 
}