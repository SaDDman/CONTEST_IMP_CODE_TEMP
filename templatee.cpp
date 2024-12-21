/*
        unordered_set find() function time complexity 0(1)
        set find() function time complexity 0(log(n))
        unordered_multiset find() function time complexity 0(1) // order maintain krbe na
        multiset find() function time complexity 0(log(n))

*/


//   

/*
# policy base data structure  template

#include <ext/pb_ds/assoc_container.hpp> 
using namespace __gnu_pbds;
// Upper/lower-> transform(s.begin(), s.end(), s.begin(), ::toupper/tolower);
typedef tree< ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update > ordered_set; 
*/


// 	2D vector - > vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
// total sum - > 
// ll sum = accumulate(v.begin(),v.end(),0LL);
/* 
        ascii value
        A=65,Z=90,a=97,z=122
*/



 
/*
Note :  There is a problem with erase() function in ordered_multiset (for less_equal<int> tag).
        lower_bound() works as upper_bound() and vice-versa.
        Be careful to use.
        i) find_by_order(k) : kth smallest element counting from 0 .
        ii) order_of_key(k) : number of elements strictly smaller than k.
*/



/*
Topic - PBDS 

Ekane upper_bound & lower_bound onnanno theke khub fast kaj kre ! 



// Pair pbds -> 
// Template -> 
// #define                 pair_o_set                  tree<pair<ll,ll>, null_type,greater_equal<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
// Declare ->  pair_o_set xx ; 
// insert -> xx.insert({12, 15}); // 
// Kth index Element -> cout<<*xx.find_by_order(1)<<endl; // log(n) // log2 of (n )
// Erase - > 

// auto it = xx.upper_bound({12 , 15});
// xx.erase(it);

// Or, 
// auto it = ps.upper_bound({12 , 15});; // get the 1st index(if multiple numbers) of x
// if(it != ps.end() && *it  == x)
// {
// 	ps.erase( it ); 
// }
// less number find - > cout<<xx.order_of_key(-5)<<endl; 



// set e upperbound and lower both thik thak kaj kre multiset e kaj kre na


// fors set - >*ps.upper_bound(x) for mset use lowerbound 
// fors set - >*ps.lower_bound(x) for mset use upperbound

// multiset e ulta kaj kre just 




// Normal Int pbds -> 
// template <typename DT, typename FUNC> using o_set = tree<DT, null_type, FUNC, rb_tree_tag, tree_order_statistics_node_update>;

// Declare ->   o_set<ll,less<ll>> xx;
// Declare ->   o_set<ll,less_equal<ll>> xx;
// Declare ->   o_set<ll,greater<ll>> xx;
// Declare ->   o_set<ll,greater_equal<ll>> xx;

// Kth index Element -> cout<<*xx.find_by_order(1)<<endl;// log(n)

// insert -> xx.insert(12); 

// Erase - > 

// 	auto it = xx.upper_bound({12 , 15});
// 	xx.erase(it);

// 	Or, 
// 	auto it = ps.upper_bound({12 , 15});; // get the 1st index(if multiple numbers) of x
// 	if(it != ps.end() && *it  == x)
// 	{
// 		ps.erase( it );
// 	}
// less number find - > cout<<xx.order_of_key(-5)<<endl; 

// */



// /*


// #define vii     vector<pair<int, int>>
// #define vsort(n) sort(n.begin(),n.end()); //v is the name of vector //time O(nlog2(n))
// #define vrsort(n) sort(n.rbegin(),n.rend());
// #define bigtosmallvec sort(v.rbegin(),v.rend());//reverce way to sort//sort(v.begin(),v.end(),greater<int>());
// #define reversevector reverse(v.begin(),v.end());
// #define disting sort(v.begin(),v.end()); int sz=unique(v.begin(),v.end())-v.begin();for(int k=0;k<sz;k++){cout<<v[k]<<" ";}///must need to confirm that vector name is v//total distingsize is sz//also use in string
// #define getmax	vector<int>::iterator it=max_element(v.begin(),v.end());cout<<*it<<endl;//in vector //same as minimum just change the max to min//also use in string
// #define getmaxindex ll mx=max_element(v.begin(),v.end())-v.begin();cout<<mx<<endl;//same as minimum just change the max to min//also use in string
// #define strignreverse reverse(v.begin(),v.end());//when string name is v
// #define inttostring(a) to_string(a);//a is int name
// # define digitornot if(!isdigit(s[i]))

// #define eraseanything s.erase(s.begin());//inside() need to give the address of what i want to erase
// #define findsubstring if(s.find"sub_string"!=-1)cout<<"Sub string found";else cout<<"not"//ins sub_string we input the part of string we r serching
// #define spesificcharerase s.erase ( remove ( s.begin(), s.end(), 'a' ), s.end() ); /// removes all 'a' from s
// #define findupperorlower(c) bool f =isupper(c);///c is char name ///if lower f return 0 else 1
// #define sigCharuppercase char c=toupper(char name);//char x=toupper(s[i]); in loop
// #define permutation next_permutation(s.begin(),s.end())//if permutation cout<<s;
// #define setundecliredorder set<int,greater<int>>v;//for char string and int //all //also for pair set<pair<int,int>,greater<pair<int,int>>> v;
// #define setlastelement *(--s.end())//print this in cout like this cout<<setlastelement<<endl;
// #define setsecondelement *(++v.begin())///increase the ++ and it will output the that num of index in set
// #define tofindanythingset if(v.count(y)==1) Yes else No
// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;






// #define nl "\n"
// #define lg(r,n) (int)(log2(n)/log2(r))
// #define pf printf
// #define sf scanf
// #define sf1(a)                scanf("%d",&a)
// #define sf2(a,b)              scanf("%d %d",&a,&b)
// #define sf3(a,b,c)            scanf("%d %d %d",&a,&b,&c)
// #define pf1(a)                printf("%d\n",a);
// #define pf2(a,b)              printf("%d %d\n",a,b)
// #define pf3(a,b,c)            printf("%d %d %d\n",a,b,c)
// #define sf1ll(a)              scanf("%lld",&a)
// #define sf2ll(a,b)            scanf("%I64d %I64d",&a,&b)
// #define sf3ll(a,b,c)          scanf("%I64d %I64d %I64d",&a,&b,&c)
// #define pf1ll(a)              printf("%lld\n",a);
// #define pf2ll(a,b)            printf("%I64d %I64d\n",a,b)
// #define pf3ll(a,b,c)          printf("%I64d %I64d %I64d\n",a,b,c)
// #define _ccase printf("Case %lld: ",++cs)
// #define _case cout<<"Case "<<++cs<<": "
// #define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }

// #define     __lcm(a,b)                      (a/__gcd(a,b)*b)
// #define     int_in(x)                       scanf("%d",&x)
// #define     ll_in(x)                        scanf("%lld",&x)
// #define     dbl_in(x)                       scanf("%lf",&x)
// #define     char_in(x)                      scanf(" %c",&x)
// #define     str_in(x)                       scanf("%s",&x)
// #define     int_in2(x,y)                    scanf("%d %d",&x,&y)
// #define     int_in3(x,y,z)                  scanf("%d %d %d",&x,&y,&z)
// #define     ll_in2(x,y)                     scanf("%lld %lld",&x,&y)
// #define     ll_in3(x,y,z)                   scanf("%lld %lld %lld",&x,&y,&z)
// #define     int_out(x)                      printf("%d",x)
// #define     ll_out(x)                       printf("%lld",x)
// #define     char_out(x)                     printf("%c",x)
// #define     str_out(x)                      printf("%s",x);
// #define     YES                             printf("YES\n")
// #define     Yes                             printf("Yes\n")
// #define     NO                              printf("NO\n")
// #define     No                              printf("No\n")
// #define     nl                              printf("\n")

// //adding element in vector by replacing emement like ( v[i]=x) must check the vector size 1st
// //otherwise output will be RuntimeError i mena if(n>=0) then v[i]=x


// // int mathmatical terms  
// // a+ tt* k/2;<-- in this first work in (k/2) then tt*(k/2) then a+a+ tt* k/2


// // geting some value of int in a int we ca do this
// // ex input is in -->string 2206 
// // output is int 1103   (2206/2)
// // so we  can do this


// // (n/2)+1=(n+div-1)/div; same
// //v.begin() is iterator so when you need to call int value you need to call v.front()
// /*
// total substring n*(n+1)/2
// k means /2^k


// <<k means *2^k
// */

// any number & 1 means checking the number is odd or not?
// like ex
// if(ar[j] & 1 )--> this statement works only when the number is odd!
// // tt= 1;
// // a= 0;
// // for(ll i=s.size()-1;i>=0;i--)
// // {
// // 	int k =(int)s[i]-48;
// // 	a= a+ tt*( k/2);
// // 	tt*10;
// // }
// // tt= 1;
// // a=0+1*(6/2);=3;
// // a=3+10*(0/2);=3;
// // a=3+100*(2/2)=103
// // a=103+1000*(2/2)=1103(ans);
// /**/
// // 			!f--> f==0
// // 			f --> f==(any int)

// // distance between two point--> 
// // x y
// // x1 y1

// // sqrt((x-x1)^2+*(y-y1)^2)

// //---.map
// // 1st value in key   - mapname.begin()->first
// // last value in key  - mapname.rbegin()->first

// // 1st value in freq   - mapname.begin()->second
// // last value in freq  - mapname.rbegin()->second
// /*
// void solve()
// {
// 	string s;
// 	char a;
//     cin>>a;
// 	getline(cin,s);
// 	s=a+s;
//     cout<<s;
// }
// /* ascii value
// A=65,Z=90,a=97,z=122
// */
// //isdigit(s) will find the char is digit or not?
// //int x= char s - '0'

// //memset(ar,0,sizeof(ar));//// value take only 0 and -1; ar is array name 
// /*
// //binary 
// bitset<8>b(5); cout<<b<<endl;  ->00000101
// bitset<8>bset(string("00000101"); cout<<b;  -> 5
// bitset<8>b; cout<<b; 00000000  -> initially  all value is 0
// bitset<8>b; b.set(); cout<<b;  ->11111111 //.set transform 0 to 1
// bitset<8>b; b.set(); b.reset(); cout<<b;  00000000
// bitset<8>b(5); cout<<b.count(); ->2 // in 5 binary 101 , total num of one is 2
// bitset<3>b(5); b.flip(); cout<<b; -> 010 // it switch 1 to 0 and 0 to 1
// bitset<4>b(5);cout<<b[0]; index of bit ->1  /// 0101
// */\
// #define vii     vector<pair<int, int>> 
// #define vsort(n) sort(n.begin(),n.end()); //v is the name of vector //time O(nlog2(n))
// #define vrsort(n) sort(n.rbegin(),n.rend());
// #define bigtosmallvec sort(v.rbegin(),v.rend());//reverce way to sort//sort(v.begin(),v.end(),greater<int>());
// #define reversevector reverse(v.begin(),v.end());
// #define disting sort(v.begin(),v.end()); int sz=unique(v.begin(),v.end())-v.begin();for(int k=0;k<sz;k++){cout<<v[k]<<" ";}///must need to confirm that vector name is v//total distingsize is sz//also use in string
// #define getmax	vector<int>::iterator it=max_element(v.begin(),v.end());cout<<*it<<endl;//in vector //same as minimum just change the max to min//also use in string
// #define getmaxindex ll mx=max_element(v.begin(),v.end())-v.begin();cout<<mx<<endl;//same as minimum just change the max to min//also use in string
// #define strignreverse reverse(v.begin(),v.end());//when string name is v
// #define inttostring(a) to_string(a);//a is int name
// # define digitornot if(!isdigit(s[i]))
// //v.begin() is iterator so when you need to call int value you need to call v.front()
// /*
// >>k means /2^k
// <<k means *2^k
// */
// #define eraseanything s.erase(s.begin());//inside() need to give the address of what i want to erase
// #define findsubstring if(s.find"sub_string"!=-1)cout<<"Sub string found";else cout<<"not"//ins sub_string we input the part of string we r serching
// #define spesificcharerase s.erase ( remove ( s.begin(), s.end(), 'a' ), s.end() ); /// removes all 'a' from s
// #define findupperorlower(c) bool f =isupper(c);///c is char name ///if lower f return 0 else 1
// #define sigCharuppercase char c=toupper(char name);//char x=toupper(s[i]); in loop
// #define permutation next_permutation(s.begin(),s.end())//if permutation cout<<s;
// //string 
// #define slowerletter tolower();
// #define supperletter toupper();

// //--->> set
// #define setundecliredorder set<int,greater<int>>v;//for char string and int //all //also for pair set<pair<int,int>,greater<pair<int,int>>> v;
// #define setlastelement *(--s.end())//print this in cout like this cout<<setlastelement<<endl;
// #define setsecondelement *(++v.begin())///increase the ++ and it will output the that num of index in set
// #define tofindanythingset if(v.count(y)==1) Yes else No //s.find(x)!=s.end()





// template < typename F, typename S >
// ostream& operator << ( ostream& os, const pair< F, S > & p ) {
//             return os << "(" << p.first << ", " << p.second << ")";
// }
 
// template < typename T >
// ostream &operator << ( ostream & os, const vector< T > &v ) {
//             os << "{";
//                 for(auto it = v.begin(); it != v.end(); ++it) {
//                                 if( it != v.begin() ) os << ", ";
//                                         os << *it;
//                                             }
//                     return os << "}";
// }
 
// template < typename T >
// ostream &operator << ( ostream & os, const set< T > &v ) {
//             os << "[";
//                 for(auto it = v.begin(); it != v.end(); ++it) {
//                                 if( it != v.begin() ) os << ", ";
//                                         os << *it;
//                                             }
//                     return os << "]";
// }
 
// template < typename T >
// ostream &operator << ( ostream & os, const multiset< T > &v ) {
//             os << "[";
//                 for(auto it = v.begin(); it != v.end(); ++it) {
//                                 if( it != v.begin() ) os << ", ";
//                                         os << *it;
//                                             }
//                     return os << "]";
// }
 
// template < typename F, typename S >
// ostream &operator << ( ostream & os, const map< F, S > &v ) {
//             os << "[";
//                 for(auto it = v.begin(); it != v.end(); ++it) {
//                                 if( it != v.begin() ) os << ", ";
//                                         os << it -> first << " = " << it -> second ;
//                                             }
//                     return os << "]";
// }
 
// #define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
 
// void faltu () {
//             cerr << endl;
// }
 
// template <typename T>
// void faltu( T a[], int n ) {
//             for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
//                 cerr << endl;
// }
 
// template <typename T, typename ... hello>
// void faltu( T arg, const hello &... rest) {
//             cerr << arg << ' ';
//                 faltu(rest...);
// }







// Topic - About vector of vector 



/*
Initialization - >  vector<vector<int>> adj[]; 
        then the values of adj can be print like this 

        for(auto &vec : aj[1]) cout<<vec[0]<<" "<<vec[1]<<endl;

*/
/*
Initialization - >  vector<vector<int>>& edges;  

        then the values of edges can be print like this 

        for(auto &vec : edges) 
        {
            int u = vec[0];
            int v = vec[1];
            int w = vec[2];
        }

        or,
        for(auto u : edges) cout<<u[0];


*/



/*
Initialization - >  vector<int> edges[n];  

        then the values of edges can be print like this 

        for(auto vec : edges[1]) 
        {
                cout<<vec<<<endl;
                // cannt print like vec[0] , vec[1]....
        }


*/



bool getResponse(string &s)
{
    bool res;
    cout << "? " << s << endl;
    cin >> res;
    return res;
}