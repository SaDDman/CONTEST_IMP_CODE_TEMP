#include<bits/stdc++.h>
using namespace std;
#define                 ll                          long long
#define                 f(i,pp,n)                   for(ll (i) = pp; i <n; i++)
#define                 rf(i,pp,n)                  for(ll (i) = pp; i >=n; i--)
#define                 fr(i,pp,n)                  for(ll (i) = pp; i <=n; i++)
#define                 mem(a,b)                    memset(a, b, sizeof(a) )

// Topic - All in One (Both can be done set & increse)

struct update
{
    ll setval ; 
    ll increment ; 
    update()
    {
        setval = -1 ; 
        increment = 0 ; 
    }
    update(ll setval , ll increment)
    {
        this->setval = setval ; 
        this->increment = increment ; 
    }
    bool operator ==(const update& other)const {
        return setval== other.setval && increment == other.increment; 
    }
};
template<class T, class U>
// T -> node, U->update.

struct SEGMENTTREE
{
    vector<T>st;
    vector<U>lazy;
    ll n;
    T identity_element;
    U identity_update;
    SEGMENTTREE(ll n, T identity_element, U identity_update)
    {
        this->n = n;
        this->identity_element = identity_element;
        this->identity_update = identity_update;
        st.assign(4*n,identity_element);
        lazy.assign(4*n, identity_update);
    }
    T combine(T l, T r)
    {
        // change this function as required.
        T ans = (l + r); // just change it and see the magic 
        return ans;
    }
    void buildUtil(ll v, ll tl, ll tr, vector<T>&a)
    {
        if(tl == tr)
        {
            st[v] = a[tl];
            return;
        }
        ll tm = (tl + tr)>>1;
        buildUtil(2*v + 1, tl, tm,a);
        buildUtil(2*v + 2,tm+1,tr,a);
        st[v] = combine(st[2*v + 1], st[2*v + 2]);
    }
    // change the following 2 functions, and you're more or less done.
    T apply(T curr, U upd, ll tl, ll tr)
    {
        // T ans = (tr-tl+1)*upd;
        T ans ; 
        ans = curr ; 
        if(upd.setval != -1)
        {
            ans =(tr - tl +1)*(upd.setval+upd.increment);
            // ans =upd.setval;  // open this when you need the max or else use upone 
        }
        else ans  += (tr - tl +1)*upd.increment;
        return ans;
    }
    U combineUpdate(U old_upd, U new_upd, ll tl, ll tr)
    {
        U ans ;
        if(new_upd.setval == -1)
        {
            ans = old_upd;
            ans.increment+=new_upd.increment ; 
        }
        else ans  = new_upd ; 
        return ans;
    }  
    void push_down(ll v, ll tl, ll tr)
    {
        if(lazy[v] == identity_update) return;
        st[v] = apply(st[v], lazy[v], tl, tr);
        if(2*v + 2 < 4*n)
        {
            ll tm = (tl + tr)>>1;
            lazy[2*v + 1] = combineUpdate(lazy[2*v+1], lazy[v], tl, tm);
            lazy[2*v + 2] = combineUpdate(lazy[2*v+2], lazy[v], tm+1,tr);            
        }
        lazy[v] = identity_update;
    }

    T queryUtil(ll v, ll tl, ll tr, ll l, ll r)
    {
        push_down(v,tl,tr);
        if(l > r)return identity_element;
        if(tr < l or tl > r)
        {
            return identity_element;
        }
        if(l <= tl and r >= tr)
        {
            return st[v];
        }
        ll tm = (tl + tr)>>1;
        return combine(queryUtil(2*v+1,tl,tm,l,r), queryUtil(2*v+2,tm+1,tr,l,r));
    }
 
    void updateUtil(ll v, ll tl, ll tr, ll l, ll r, U upd)
    {
        push_down(v,tl,tr); 
        if(tr < l or tl > r)return;
        if(tl >=l and tr <=r)
        {
            lazy[v] = combineUpdate(lazy[v],upd,tl,tr);
            push_down(v,tl,tr);
        }
        else
        {
            ll tm = (tl + tr)>>1;
            updateUtil(2*v+1,tl,tm,l,r,upd);
            updateUtil(2*v+2,tm+1,tr,l,r,upd);
            st[v] = combine(st[2*v + 1], st[2*v+2]);
        }
    }

    void build(vector<T>a)
    {
        assert(a.size() == n);
        buildUtil(0,0,n-1,a);
    }

    T query(ll l, ll r)
    {
        return queryUtil(0,0,n-1,l,r);
    }

    void update(ll l,ll r, U upd)
    {
        updateUtil(0,0,n-1,l,r,upd);
    }
};

void solve()
{
    /*
        shb gula kra jabe templete combine 
        function k +,-,gcd,^ ,min,max diye 
        proyojon mtw change kre 
        But jkn max bair krbo tkn apply function e 
        jeta on krte bolse oita on kre er uporer ta off kredite hbe 
        na paile eta ->
            // open this when you need the max or else use upone
        ctrl+d mar

        MIN bair krar somoi ekane 
        SEGMENTTREE<ll,update>st(n+1,0,idupd);  0 chg kre 
        SEGMENTTREE<ll,update>st(n+1,inf,idupd); inf hbe 
    */
    ll n , q ; 
    cin>>n>>q;
    vector<ll>v(n+1,0) ; 
    fr(i,1,n) cin>>v[i];
    update idupd(-1,0) ; 
    SEGMENTTREE<ll,update>st(n+1,0,idupd); // AND bair krar somoi 0 er jaigai -1 hbe 
    st.build(v);
    
    while(q--)
    {
        ll typ ; 
        cin>>typ ; 
        if(typ==1)
        {
            ll L ,R ,val ; cin>>L>>R>>val;
            update upd(-1,val); // for set x 
            st.update(L,R,upd);
        }
        else if(typ == 2)
        {
            ll L , R,val; cin>>L>>R>>val; 
            update upd(val,0); // for increse x 
            st.update(L,R,upd);
        }
        else 
        {
            ll L , R; cin>>L>>R; 
           cout<<st.query(L,R)<<endl;
        }
    }
 
}
int main()
{
    solve();
}

// Topic - All in one ( just increse worked , set not worked )
template<class T, class U>
// T -> node, U->update.
struct Lsegtree{
    vector<T>st;
    vector<U>lazy;
    ll n;
    T identity_element;
    U identity_update;
    Lsegtree(ll n, T identity_element, U identity_update)
    {
        this->n = n;
        this->identity_element = identity_element;
        this->identity_update = identity_update;
        st.assign(4*n,identity_element);
        lazy.assign(4*n, identity_update);
    }
    T combine(T l, T r)
    {
        // change this function as required.
        T ans = (l + r);
        return ans;
    }
    void buildUtil(ll v, ll tl, ll tr, vector<T>&a)
    {
        if(tl == tr)
        {
            st[v] = a[tl];
            return;
        }
        ll tm = (tl + tr)>>1;
        buildUtil(2*v + 1, tl, tm,a);
        buildUtil(2*v + 2,tm+1,tr,a);
        st[v] = combine(st[2*v + 1], st[2*v + 2]);
    }
    // change the following 2 functions, and you're more or less done.
    T apply(T curr, U upd, ll tl, ll tr)
    {
        T ans = (tr-tl+1)*upd;
        return ans;
    }
    U combineUpdate(U old_upd, U new_upd, ll tl, ll tr)
    {
        U ans = old_upd;
        ans=new_upd;
        return ans;
    }  
    void push_down(ll v, ll tl, ll tr)
    {
        if(lazy[v] == identity_update)return;
        st[v] = apply(st[v], lazy[v], tl, tr);
        if(2*v + 2 < 4*n)
        {
            ll tm = (tl + tr)>>1;
            lazy[2*v + 1] = combineUpdate(lazy[2*v+1], lazy[v], tl, tm);
            lazy[2*v + 2] = combineUpdate(lazy[2*v+2], lazy[v], tm+1,tr);            
        }
        lazy[v] = identity_update;
    }
    T queryUtil(ll v, ll tl, ll tr, ll l, ll r)
    {
        push_down(v,tl,tr);
        if(l > r)return identity_element;
        if(tr < l or tl > r)
        {
            return identity_element;
        }
        if(l <= tl and r >= tr)
        {
            return st[v];
        }
        ll tm = (tl + tr)>>1;
        return combine(queryUtil(2*v+1,tl,tm,l,r), queryUtil(2*v+2,tm+1,tr,l,r));
    }
 
    void updateUtil(ll v, ll tl, ll tr, ll l, ll r, U upd)
    {
        push_down(v,tl,tr); 
        if(tr < l or tl > r)return;
        if(tl >=l and tr <=r)
        {
            lazy[v] = combineUpdate(lazy[v],upd,tl,tr);
            push_down(v,tl,tr);
        }
        else
        {
            ll tm = (tl + tr)>>1;
            updateUtil(2*v+1,tl,tm,l,r,upd);
            updateUtil(2*v+2,tm+1,tr,l,r,upd);
            st[v] = combine(st[2*v + 1], st[2*v+2]);
        }
    }
 
 
 
    void build(vector<T>a)
    {
        assert(a.size() == n);
        buildUtil(0,0,n-1,a);
    }
    T query(ll l, ll r)
    {
        return queryUtil(0,0,n-1,l,r);
    }
    void update(ll l,ll r, U upd)
    {
        updateUtil(0,0,n-1,l,r,upd);
    }
};
 
void solve()
{
    ll n , q ; 
    cin>>n>>q;
    vector<ll>v(n+1,0) ; 
    fr(i,1,n) cin>>v[i];

    Lsegtree<ll,ll>st(n+1,0,-1); // AND bair krar somoi 0 er jaigai -1 hbe 
    st.build(v);
 
    while(q--)
    {
        ll typ ; 
        cin>>typ ; 
        if(typ==1)
        {
            ll k , u ; cin>>k>>u;
            st.update(k,k,u); // increseed 
        }
        else 
        {
            ll L , R ; cin>>L>>R; 
            cout<<st.query(L,R)<<endl; // get the sum 
        }
    }
 
}
 
 
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    solve();
 
    return 0 ; 
}
/*
TOPIC - In a array all possible incresing subsequence . 
TOPIC- Longest incresing subsequence 
Topic - Lazy_Propagation 
*/
/*
VALUE   2 3 5 1 10 11 8 9 
IDX     1 2 3 4  5  6 7 8
        --------|--------
        |L              |R
    2 3 5 1         10 11 8 9
    1 2 3 4         5   6 7 8
    __________     ___________
   |L       R|     |L        R|        L =MID*2 
   2,3      5,1    10 11      8 9      R = MID*2+1
   1,2      3,4     5,6       7,8    IDX
   _____    ____    _____     _____
  L|  R|   L|  R|  |L    |R   |L   |R
  2   3    5   1  10    11    8   9  
  1   2    3   4   5     6    7   8  IDX


  49 11 38 5 6 21 17 2 3 5   1 10 11  8  9
  1   2 3  4 5 6  7  8 9 10 11 12 13 14 15

*/
const ll mx = 2e5+134;

ll t[mx*3] , ar[mx];
void init( ll node , ll l , ll r) //LOG(N)
{
    if(l == r ) 
    {
        t[node]=ar[l]; // ekan theke 1
        return; 
    }
    ll mid = (l+r)>>1; // divide by 2 
    init (node*2 , l , mid); // ekane asbe 2 // left 
    init (node*2+1 , mid+1 , r); // then ekane 3 // right 

    t[node] = t[node*2] + t[node*2+1]; // then ekane ashi filled hbe 4
    // for min t[node]= min (,) ; 
}
ll query( ll node , ll l , ll r , ll i , ll j ) //LOG(N)
{
    // cout<<"ekn ekane"<<node<<" "<<l<<" "<<r<<endl;
    if(l > j || i > r )
    {
        // cout<<"OUT of range"<<node<<" "<<l<<" "<<r<<endl;
        // cout<<"return 0"<<endl;
        return 0; /// 3 4 .. 7 if( l == 8 > 7(j) ) // r = 2 < 3(i)// range er baire 
        // return inf ; for min 
    }
    if(i<=l && j>=r ) 
    {
        // cout<<"In Range"<<node<<" "<<l<<" "<<r<<" "<<t[node]<<endl;
        return t[node]; // range er vitore porle 
    }
    ll mid = (l+r)>>1 ;
    ll left = query ( node<<1 , l , mid , i , j );
    ll right = query ( (node<<1)+1 , mid+1 , r , i , j );

    // cout<<left<< " "<<right<<" "<<left+right<<endl; // in range theke ekane asbe 
    return left + right ;
}
void update( ll node , ll l , ll r , ll i , ll value)//log(n)
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

    t[node] = t[node<<1] + t[(node<<1)+1]; 
}
void compress( ll n )
{
    ll val = 1 ; 
    map<ll,ll>mp;

}
int main()
{
    ll n; 
    cin>>n;
    fr(i,1,n) cin>>ar[i];
    init(1,1,n);
    fr(i,1,15) cout<<t[i]<<" ";
    cout<<endl;
    cout<<query ( 1 ,1 , n , 3, 7 )<<endl;
    update(1,1,n,5,3);
    fr(i,1,15) cout<<t[i]<<" ";
    cout<<endl;
    ll sum = query ( 1 ,1 , n , 3, 7 );
    cout<<sum<<endl;

}



// TOPIC - In a array all possible incresing subsequence .
/*
    array[ ] = { 10 , 23 , 25 , 25 , 30};
    after compress -> 
    array[ ] = {  1 ,  2 ,  3 ,  3 ,  4 };

    # ar[i] element shbr lst e boshale koita 
      increasing seq pauua jai ? 

    for 1 -> {1}; .....1 ->1ta 
    for 2 -> {1,2} ,{2}; ..1 .. 2 ->2ta
    for 3 -> {1,2,3},{1,3} ,{2,3},{3}; .. 1..2..3 ->4ta
    for 3 -> {1,2,3},{1,3} ,{2,3},{3}; .. 1..2..3 ->4ta
    for 4 -> {1,2,3,3,4}........ ..    1..2..3...4 ->12ta 
    last e boshale jotota pauua jabe seta +1 ; 

    array[ ]  = {  1 ,  2 ,  3 ,  3 ,  4 };
incresing seq =   1 ,  2  , 4 ,  4 , 12  // t[node]+=value hoise cause seq e 3 number index e 2 ta  4 add hoise jar jnno 8 asche 
IN segment_tree = 1 , 2 , 8 , 12 = total_sum = 23 
                      idx-3
*/  
/*
    EDIT- in query return (left + right)%MOD  ;
          in query t[node]+=value ;
          in update t[node] = (t[node<<1] + t[(node<<1)+1])%MOD; 
*/
ll ar[mx],br[mx];
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
    ll total = 0 ; 
    fr(i,1,n)
    {
        ll sum = 1 + query(1,1,n,1,ar[i]-1);
        update(1,1,n,ar[i],sum);
        /* 
        in update function we have to do this +=value
            if(l==i && r==i)
            {
                t[node]+=value ; 
                return;
            }
        */
        total+=sum;
    }
    cout<<total<<endl;
    mem(t,0);
}


// TOPIC- Longest incresing subsequence - >   O(nlogn)
/*
    OBSERVATION 
                
        ar[i]->    2 5 3 9 7 10
After compress     1 3 2 5 4 6 
                   1 2 2 3 3 4 <-shesh e ar[i] rakle max ktw size er IS pauua jai 


shesh e ar[i] rakle max ktw size er IS pauua jai 
seta bair krar jnno 1 to ar[i]-1 er modde jar man 
max hbe take nilei maximum pabo 


1 to ar[i]-1 er modde max nicci karon jdi 
array te dekhi 2 5 3 9 ekane 9 er jnno bair 
krar somoi man 3 astese jekane actually asbe
2 3 9 / 2 5 9  jar jnno maximum nicche 


        1 2 3 4 5 6
    ---------------------------
    |   1 2 2 3 3 4           |
    ---------------------------
        2 5 3 9 7 10
*/
/*
    EDIT- in query return max(left , right) ;
          in query t[node]=value ;
          in update return max(left , right) ;
*/

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
    ll total = 0 ; 
    ll mxo = 0; 
    fr(i,1,n)
    {
        ll getmax = 1+query(1,1,n,1,ar[i]-1);
        mxo=max(mxo,getmax);
        update(1,1,n,ar[i],getmax);
    }
    cout<<mxo<<endl;
    mem(t,0);
}



//Topic - Lazy_Propagation 
const ll MAX = 200050;
ll tree[4 * MAX + 5], lazy[4 * MAX + 5], arr[4 * MAX + 5];

void pushDown(ll st, ll en, ll nd)
{
    if(!lazy[nd] || st == en) return;
    ll mid = (st + en) / 2;
    tree[nd + nd] += (mid - st + 1)*lazy[nd];
    tree[nd + nd + 1] += (en - mid)*lazy[nd];
    lazy[nd + nd] += lazy[nd];
    lazy[nd + nd + 1] += lazy[nd];
    lazy[nd] = 0;
}

void init( ll node , ll l , ll r) //LOG(N)
{
    if(l == r ) 
    {
        tree[node]=arr[l]; // ekan theke 1
        return; 
    }
    ll mid = (l+r)>>1; // divide by 2 
    init (node*2 , l , mid); // ekane asbe 2 // left 
    init (node*2+1 , mid+1 , r); // then ekane 3 // right 

    tree[node] = tree[node*2] + tree[node*2+1]; // then ekane ashi filled hbe 4
    // for min t[node]= min (,) ; 
    
}
void update(ll st, ll en, ll nd, ll L, ll R, ll val)
{
    pushDown(st, en, nd);
    if(R < st || en < L) return;
    if(L <= st && en <= R)
    {
        tree[nd] = tree[nd] + (val*(en - st + 1));
        lazy[nd] += val;
        return;
    }
    ll mid = (st + en) / 2 ;

    update(st, mid , nd + nd, L, R, val); /// left
    update(mid + 1, en, nd + nd + 1 , L, R, val); /// right
    tree[nd] = tree[nd + nd] + tree[nd + nd + 1];
}

ll query(ll st, ll en, ll nd, ll L, ll R)
{
    pushDown(st, en, nd);
    if(R < st || en < L) return 0;
    if(L <= st && en <= R) return tree[nd];
    ll mid = (st + en) / 2 ;

    return query(st, mid , nd + nd ,L,R) + query(mid + 1, en, nd + nd + 1 ,L,R);
}
ll sigleElementcHeck ( ll nd, ll b, ll e, ll ps )
{
    pushDown(b, e, nd);
    if ( ps < b || ps > e ) return 0;
    if ( b == e && ps == b ) return tree[nd];

    ll mid = ( b + e ) >> 1;
    ll le = sigleElementcHeck ( nd+nd, b, mid, ps );
    ll ri = sigleElementcHeck ( nd+nd+1, mid+1, e, ps);
 
    return le + ri ;
}


int main()
{
    ll n , L ,R , val , ps ; 
    for(ll i = 1; i <= 4*n; i++) arr[i] = lazy[i] = tree[i] = 0;
    
    init(1,1,n);
    update(1, n, 1, L, R, val);
    sigleElementcHeck( 1, 1, n, ps );
    query(1, n, 1 ,L ,R);
    return 0 ; 
}

