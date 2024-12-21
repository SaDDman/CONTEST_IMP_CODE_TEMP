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




// Topic - Factors 
    auto check=[&](ll x)->set<ll>{
        set<ll>st;
        for(ll j = 1 ; j <=sqrt(x) ; j++ )
        {
            if(x%j==0)
            {
                ll div = x/j;
                st.insert(j);
                if(x%div==0) st.insert(div);
            }
        }
        return st ; 
    };
