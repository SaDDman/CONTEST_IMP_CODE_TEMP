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
#define                 ll                          long long int
#define                 ull                         unsigned long long
#define                 frac(a)                     cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);//frac(4); cout<<a; 1.1234
#define                 f(i,pp,n)                   for(ll (i) = pp; i <n; i++)
#define                 fr(i,pp,n)                  for(ll (i) = pp; i <=n; i++)
#define                 ita2(n)                     for(auto pri : (n)) { cout<<pri<<" " ;} cout<<endl;
#define                 ita2d(n)                    for( auto u : (n)){ for(auto x : u) { cout<<x<<" "; } cout<<endl;} // for( ll i = 0 ; i<vectorsize; i++) { for( ll j = 0 ; j< v[i].size() ; j++) { cout << v[i][j]<<" "; }  cout<<endl; }
#define                 ita3(n)                     for(auto pri : (n)) { cout<<pri.first<<" "<<pri.second<<endl; }
#define                 vsort(n)                    sort(n.begin(),n.end()); 
#define                 vrsort(n)                   sort(n.begin(),n.end(),greater <> ()); 
#define                 MOD                         1000000007
#define                 bug                         cout<<"ekane asche"<<endl;
#define                 testcases                   ll t; cin >> t; while (t--) 

/*
    FROM-> Mike 

Topic - DFS  -> Time complexity - O(v+e)
    Topic - showing Each node ancestor
Topic - BFS -> Time complexity - O(v+e)
    Topic -  BFS di level checking in 2D matrix
    Topic - Bfs level checking 

    Cycle
Topic - Cycle ditection in undirected graph using DFS 
Topic - Cycle ditection in undirected graph using BFS 
Topic - Cycle ditection in Directed graph using DFS 
Topic - Detect Cycle in Directed Graph using BFS

    Topological Sort
Topic - Topological Sorting Using Dfs(only done in DAG)
Topic - Topological Sorting Using Bfs ( Khan's Algo)  // Alwz use this 
    Topic - Level wise using topology 
    Topic - Using topology use kre j node e achi tar ager node theke max count kra ;
    Topic - Using topologi sort get the ancestor of all Node
    Topic - Largest color value in any path 1857

    Biparted Graph 
Topic - Bipartite Graph using Dfs
Topic - Bipartite Graph using Bfs

    DSU
Topic - Disjoint Set Union
Topic - Disjoint Set Union (Using Class) (Best)
    Topic - Alada alada DSU (Using Class) EX- For alice for Bob
    Topic - u thek v te amn kno path ache ki ja wig theke choto ? 1697
    Topic - Perticular component er shb value er & bair kra 3018

Topic - Cycle find in undirected Graph using Dsu

    Dijkstra
Topic - Dijkstra using priority queue 
    Topic - edge[i] atleast ekta (from 0 to n er)shortest path er shate add thakle return true ( 3123 )
    Topic - Get the second minimum distance ( 2045 )
    
Topic - Dijkstra using set 
Topic - Printing shortest path using Dijkstra
Topic - Dijkstra using char to char shortest path 2D vector fill up 
Topic - Using Diasktra get the maximum path value 

    Floyd Warshall
Topic - Floyd Warshall Algorithm

Topic - Bellman-Ford Algorithm O(v*e)
Topic - Strongly Connected Component ("Kosaraju's Algorithm")
Topic - MST 
    Topic - Kruskal's Algorithm (Minimum Spanning Tree)
    Topic - Prim's Algorithm (Minimum Spanning Tree) O(e*(logE + loge))

Topic - Euler Path 
Implement 
Topic - Checking matrix all same value and the total size of same value 
*/


Topic-> DFS -> Graph Traversal using depth fast search
Some example of DFS( warm up) 
    EXMPLE - Sub graph checking DFS 
    EXMPLE - SUb graph e koita node ase jara avg er soman 
    EXMPLE - Last node e jauua ta count kra -- KOita last node ase 
    EXMPLE -
    EXMPLE -
Topic - Adjecent matrix
    EXAMPLE- matrix e max number khuja
    EXAMPLE- Matrix e kotogula place ase jekane jauu(mati)ajabe (panite jauua jabe na) 
    EXAMPLE-  
    EXAMPLE- 

Topic -BFS 
    EXAMPLE- Shortest path of bfs unweighted 
    EXAMPLE- path er sort order e jauua incresing order 
    EXAMPLE- Path from a to b short way 
    EXAMPLE- 
Topci - Bipartite graph
    EXAMPLE - In bipartite graph is it will be a biocolouring? 1 then 2 , 2 then 1 !
    EXAMPLE - BFS on grid checkin fire is faster then jane or not? 

ll fectorial(ll n)
{
    // cout<<n<<" "<<n-1<<endl;
    if(n==0) return 1 ;
    return n*fectorial(n-1) ; // back tracking hocche // recursive tree // tree 
    // if we call 5
    // 5 - 4 - 3 - 2 - 1 -0- 1 - 2- 3- 4- 5
    // time complexity O(n)<- overall time complexity content fector chara hishab kra hoi 
    // content fector or number of operation (2*n)
}

// ll fibonacci(ll n)
// {
//     if(n==0) return 0 ;
//     if(n==1) return 1 ;

//     return fibonacci(n-1)+fibonacci(n-2);
//     // fst n-1
//     // then n-2
//     // 5 ---+ 4 ----------+ 3--------+ 2 --------+1
//     //      + 3           + 2        + 1         +0
//     //         +2 ---+1      +1      
//     //         +1    +0      +0
// }
// int main()
// {
//     ll n ;
//     cin>>n;
//     ll ans = fibonacci(n);
//     cout<<ans<<endl;
// }





///// DP starts 


int dp [10000]; /// size jtw time complexity o ttw  mainly O(n)  // memory comp size*int bit(4)
ll fibonacci(ll n)
{
    if(n==0) return 0 ;
    if(n==1) return 1 ;
    if(dp[n]!=-1) return dp[n];

    return dp[n]= (fibonacci(n-1)+fibonacci(n-2));
    // return  (fibonacci(n-1)+fibonacci(n-2));
    // fst n-1
    // then n-2

    // 5 ---+ 4 ----------+ 3--------+ 2 --------+1
    //      + 3           + 2        + 1         +0
    //         +2 ---+1      +1      
    //         +1    +0      +0

//                     fst       sec             thr                      fourth
//     0       1    1+0=1       dp[2]+1=1+1=2   dp[3]+dp[2]=2+1=3       dp[4]+d[3]=3+2=5
// dp[0]   dp[1]   dp[2]       dp[3]            dp[4]                   dp[5]
}
int main()
{
    ll n ;
    cin>>n;
    f(i,0,10000) dp[i]=-1;

    ll ans = fibonacci(n);
    cout<<ans<<endl;
}


adjcent node  - direct 
reachable node - directly na 
one way- directed edge-jete parbo kindu aste prbo na-(>chinho thake<)
two way-undirected edge- jete parbo asteo prbo na-(chinho thake na)
waited way - time incluted 
unwaited way - not given time - fixed should need 1
'' er khetre wait hishebe dhora hoi koita edge e jaite hocche 
cycle - min 2 ta edge lagbe 
connected node - ekta edge theke shb gulate jaite para k bole connected node 
simple path- per per node k ekbar visit korbe- node & edge 2 bar visit kra jabe na

tree er modde simple path e shortest path 
tree er modde cycle thakte parbe na

degree- ekta node jotogula edge er shtate connected ta holo degree
leaf -eder kono child nai - degree 1 hoi 

binary tree- leaf bade shb gula node er child 2 hole 

sub tree -kno node k edge dorle oita theke niche joddur jauua jai ta e sub tree 
sub tree size - oi node soho pura tree tw joto gula node ase shb gula holo size 

sibling - jader parents same oigula hocche siblings 
graph hight-  root theke shb theke durer node er distance


forest - onk gular tree er sum -- forest e node common thakbe na 

representation - adjacentcy matrix(array) ,  adjacentcy list (vector)

adjacentcy matrix-> 
ekane adjacent node gula store korbo , path na 
2
|
1-4-2
|
3
eta underectly unwaited graph tai 1 disi 
      1 2 3 4 
     --------
    1|1 1 1 1|
    2|1 1   1|
    3|1      |
    4|1 1    |
    ---------
2D array te store 
a[1][1]=1
a[1][2]=1
a[1][3]=1
a[2][2]=1


r jodi wait hoi 

   2   3
1----2----4
|
|2
|
3

i = infinite or -1 (jate amr program bujbe j ekane jaite parbe na)
cause 1 to 4 adjcent node na  , jkn run dibo inf er jnno
boro ekta man dibe ... jar jonno bujbo j eta adjcent na

     1 2 3 4 
     --------
    1|0 2 2 i|
    2|2 0 i 3|
    3|2 i 0 i|
    4|i 3 i 0|
    ---------
directed graph waited exmp -> chinno deya thake

         3    3     2
       4--->1---->2---->1
            |
            |2
           \|/
            3
waited directed grap er adjecency metrix
     1 2 3 4 
     --------
    1|0 3 2 i|
    2|2 0 i i|
    3|i i 0 i|
    4|3 i i 0|
    ---------

Topic- Adjacent matrix , adjacent list

. -> jauua jabe
# -> jauua jabe na
S -> starting point 
t -> ending point 

//char adjacent matrix cin cout scanf 
4 3
..#
..#
..#
..#

..#
..#
..#
..#
const int mx = 1002;
char admat[mx][mx];
int main()
{
   int n , m ;
   scanf("%d%d", &n , &m);

   for( int i = 1; i<=n ; i++)
   {
      for( int j = 1; j<=m ;j++)
      {
         scanf(" %c", &admat[i][j]);
      }
   }

   cout<<endl;

   for( int i = 1; i<=n ; i++)
   {
      for( int j = 1; j<=m ;j++)
      {
         cout<<admat[i][j];
      }
      cout<<endl;
   }
}
Adjacent matrix-> matrix er maddome adjaceny node gula store kra 
n*m memory complexity  (huge space take (n^2))
1
|
2----4
|
3
Adjacent list->prottek node er adjacent list ekare rake vector e thake 
ei khetre memory huge obtimize hoccce cause-> 2*m -> explain->
v[1]={2};---size 1 ---- mane 32 bit lagteste
v[2]={1,3,4};---size 3---mane 32*3 bit lagteste
v[3]={2};---size 1 ---- mane 32 bit lagteste
v[4]={2};---size 1 ---- mane 32 bit lagteste

total degree 2*m  -- edge*2 
memory 2*m*32 --(int 1 = 32 bit)

so m= 2*10^5 hole
memory hbe - > (2*2*10^5) *32 
ejonno adjecent list use kra hoi 

underected grap er khetre edge 2 bar dibe na edge 1bar e dibe 
input neyar somoi 2 bar e dibe 
mane 1--2 deya thakle
1--2 , 2--1 ;
const int mx = 1002;
vector<int>adj[mx];
int main()
{
   int n , m ;
   cin>>n>>m; // m edge 

   for(int i= 1 ; i<=m ;i++)
   {
      int u,v ;
      cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
   }

   for(int i= 1 ; i<=n ;i++)// n node 
   {
      cout<<"Adjacent list of "<<i<<"->";
      for(auto u : adj[i])
         cout<<u<<" ";
      cout<<endl;
   }
}
weighted graph er khetre adjecent matrix use kra jai na
weighted graph er khetre adjecent list use kra jai
1
|10  3
2--------4
|2
3

4 3
1 2 10
2 4 3
2 3 2
Topic - 
const int mx = 1002;
vector<pair<int,int>>adj[mx];
/*
vector<vector<ll>>adj;
vector<ll>node; 
*/
int main()
{
   int n , m ;
   cin>>n>>m; // m edge 
    /*
         adj.resize(m+1);
        node.resize(m+1,0);
    
    */
   for(int i= 1 ; i<=m ;i++)
   {
      int u,v,w ;
      cin>>u>>v>>w;
      adj[u].push_back({v,w}); // u v hoye jai jar w-weight
      adj[v].push_back({u,w});// v u hoye jai jar w-weight
   }

   for(int i= 1 ; i<=n ;i++)
   {
      cout<<"Adjacent list of "<<i<<"->";
      for(auto u : adj[i])
         cout<<"Node :"<<u.first<<" "<<"cost :"<<u.second<<" ";
      cout<<endl;
   }
    /*
    
        adj.clear();
            node.clear();
    */
}

Topic-> DFS -> Graph Traversal using depth fast search

shb node e 2bar visit kre asha 
linked with recursion (backtracking)

      2           
      |           2 -> jkn onno kno node thake na jekane visit kra hoi nai
      |    <  <   1-> jkn matro visit kra hoi tkn 
   1  1->--->--<-4
      |
      |
      3



complexity -- 2*m, m= node 
overall O( m+n ) ,n= edge 
complexity -- 2*m ,m= edge

const int mx = 2e4 +12;
bool vis[mx];
vector<int>adj[mx];
bool isnode[mx];
int csz = 0 , on = 0 ;

/*

vector<vector<ll>>adj;
vector<ll>node; 

const int mx = 2e5+10 ;
string adj[2];
*/
void dfs(int j, int col)
{
    vis[j]=1;
    // if(col ==1 ) on++;
    csz++; // connected component
    
    // int tmp;
    // if(col == 1 ) tmp = 2;
    // else tmp = 1 ; 

    for(auto u : adj[j])
    {
        if(vis[u]==0)
        {
            dfs(u); //,tmp);
             /*
                jodi dfs e man barai mane dfs(u+1)
                di tahole abr check kra lagbe ta visited kina 
                mane
                if(!vis[u+1])
                    dfs(u+1);
                otherwise tle khabo 
            */
        }
    }
}
int main()
{
    int t;
    cin>>t;
    f(i,0,t)
    {

        f(g,0,mx)
        {
            adj[g].clear();
            isnode[g]=0;
            vis[g]=0;
        }
        int m ; 
        cin>>m;
        /*
            adj.resize(m+1);
            node.resize(m+1,0);
        */
        f(j,0,m)
        {
            int x , y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);

            isnode[x]=1;
            isnode[y]=1;
        }
        /*
            f(i,0,n)
            {
                cin>>adj[i];
            }
        */
        int ans = 0 ;
        f(j,0,mx)
        {
            if(isnode[j]==1 && vis[j]!=1) // isnode those node which r included in graph
            {
                // csz= 0 , on = 0 ;
                dfs(j); //,1);
                // ans+=max(on, csz-on);
            }
        }
        cout << "Case " << i+1 << ": " << ans << endl;
        /*
             adj.clear();
        node.clear();
        */
    }
}

Sub graph checking DFS 

const int mx = 4012;
bool vis[mx];
vector<int>adj[mx];
bool isnode[mx];
string s ;
int ans ; 

/*
vector<vector<ll>>adj;
vector<ll>node; 

*/
pair<ll,ll> dfs( int x )
{
	if(!isnode[x]) isnode[x]=1; 

	pair<ll,ll>shb ; 

	for(auto u : adj[x])
	{
		pair<ll,ll>xt;
		if(!isnode[u])
		{
			xt = dfs(u);
			cout<<u<<" "<<xt.first<<" "<<xt.second<<endl;
			shb.first+=xt.first;
			shb.second+=xt.second;
		}
	}

	if(s[x-1]=='B')
	{
		if(shb.first+1==shb.second) ans++;
		return {shb.first+1,shb.second};
	}
	else 
	{
		if(shb.first==shb.second+1) ans++;
		return {shb.first,shb.second+1};
	}
}

Topic - Last node e jauua ta count kra -- KOita last node ase 
vector<vector<ll>>adj;
vector<ll>node; 
ll dfs(ll nd , ll back)
{
    ll cnt = 0 ;  
    for(auto u : adj[nd])
    {
        if(u != back)
        {
            cnt+=dfs(u,nd); // ekane nd holo ager node 
        }
    }

    if(!cnt  && adj[nd].size()==1) // jeta theke kno node child hishebe ashe na tar cnt 0 thake + adj size 1 thake 
    {
        cnt++;
    }
    node[nd]=cnt; 
    return cnt ; 
}

Topic - SUb graph e koita node ase jara avg er soman 
/*
Input: root = [4,8,5,0,1,null,6]
5
4 8
4 5
8 0
8 1
5 6
Output: 5
Explanation: 
For the node with value 4: The average of its subtree is (4 + 8 + 5 + 0 + 1 + 6) / 6 = 24 / 6 = 4.
For the node with value 5: The average of its subtree is (5 + 6) / 2 = 11 / 2 = 5.
For the node with value 0: The average of its subtree is 0 / 1 = 0.
For the node with value 1: The average of its subtree is 1 / 1 = 1.
For the node with value 6: The average of its subtree is 6 / 1 = 6.
*/
vector<vector<int>> edg(100);
int vis[1000];
int cnt=0;
/*
vector<vector<ll>>adj;
vector<ll>node; 

*/
pair<int,int> dfs( int x ,int ser)
{
    // cout<<x<<" ok "<<endl;
    if(vis[x]==0) vis[x]=1;

    int sum = x ; 
    for(auto u : edg[x])
    {
        if(!vis[u])
        {
            pair<int,int>tmp = dfs(u,0);
            sum+=tmp.first;
            ser+=tmp.second;
            // cout<<x<<" "<<sum<<" "<<ser<<endl;
        }
    }
    ser++;
    // cout<<x<<" "<<sum<<" "<<ser<<" why "<<endl; // 8 // 9 // 3 
    if(sum/ser==x) cnt++; 

    return {sum,ser};
}
int main()  
{ 
    speed 
    int n,e;
    cin>>n>>e;
    /*
        adj.resize(m+1);
        node.resize(m+1,0);
    */
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        edg[a].push_back(b);
        edg[b].push_back(a);
    }
    dfs(4,0);
    cout<<cnt<<endl;

    /*
     adj.clear();
        node.clear();
    */
    return 0 ; 
}




disconnected graph  er edge vangle 
connected component toiri hoi 


Adjecent matrix ->
3 3
1 2 0
3 4 0
0 0 5
biggst sum is 1+2+3+4 = 10
Example -> matrix e max number khuja -> 
const int mx = 2010 ;
vector<ll>adj[mx];
vector<ll>vis[mx];

/*

vector<vector<ll>>adj;
vector<ll>node; 
*/
int dx[] = { -1, +1, 0, 0 };
int dy[] = { 0, 0, -1, +1 };

int n , m , cnt ;
ll total = 0 ;
void dfs( ll x , ll y)
{
    vis[x][y]=1;
    total+=adj[x][y];
    for(int i = 0 ; i< 4 ; i++)
    {
        ll psx = x+dx[i];
        ll psy = y+dy[i];
        if(psx>=0 && psx<n && psy>=0 && psy<m && !vis[psx][psy] && adj[psx][psy]!=0)
        {
            dfs(psx , psy);
            /*
                jodi dfs e man barai mane dfs(psx+1,psy) or  dfs(psx,psy+1)
                di tahole abr check kra lagbe j ta visited kina 
                mane
                if(!vis[psx+1][psy] or !vis[psx][psy+1])
                    dfs(psx+1,psy);
                    or dfs(psx,psy+1) ;
                otherwise tle khabo 
            */
        }
    }
}
int main()
{
    speed 
    ll t ;
    cin>>t;
    f(tc,0,t)
    {
        f(i,0,mx)
        {
            adj[i].clear();
            vis[i].clear();
        }
        cin>>n>>m;
        /*
        
         adj.resize(m+1);
        node.resize(m+1,0);
        */
        f(i,0,n)
        {
            f(j,0,m)
            {
                ll x ; 
                cin>>x;
                adj[i].push_back(x);
                vis[i].push_back(0);
            }
        }

        // f(i,0,n)
        // {
        //     f(j,0,m)
        //     {  
        //         cout<<adj[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        ll mx = 0;
        f(i,0,n)
        {
            f(j,0,m)
            {
                if(vis[i][j]==0 && adj[i][j]!=0)
                {
                    total=0;
                    dfs(i,j);
                    mx = max(total , mx);
                }
            }
        }
        cout<<mx<<endl;
        /*
            adj.clear();
        node.clear();
        */
    }
}



Example - Matrix e kotogula place ase jekane jauu(mati)ajabe (panite jauua jabe na) 

const int mx = 30 ;
vector<char>adj[mx];
vector<ll>vis[mx];
int dx[] = { -1, +1, 0, 0 };
int dy[] = { 0, 0, -1, +1 };
int n , m , cnt ;
/*

vector<vector<ll>>adj;
vector<ll>node; 
*/
void dfs( ll x , ll y)
{
    vis[x][y]=1;
    cnt++;

    for(int i = 0 ; i< 4 ; i++)
    {
        ll psx = x+dx[i];
        ll psy = y+dy[i];
        if(psx>=0 && psx<n && psy>=0 && psy<m && !vis[psx][psy] && adj[psx][psy]=='.')
        {
            dfs(psx , psy);
            /*
                jodi dfs e man barai mane dfs(psx+1,psy) or  dfs(psx,psy+1)
                di tahole abr check kra lagbe j ta visited kina 
                mane
                if(!vis[psx+1][psy] or !vis[psx][psy+1])
                    dfs(psx+1,psy);
                    or dfs(psx,psy+1) ;
                otherwise tle khabo 
            */
        }
    }
}
int main()
{
    ll t ;
    cin>>t;
    f(tc,0,t)
    {
        f(i,0,mx)
        {
            adj[i].clear();
            vis[i].clear();
        }
        cin>>n>>m;
        /*
             adj.resize(m+1);
        node.resize(m+1,0);
        */
        swap(n,m);
        ll x  = 0 , y = 0 ;
        f(i,0,n)
        {
            f(j,0,m)
            {
                char a ;
                cin>>a;
                if(a=='@') 
                {
                    x=i, y = j ;
                }
                adj[i].push_back(a);
                vis[i].push_back(0);
            }
        }


        cnt = 0 ;
        dfs(x,y);
        cout<<"Case "<<tc+1<<": "<<cnt<<endl;
    }
    /*
        adj.clear();
        node.clear();
    */

}


Topic -BFS 
#Shortest path of bfs unweighted 


const int mx = 1e4+15 ;
vector<ll>adj[mx];
int lev[mx];
/*

vector<vector<ll>>adj;
vector<ll>node; 
*/
void bfs(ll s)
{
    mem(lev,-1);
    lev[s]=0;

    queue<ll>q;

    q.push(s);

    while(!q.empty())
    {
        ll u = q.front();
        q.pop();
        
        for(auto v : adj[u])
        {
            if(lev[v]==-1)
            {
                lev[v]=lev[u]+1;
                q.push(v);
            }
        }
    }
}
int main()
{
    testcases
    {
        f(i,0,mx)
        {
            adj[i].clear();
        }
        ll n , m ;
        cin>>n>>m;
        /*
             adj.resize(m+1);
        node.resize(m+1,0);
        */
        f(i,0,m)
        {
            ll x , y ; 
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
      
        bfs(1);


        cout<<lev[n]<<endl;
        /*
             adj.clear();
        node.clear();
        */
    }
}

Topic -  path er sort order e jauua incresing order 
Input - 
10 10
1 4
6 8
2 5
3 7
9 4
5 6
3 4
8 10
8 9
1 10

Output - 1 4 3 7 9 8 6 5 2 10

const int mx = 1e5+15 ;
vector<ll>adj[mx];
int lev[mx];
vector<ll>vec;
/*
vector<vector<ll>>adj;
vector<ll>node; 
*/
void bfs(ll s)
{
    mem(lev,-1);
    lev[s]=1;
 
    priority_queue<ll>q; // boro theke choto man rakhe 
 
    q.push(-s); // minus krsi cause plus er choto value voro hishebe rakhe minus e 
    // +10 plus e shb boro kintu minus e choto onk -10 
    while(!q.empty())
    {
        ll u = -q.top();// minus man k + e krar jnno -q.top likse 
        vec.push_back(u);
        q.pop();
        for(auto v : adj[u])
        {
            if(lev[v]==-1)
            {
                q.push(-v);
                lev[v]=lev[u]+1;
            }
        }
    }
}

Topic - Path from a to b short way 
Making with string 
Input-
3
JV PT
KA PT
KA HP

JV to HP shortest path print 
JV PT
PT KA
KA HP
const int mx = 1e4+15 ;
map<string,vector<string>>adj;
map<string , ll>lev;
map<string,string>pr;
/*
vector<vector<ll>>adj;
vector<ll>node; 
*/
void bfs(string s)
{
    lev.clear();
    lev[s]=1;

    queue<string>q;

    q.push(s);

    while(!q.empty())
    {
        string u = q.front();
        q.pop();
        
        for(auto v : adj[u])
        {
            if(lev[v]==0)
            {
                lev[v]=lev[u]+1;
                pr[v]=u;
                q.push(v);
            }
        }
    }
}
int main()
{
    int flag = 0 ;
    int n ;
    while(cin>>n)
    {
        if(flag) cout<<endl;
        flag=1;
        adj.clear();
        pr.clear();
        /*
            adj.resize(m+1);
            node.resize(m+1,0);
        
        */
        f(i,0,n)
        {
            string x , y ; 
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        string a , b ;
        cin>>a>>b;
        // cout<<a<<b;
        bfs(a);
        vector<pair<string,string>>vec;

        while(!pr[b].empty())
        {
            vec.push_back({pr[b],b});
            b=pr[b];
        }
        reverse(vec.begin(),vec.end());

        if(!lev[b])
        {
            cout<<"No route"<<endl;
            continue;
        }

        ita3(vec)
        /*
        
        
         adj.clear();
        node.clear();
        
        
        */

    }
}

Bipartite graph
a----f
b----k
c----v
d----l
e----u
kno node er adjecent colour 
gula different korte parle 
bipartite graph 

Topic - In bipartite graph is it will be a biocolouring? 1 then 2 , 2 then 1 !
ll bfs(ll s)
{
    mem(lev,-1);
    lev[s]=1;

    queue<ll>q;

    q.push(s);

    while(!q.empty())
    {
        ll u = q.front();
        q.pop();
        
        for(auto v : adj[u])
        {
            if(lev[v]==-1)
            {
                if(lev[u]==1) lev[v]=2;
                else lev[v]=1;
                q.push(v);
            }
            else if(lev[u]==lev[v]) return 0;
        }
    }
    return 1;
}

Topic - BFS on grid checkin fire is faster then jane or not? 
intput 
4 5
##.##
#JF.#
#...#
#...#

Output - 3 
FIre->
-1 -1  1 -1 -1 
-1  1  0  1 -1 
-1  2  1  2 -1 
-1  3  2  3 -1 
Jane->
-1 -1 -1 -1 -1 
-1  0 -1 -1 -1 
-1  1 -1 -1 -1 
-1  2 -1 -1 -1

const int mx = 203;
char c[mx][mx];
int levf[mx][mx],levj[mx][mx];
vector<pair<int,int>>s;
/*

vector<vector<ll>>adj;
vector<ll>node; 

*/
int n , m ;
void fire()
{
   mem(levf,-1);
   // lev[s]=0;
   queue<pair<int,int>>q;
   for(auto u: s)
   {
      q.push(u);
      levf[u.first][u.second]=0;
   }

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        f(i,0,4)
        {
            int fs = x + dx[i];
            int sc = y + dy[i];
            if(fs>0 && fs<=n && sc >0 && sc<=m && levf[fs][sc]==-1 && c[fs][sc]!='#')
            {
               levf[fs][sc]=levf[x][y]+1;
               q.push({fs,sc});
            }
        }
    }
}
void jane(int x , int y )
{
   mem(levj,-1);
   // lev[s]=0;
   levj[x][y]=0;
   queue<pair<int,int>>q;
   q.push({x,y});


      while(!q.empty())
      {
         int xx = q.front().first;
         int yy = q.front().second;
         q.pop();
         f(i,0,4)
         {
               int fs = xx + dx[i];
               int sc = yy + dy[i];
               if(fs>0 && fs<=n && sc >0 && sc<=m && levj[fs][sc]==-1 && c[fs][sc]!='#' && levj[xx][yy]+1 <levf[fs][sc])
               {
                  levj[fs][sc]=levj[xx][yy]+1;
                  q.push({fs,sc});
               }
         }
      }
}
int main()
{
   int t ;
   cin>>t;
   for( int tc = 1 ; tc<=t ; tc++)
   {
      s.clear();
      cin>>n>>m;
      int x = 0 , y = 0 ;
      /*
         adj.resize(m+1);
        node.resize(m+1,0);
      */
      fr(i,1,n)
      {
         fr(j,1,m)
         {
            cin>>c[i][j];
            if(c[i][j]=='J') x = i , y = j ;
            if(c[i][j]=='F') s.push_back({i,j});
         }
      }
      fire();
      jane(x,y);


      int ans = 1e17;
      int flag = 0 ;
      fr(i,1,n)
      {
         if(levj[i][1]!=-1)
         {
            flag = 1;
            ans = min(ans,levj[i][1]);
         }
      }
      fr(i,1,n)
      {
         if(levj[i][m]!=-1)
         {
            flag = 1;
            ans = min(ans,levj[i][m]);
         }
      }
      fr(i,1,m)
      {
         if(levj[1][i]!=-1)
         {
            flag = 1;
            ans = min(ans,levj[1][i]);
         }
      }
      fr(i,1,m)
      {
         if(levj[n][i]!=-1)
         {
            flag = 1;
            ans = min(ans,levj[n][i]);
         }
      }
      if(!flag) cout<<"Case "<<tc<<": IMPOSSIBLE"<<endl;
      else cout<<"Case "<<tc<<": "<<ans+1<<endl;

        /*
        adj.clear();
            node.clear();
        */
   }
}




// FROM MIKE 

/*Topic - TIME coplexity 
    Adjecent matrix O(v*v)
    Adjecent List O(v+e)
*/


/* Topic - Directed & undirected graph
unDirected graph -> <-  means can locate from both side 
0 to 1 and 1 to 0 
0------------1
    edge


Directed graph ->  means can locate from only one side 
0 to 1
0----------->1
    edge
*/


// Topic - DFS  -> Time complexity - O(v+e)
vector<vector<int>>& adj ; 
int n = adj.size();
vector<bool>vis(n+1,false);
    vector<int>result ; 
auto dfs =[&](int u,auto &&dfs,vector<int>adj[])->int{
    if(vis[u]!=0)   return false ; 
    vis[u]=true;
    result.push_back(u);
    for(auto x: adj[u])
    {
        if(vis[x]!=true) dfs(x,dfs,adj);
    }
};

dfs(0,dfs,adj);

// Topic - BFS -> Time complexity - O(v+e)


vector<bool>vis(adj.size()+1,false);
vector<int>result ; 
auto bfs=[&](int u){
    queue<int>q; 
    q.push(u);
    vis[u]=true;
    result.push_back(u);
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        for(auto x : adj[v])
        {
            if(vis[x]!=true) {
                q.push(x);
                result.push_back(x);
                vis[x] = true; 
            }
        }
    }
};
bfs(0);


// Topic - Cycle ditection in undirected graph using DFS 
// Time complexity - O(v) + O(e)
// Link for details - https://www.youtube.com/watch?v=UrQv5YMC060
// visied node e again ashi gele + oi visited node jdi parent na hle cycle 
int V ; // nodes 
vector<bool>vis(V,false);
auto CycleDfsUNadj=[&](int v , int par,auto &&CycleDfsUNadj,vector<int>adj[])->int{
    vis[v] = true;
    for(auto u : adj[v])
    {
        if(u==par) continue;
        if(vis[u]) return true; // etar jnno visited kina check kre nai 1st e // ekanei check hoi jacche
        if(CycleDfsUNadj(u,v,CycleDfsUNadj,adj)) return true;
    }
    return false ; 
};
for(int i = 0 ; i< V ; i++ ) // cause disconnected graph // searching all graphs
{
    if(!vis[i] && CycleDfsUNadj(i,-1,CycleDfsUNadj,adj)) return true;
}
return false ;



// Topic - Cycle ditection in undirected graph using BFS 
// Time complexity - O(v) + O(e)
// Link for details - https://www.youtube.com/watch?v=HqIQmKKo5_I&list=PLpIkg8OmuX-LZB9jYzbbZchk277H5CbdY&index=6



int V ; // number of nodes 
vector<bool>vis(V+1,false);
auto CycleBfsUndir=[&](int u,int par,vector<int>adj[])->bool{
    queue<pair<int,int>>que;
    vis[u]  = true;
    que.push({u,par});
    
    
    while(!que.empty())
    {
        pair<int,int>v = que.front();
        int source = v.first , parent = v.second; 
        que.pop();
        for(auto uu : adj[source])
        {
            if(!vis[uu])
            {
                vis[uu]=true;
                que.push({uu,source});
            }
            else if(uu!=parent) return true;
        }
    }
    return false ; 
};

for(int i = 0 ; i<V ; i++ )
{
    if(!vis[i] && CycleBfsUndir(i,-1)) return true;
}
return false ;


// Topic - Cycle ditection in Directed graph using DFS 
// Time complexity - O(v) + O(e)
// Link for details - https://www.youtube.com/watch?v=K_LamGUvwUc&list=PLpIkg8OmuX-LZB9jYzbbZchk277H5CbdY&index=6&t=1016s

vector<bool>vis(V+1,false);
vector<bool>inRecurtion(V+1,false);
vector<int>cycle_length_count(n,1);  //<- jdi length bair kri taile lamda 
                                    // er vitor all return condition delete kri dfs
                                    // braket er vitor dukai dibo dibo cause we r just taking the length   // ex - > if(!vis[v]) { CycleDfsDir(v,CycleDfsDir,adj) } 

auto CycleDfsDir=[&](int u,auto &&CycleDfsDir,vector<int>adj[])->int{
    // if(!adj[u].size()) // source to destination er jnno 
    // {
    //     return (u==destination); 
    // } 
    vis[u]  = true;
    inRecurtion[u]  = true;
    
    for(auto v : adj[u])
    {
        if(!vis[v]) cycle_length_count[v]=1+cycle_length_count[u];
        if(!vis[v] && CycleDfsDir(v,CycleDfsDir,adj)) return true;
        // if(!vis[v] && !CycleDfsDir(v,CycleDfsDir,adj)) return false; // source to destination er jnno 
        // else if(vis[v] && inRecurtion[v]) return false;  // source to destination er jnno 
        else if(vis[v] && inRecurtion[v]) 
        {
            ans = max(ans,(cycle_length_count[u]-cycle_length_count[v])+1);
            return true;
        }
    }
    
    inRecurtion[u]= false ; // abr clear kre dicci
    return false ; 
    // return true ;  // source to destination er jnno 
};
for(int i = 0 ; i<V ; i++)
{
    if(!vis[i] && CycleDfsDir(i,CycleDfsDir,adj)) return true; // jdi cycle thake taile true
}
return false ; // otherwise false 



// Topic - Topological Sorting Using Dfs(only done in DAG)
/*
    D irected 
    A cyclic 
    G raph 
*/
    vector<bool>vis(n+1,false);
    stack<ll>st;
    auto TopologicalSortDfs=[&](ll u , auto &&TopologicalSortDfs,vector<ll>adj[])->void{
        vis[u]=true;

        for(auto v : adj[u])
        {
            if(!vis[v]) TopologicalSortDfs(v,TopologicalSortDfs,adj);
        }
        st.push(u);// at first insert v then u cause u came first
    };

    for(int i = 1; i<=n ; i++)
    {
        if(!vis[i]) TopologicalSortDfs(i,TopologicalSortDfs,adj);
    }
    vector<ll>ans;
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    ita2(ans);




// Topic - Topological Sorting Using Bfs ( Khan's Algo)  // Alwz use this 
// Link for details - https://www.youtube.com/watch?v=uVl4ftleTes&list=PLpIkg8OmuX-LZB9jYzbbZchk277H5CbdY&index=10
/*
    indegree - Kno node e j tir ashe means direction(--->) etai hoolo indegree
*/


vector<int>indegree(Nodes,0);


    // step 1 - indegree bair kra 
for(int i = 0 ;i<Nodes ;i++ )
{
    for(auto v : adj[i])
    {
        indegree[v]++;
    }
}

queue<int>que;
// step-2 indegree 0 jegula oikhan theke suru krar jnno q te dukano
for(int i = 0 ; i<V ; i++ ) 
{
    if(!indegree[i]) que.push(i);
}

vector<int>result ; 

// step 3 bfs chalai jader indegree 0 tader que te dukano + add in result 
ll cnt = 0 ; 

while(!que.empty())
{
    int u = que.front();
    result.push_back(u);
    que.pop(); cnt++; 
    
    for(auto v : adj[u])
    {
        indegree[v]--;
        if(!indegree[v]) que.push(v);
    }
}
return (cnt==n) ? result : "cycle";
// Topic - Level wise using topology 
while(!que.empty())
{
    ll sz = que.size() ; 
    cnt++ ; 
    while(sz--)
    {
        int u = que.front();
        result.push_back(u);
        que.pop(); // cnt++; 
        for(auto v : adj[u])
        {
            indegree[v]--;
            if(!indegree[v]) que.push(v);
        }
    }
}
// Topic - Using topology use kre j node e achi tar ager node theke max count kra ;
vector<int>mx(n+1,0);
for(int i =1 ; i<=n ; i++) 
{
    if(indegree[i]==0)
    {
        que.push(i);
        mx[i]= time[i-1]; // 0 indegree jader tader tw kkno max nai tai 
    }
}
while(!que.empty())
{
    int u = que.front();

    que.pop();  
    
    for(auto v : adj[u])
    {
        mx[v] = max(mx[v],mx[u]+time[v-1]);
        indegree[v]--;
        if(!indegree[v]) que.push(v);
    }
}
// Topic - Using topologi sort get the ancestor of all Node 

// here result vector from topologi sort order ( khans algo)
vector<set<int>>vec(n);
for(auto u : result)
{
    for(auto x : adj[u])
    {
        vec[x].insert(u);
        if(adj[u].size()>0) vec[x].insert(vec[u].begin(),vec[u].end());
    }
}

vector<vector<int>>ans(n);
for(int i = 0 ; i< n ; i++ )
{
    ans[i]=vector<int>(vec[i].begin(),vec[i].end());
}
// Topic - Largest color value in any path 1857
/*
    just make a 2d matrix 
    each node is a Row , each colloum is char 
    calculate each node max value of that coloer in a path of that nodes 
*/

// Topic - Detect Cycle in Directed Graph using BFS
// Time complexity - O(v) + O(e)
// Link for details - https://www.youtube.com/watch?v=74suJP4bwf0&list=PLpIkg8OmuX-LZB9jYzbbZchk277H5CbdY&index=9&t=1s




    queue<ll>que;
    vector<ll>ans , indegree(n,0); // careful about n is oidex or 1base index 

    // step 1 - indegree bair kra 
    for(int i = 0 ; i<n ; i++ )
    {
        for(auto v : adj[i])
        {
            indegree[v]++;
        }
    }
    // step-2 indegree 0 jegula oikhan theke suru krar jnno q te dukano
    for(int i = 0 ; i<n ; i++ )
    {
        if(!indegree[i]) que.push(i);
    }

    // step 3 bfs chalai jader indegree 0 tader que te dukano shte cnt kra 
    ll cnt = 0 ; 
    while(!que.empty())
    {
        ll u = que.front();
        cnt++;
        ans.push_back(u);
        que.pop();

        for(auto v : adj[u])
        {
            indegree[v]--;
            if(!indegree[v]) que.push(v);
        }
    }

    if(cnt!=n) cout<<-1<<endl;

// Topic - Bipartite Graph using Dfs 
// Time - O(v)+O(e)
// Link for details -https://www.youtube.com/watch?v=NeU-C1PTWB8&list=PLpIkg8OmuX-LZB9jYzbbZchk277H5CbdY&index=16

/*
    Kno grapph k 2 ta coloure e colour krle jdi adjcent node
    er colour different hoi taile ta Bipartite Graph 

    Odd length Cycles are Bipartite 

    Questions hint are Bipartite graphs topic -
    Dividing a graph into 2 parts 
    Grouping a graph into 2 parts 
*/


int nodes = V; 
vector<int>colour(nodes,-1);
auto BipartiteDfs=[&](int u,vector<int>adj[],int curC,auto &&BipartiteDfs)->int{
    colour[u]=curC;
    
    for(auto v : adj[u])
    {
        if(colour[v]==colour[u]) return false ;
        if(colour[v]==-1)
        {
            int colV =1-curC;
            if(BipartiteDfs(v,adj,colV,BipartiteDfs)==false) return false;
        }
    }
    return true;
};
for(int i = 0 ; i< V ;i++ )
{
    if(colour[i]==-1)
    {
        if(BipartiteDfs(i,adj,1,BipartiteDfs)==false) return false;
    }
}
return true;



// Topic - Bipartite Graph using Bfs 
// Time - O(v)+O(e)
// Link for details - https://www.youtube.com/watch?v=cvhXZt66VhA&list=PLpIkg8OmuX-LZB9jYzbbZchk277H5CbdY&index=17



int nodes = V; 
vector<int>colour(nodes,-1);
auto BipartiteBfs=[&](int u,vector<int>adj[],int curC)->int{
    queue<int>que;
    colour[u]=curC;
    que.push(u);
    
    while(!que.empty())
    {
        int uu = que.front();
        que.pop();
        
        for(auto v : adj[uu])
        {
            if(colour[v]==colour[uu]) return false ;
            if(colour[v]==-1) 
            {
                colour[v] = 1 - colour[uu] ; 
                que.push(v);
            }
        }
    }
    return true;
};
for(int i = 0 ; i< V ;i++ )
{
    if(colour[i]==-1)
    {
        if(BipartiteBfs(i,adj,1)==false) return false;
    }
}
return true;



// Topic - Disjoint Set Union
// Time - O(v)+O(e)
// Link for details         - https://www.youtube.com/watch?v=AsAdKHkITBQ&list=PLpIkg8OmuX-LZB9jYzbbZchk277H5CbdY&index=18
// Randk & Path compression - https://www.youtube.com/watch?v=iH3XVIVzl7M&list=PLpIkg8OmuX-LZB9jYzbbZchk277H5CbdY&index=19

/*
    DSU can do 2 things 
    1. Find   ( searching x node parent )
    2. Union  ( make 2 nodes parent )
*/
/*

    Questions hints - Component 
*/

/*

    Rank -
    rank equal hole 2ta node er modde jekono ekjn k parent banabo & parent +=1 krbo 
    not equal hole jar rank beshi takhe papa banabo (cause ete union er depth kom hoi )
*/



    vector<int> parent;
    vector<int> rank;

// Find    // node er root ta bair kri de 
    int find(int x) {
        if(parent[x] == x)
            return x;
        
        return parent[x] = find(parent[x]);
    }


// Union  // just connect kre dei node er shate 
    void Union(int x, int y) {
        int x_parent = find(x);
        int y_parent = find(y);
 
    
        if(rank[x_parent] > rank[y_parent]) {
            parent[y_parent] = x_parent;
        } else if(rank[x_parent] < rank[y_parent]) {
            parent[x_parent] = y_parent;
        } else {
            parent[x_parent] = y_parent;
            rank[y_parent]++;
        }
    }

    int n = nums.size(); 
    parent.resize(n+1);
    rank.resize(n+1);
    for(int i = 0 ; i<n ; i++ ) parent[i]=i , rank[i] = 0; 
// must resize the vector size of parent and rank;


// Topic - Disjoint Set Union (Using Class) (Best)

class DSU{
    public:
        vector<int> parent;
        vector<int> rank;
        int component;
        DSU(int n){
            parent.resize(n+1);
            rank.resize(n+1);
            component = n ; 
            for(int i = 0 ; i<=n ; i++ ) parent[i]=i , rank[i] = 0; 
        }

    // Find    // node er root ta bair kri de 
        int find(int x) {
            if(parent[x] == x)
                return x;
            
            return parent[x] = find(parent[x]);
        }


    // Union  // just connect kre dei node er shate 
        void Union(int x, int y) {
            int x_parent = find(x);
            int y_parent = find(y);
    
        
            if(rank[x_parent] > rank[y_parent]) {
                parent[y_parent] = x_parent;
            } else if(rank[x_parent] < rank[y_parent]) {
                parent[x_parent] = y_parent;
            } else {
                parent[x_parent] = y_parent;
                rank[y_parent]++;
            }
            component--;
        }
        int singlecomponent() {
            return component; 
        }
};
int main()
{
    int n ; 
    DSU Name(n); // evave diclare krte hbe 
    int edge = 0 ; 
    Union(1,2) ; // means an edges contected to 1 , 2 
        edge++;

        
    if(Name.singlecomponent()==1) cout<<"Shb gula ekshate add kra"<<endl;
}


// Topic - Alada alada DSU (Using Class) EX- For alice for Bob
class DSU{
    public:
        vector<int> parent;
        vector<int> rank;
        int component;
        DSU(int n){
            parent.resize(n+1);
            rank.resize(n+1);
            component = n ; 
            for(int i = 0 ; i<=n ; i++ ) parent[i]=i , rank[i] = 0; 
        }

    // Find    // node er root ta bair kri de 
        int find(int x) {
            if(parent[x] == x)
                return x;
            
            return parent[x] = find(parent[x]);
        }


    // Union  // just connect kre dei node er shate 
        void Union(int x, int y) {
            int x_parent = find(x);
            int y_parent = find(y);
    
        
            if(rank[x_parent] > rank[y_parent]) {
                parent[y_parent] = x_parent;
            } else if(rank[x_parent] < rank[y_parent]) {
                parent[x_parent] = y_parent;
            } else {
                parent[x_parent] = y_parent;
                rank[y_parent]++;
            }
            component--; // jotota add hocche totota -- 
        }
        bool singlecomponent() {
            return component==1; 
        }
};
if(Alice.singlecomponent()==true) cout<<"only have one component";

// Topic - Perticular component er shb value er & bair kra 3018
int main()
{
    DSU dsu(n); // dsu class called !
    vector<int>cost(n,-1); // value & -1 = value
    for(auto vec : edges)
    {
        int u = vec[0];
        int v = vec[1];
        int wi = vec[2];
        int par_v=dsu.find(v) ; 
        int par_u=dsu.find(u) ; 

        if(dsu.find(v)!=dsu.find(u)) 
        {
            dsu.Union(par_u,par_v);
            cost[dsu.find(u)]=cost[par_u] & cost[par_v];
        }

        cost[dsu.find(u)]&=wi;
    }
    /*
        ekn  cost e jekono component er parent(find(i)) e pura
        component er value er & value aseh 
    */
   vector<int>ans;
    for(auto &vec : query)
    {
        int u = vec[0];
        int v = vec[1];
        // int wi = vec[2];
        int par_v=dsu.find(v) ; 
        int par_u=dsu.find(u) ; 
        if(dsu.find(u)==dsu.find(v)) // same component means ekoi poribarer shodossho 
        {
            ans.push_back(cost[par_u]);
        }
        else ans.push_back(-1); // means both have different component
    }
}


// Topic - Cycle find in undirected Graph using Dsu
// Time - O(v) + O(e)
// Link - https://www.youtube.com/watch?v=0X0lEtTkk-8&list=PLpIkg8OmuX-LZB9jYzbbZchk277H5CbdY&index=20


    vector<int> parent;
    vector<int> rank;
    
    int find(int x) {
        if(parent[x] == x)
            return x;
        
        return parent[x] = find(parent[x]);
    }
    
    void Union(int x, int y) {
        int x_parent = find(x);
        int y_parent = find(y);
 
    
        if(rank[x_parent] > rank[y_parent]) {
            parent[y_parent] = x_parent;
        } else if(rank[x_parent] < rank[y_parent]) {
            parent[x_parent] = y_parent;
        } else {
            parent[x_parent] = y_parent;
            rank[y_parent]++;
        }
    }
	int detectCycle(int V, vector<int>adj[])
	{
	    // V = Noded / Vertices 
	    parent.resize(V);
	    rank.resize(V);
	    
	    for(int i = 0 ; i< V ; i++ ) parent[i]=i , rank[i]=1; 
	    
	    
	    for(int u = 0 ; u<V ; u++)
	    {
	        for(auto v: adj[u])
	        {
	            if(u<v) // not check same things 0 to 1 then 1 to 0 
	            {
    	           int paru = find(u);
    	           int parv = find(v);
    	           
    	           if(paru==parv) return true;
    	           
    	           Union(u,v);
	            }
	        }
	    }
	    return false ; 
	}






// Topic - Dijkstra using priority queue 
// Time Comx - V*(log(v)+ E * log(v))
// LINk -https://www.youtube.com/watch?v=xQ3vjWwFRuI


/*
    pq te result er kno min value pailei insert kre then oita theke
    traverse kra hocche etar main focus 

*/
vector<int>result(V,INT_MAX);
// vector<int>result2(V,INT_MAX); //fr sec shortest path
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;// mx heap
        pq.push({0,S});
        result[S]=0;
        
        
        while(!pq.empty())
        {
            int Snode = pq.top().second;
            int Sdis  = pq.top().first ; 
            pq.pop(); // log(V)
            
            for(auto &vec : adj[Snode]) // number of Eges 
            {
                int negnode = vec[0];
                int dis     = vec[1];
                
                if(Sdis+dis<result[negnode])
                {
                    result2[negnode] = result[negnode];// fr 2nd shortest path
                    result[negnode]=Sdis+dis ; 
                    pq.push({Sdis+dis,negnode}); // log(V)
                }
                else if(result2[negnode]>Sdis+dis && result[negnode]!=Sdis+dis)
                {
                    result2[negnode]=Sdis+dis ; 
                    pq.push({Sdis+dis,negnode}); // log(V)
                }
            }
        }
        
        return result; 

// Topic - edge[i] atleast ekta (from 0 to n er)shortest path er shate add thakle return true ( 3123 )
/*

    ekane just 0 to every node er ekta shortest path bair krbo
    then n to every node er ekta shortest path bair krbo
               [{u,v,wi}]
    edge[i] = [ {1,2,5}] ; 
    then just (0 to shortest paht u) + wi + (n to shortest path v) == 0 to n er shortest path holei true

*/
// Topic - Dijkstra using set 
// Time Comx - V*(log(v)+ E * log(v))
// LINk -https://www.youtube.com/watch?v=3qIoYIMidpc&list=PLpIkg8OmuX-LZB9jYzbbZchk277H5CbdY&index=25


        vector<int>result(V,INT_MAX);
        set<pair<int,int>>st;
        st.insert({0,S});
        result[S]=0;
        
        
        while(!st.empty())
        {
            auto &it    = *st.begin(); // & use na krle o ac hbe // used just for save time 
            int Snode   = it.second;
            int Sdis    = it.first ; 
            st.erase(it);
            
            for(auto &vec : adj[Snode])
            {
                int negnode = vec[0];
                int dis     = vec[1];
                
                if(Sdis+dis<result[negnode])
                {
                    if(result[negnode]!=INT_MAX) st.erase(st.find({result[negnode],negnode})); // advantage of using set to erase those node which is maximum then current 
                    result[negnode]=Sdis+dis ; 
                    st.insert({Sdis+dis,negnode});
                }
            }
        }
        
        return result; 

// Topic - Printing shortest path using Dijkstra
// Time Comx - V*(log(v)+ E * log(v))
// LINk -https://www.youtube.com/watch?v=icVJUN45f1E&list=PLpIkg8OmuX-LZB9jYzbbZchk277H5CbdY&index=27

    ll n , m ; 
        n = 5 , m = 6 ; 
        vector<std::vector<int>> edges = {
        {1, 2, 2},
        {2, 5, 5},
        {2, 3, 4},
        {1, 4, 1},
        {4, 3, 3},
        {3, 5, 1}
    };

    unordered_map<int, vector<pair<int, int>>> adj;
        for(auto &vec : edges) {
            int u = vec[0];
            int v = vec[1];
            int w = vec[2];
            // value[{u,v}]= w;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
            
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> result(n+1, INT_MAX);
        vector<int> parent(n+1);
        
        for(int i = 1; i<=n; i++) {
            parent[i] = i;
        }
        
        int source = 1 ;
        result[source] = 0; // // source to source dis = 0 
		pq.push({0, source});

		while(!pq.empty()) {

		    int d  = pq.top().first;
		    int node = pq.top().second;
		    pq.pop();

		    for(auto &it : adj[node]) {

    			int adjNode = it.first;
    			int dist    = it.second;
    
    			if(d + dist < result[adjNode]) {
    
    			    result[adjNode] = d + dist;
    			    pq.push({d+dist, adjNode});
    			    parent[adjNode] = node;
    
    			}

		    }

		}
        // jdi bole source to 4 er show kro then just 
        // return result[4] ; dilei hbe nicher sula source to all node er jnno 

        vector<int> path;
        int node = n;
        
        if(result[node] == INT_MAX)
        cout<<-1<<endl;
        
        while(parent[node] != node) {
            path.push_back(node);
            node = parent[node];
        }
        path.push_back(1);
        reverse(begin(path), end(path));
        for(auto u : path ) cout<<u<<" ";
        cout<<endl;

        
// Topic - Dijkstra using char to char shortest path 2D vector fill up 
/*
        It will fill up all source char to destination char shortest path 
        a b c d e f g h i j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
        0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
        0
        1
        2
        3
        4
        .
        .
*/

unordered_map<char,vector<pair<char,int>>>adj; // first fill up adj matrix like this 
vector<vector<long long>>result(26,vector<long long>(26,INT_MAX));

auto charDijkstra2DfillUp=[&](char source)->void{
    priority_queue<pair<int,char>, vector<pair<int,char>>,greater<pair<int,char>>> pq;

    int sour = source ;
    result[sour-'a'][sour-'a'] = 0; // // source to source dis = 0 
    pq.push({0, sour});

    while(!pq.empty()) {

        int d  = pq.top().first; // cost 
        int node = pq.top().second; // char 
        pq.pop();

        for(auto &it : adj[node]) {

            int adjNode = it.first; // char 
            int dist    = it.second; // cost 

            if(d + dist < result[sour-'a'][adjNode-'a']) {

                // result[adjNode]
                result[sour-'a'][adjNode-'a'] = d + dist; // source to adjnode 
                pq.push({d+dist, adjNode});  
                // parent[adjNode] = node;
            }

        }

    }
    return ; 
};
for(int i = 0 ; i< source.size() ; i++ )
{
    charDijkstra2DfillUp(source[i]);
}

long long allsource_to_destination_shortestpath = 0 ; 
for(int i = 0 ; i< source.size() ; i++ )
{
    if(result[source[i]-'a'][target[i]-'a'] == INT_MAX) return -1 ; 
    allsource_to_destination_shortestpath+=result[source[i]-'a'][target[i]-'a'] ; 
}
// Topic - Using Diasktra get the maximum path value 
priority_queue<pair<double,int>>pq; // min heap
int source = start_node ; 
pq.push({0,start_node});
result[start_node]=0;


while(!pq.empty())
{
    int Snode = pq.top().second;
    double Sdis  = pq.top().first ; 
    pq.pop(); // log(V)
    
    for(auto &vec : adj[Snode]) // number of Eges 
    {
        int negnode = vec.first;
        double dis     = vec.second;
        
        if(Sdis+dis>result[negnode])
        {
            result[negnode]=Sdis+dis ; 
            pq.push({Sdis+dis,negnode}); // log(V)
        }
    }
}

return result ; 
// Topic -  BFS di level checking in 2D matrix 

queue<pair<int,int>>que;
que.push({0,0});
grid[0][0]=1;

int level = 0 ; 
while(!que.empty())
{
    int sz = que.size();
    while(sz--)
    {
        int r = que.front().first;
        int c = que.front().second;
        que.pop();
        if(r==n-1 && c==n-1) return level+1;
        // cout<<r<<" "<<c<<endl;
        for(auto &u : directions)
        {
            int x = r+u[0];
            int y = c+u[1];
            if(safe(x,y) && !grid[x][y]) 
            {
                // cout<<safe(x,y)<<endl;
                que.push({x,y});
                grid[x][y]=1;
            }
        }
    }
    level++;
}


// Topic - showing Each node ancestor 
Time - v*(v+e) ; 
vector<vector<int>>ans(n);
    auto dfs=[&](int ancestor,int u,vector<int>adj[],auto &&dfs)->void{
        for(auto v : adj[u])
        {
            if(ans[v].empty() ||ans[v].back()!=ancestor) // .empty na dile .back()  e code fati jabe // back di repeated value kina check kra hocche 
            {
                ans[v].push_back(ancestor);
                dfs(ancestor,v,adj,dfs);
            }
        }
    };  
    for(int i =0 ; i<n ; i++) // v
    {
        if(adj[i].size()>0) dfs(i,i,adj,dfs); // v+e
    }

// Topic - Bfs level checking

int level = 0 ,cycle = 0 ; 
while(!que.empty())
{
    int sz = que.size();
    while(sz--)
    {
        int u = que.front();
        que.pop(); cycle++;
        for(auto v : adj[u])
        {
            indegree[v]--;
            if(!indegree[v]) que.push(v);
        }
    }
    level++;
}

return (cycle==n)? level:-1;


// Topic - Checking matrix all same value and the total size of same value 
/*
    1 0 1 1
    1 1 0 0

    2 0 3 3
    2 2 0 0

    mp[2] = 3 ;
    mp[3] = 2 ;

*/

auto getsize=[&](ll r,ll c,ll id,auto &&getsize)->ll{
    if(r<0 || c<0 || r>=n || c>=n || v[r][c]!=1) return 0 ; // v[r][c]!=(j value kujtesi oita likbo )
    v[r][c]=id ; 

    ll cnt = 1 ; 
    for(ll i = 0 ; i<4 ; i++)
    {
        ll x = r+ dx[i];
        ll y = c+ dy[i];
        cnt+=getsize(x,y,id,getsize);
    }
    return cnt ; 
};

int id = 2 ; 
map<int,int>mp; 
for(int i  = 0 ; i< n ; i++ )
{
    for(int j = 0 ; j< n ; j++ )
    {
        if(v[i][j]==1) 
        {
            int size = getsize(i,j,id,getsize);
            mp[id]=size ; 
            id++;
        }
    }
}





// Topic - Floyd Warshall Algorithm
int n = grid.size();

for(int i=0 ; i< n ; i++ )
{
    for(int j = 0 ; j< n ; j++ )
    {
        grid[i][j]=1e9 ;
    }
}

for(int via = 0 ; via < n ; via++)
{
    for(int i=0 ; i< n ; i++ )
    {
        for(int j = 0 ; j< n ; j++ )
        {
            grid[i][j]=min(grid[i][j],grid[i][via]+grid[via][j]);
        }
    }
}



// Topic - Bellman-Ford Algorithm O(v*e)


vector<int>ans(V,1e8);
ans[source]=0;

for(int i =1 ; i<= V-1 ; i++)
{
    for(auto &vec : edges)
    {
        int u = vec[0];
        int v = vec[1];
        int w = vec[2];
        
        if(ans[u]!=1e8 && ans[u]+w< ans[v])
        {
            ans[v] = ans[u]+w ; 
        }
    }
}

for(auto &vec : edges)
{
    int u = vec[0];
    int v = vec[1];
    int w = vec[2];
    
    if(ans[u]!=1e8 && ans[u]+w< ans[v])
    {
        return "cycle" ; 
    }
}

return ans; 
// Topic - Minimum Spanning Tree 

/*
        Tree means wont have a cycle
        also it should be have n-1 edges and also connected
*/
// Topic - Prim's Algorithm (Minimum Spanning Tree) O(e*(logE + loge))

/*
    Intuition
    to reach any node taking smallest weight path <-

    Ques 
        minimum cost to make all points connected
*/
int n = V; 
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
pq.push({0,0});
vector<bool>isMST(n,false);
int sum = 0 ; 
while(!pq.empty()) // E
{
    auto p = pq.top();
    pq.pop();   // log(E)
    
    int wt   = p.first;
    int node = p.second;
    
    if(isMST[node]) continue;
    
    isMST[node] = true ; 
    
    sum+=wt ; 
    
    for(auto &vec : adj[node])
    {
        int neg = vec[0]; // pair hole .first . second
        int nWT = vec[1];
        if(!isMST[neg]) pq.push({nWT,neg}); // log(E)
    }
}
return sum ; 





// Topic - Kruskal's Algorithm (Minimum Spanning Tree)
/*
    graph e first e weight gula sort krbo 
    then choto gula connect krbo dsu di shate sum e wei add krbo
*/
int main()
{
    int n = V; 
    DSU dsu(n);
        vector<vector<int>> vec;
        // O(v+e)
        for(int i = 0; i<V; i++) {
            
            for(auto &temp : adj[i]) {
                
                int u = i;
                int v = temp[0];
                int d = temp[1];

                vec.push_back({u, v, d});
                
            }
            
        }
    
    auto cmp=[&](vector<int>v1,vector<int>v2){
        return v1[2]<v2[2];
    };
    sort(vec.begin(),vec.end(),cmp);
    
    auto Kruskal=[&](vector<vector<int>>&vec)->int{
        int sum = 0 ; 
        // O(E*4alpha)
        for(auto &tec : vec)
        {
            int u = tec[0];
            int v = tec[1];
            int w = tec[2];
            
            if(dsu.find(u)!=dsu.find(v)){
                    dsu.Union(u,v);
                    sum+=w;
                //  cout<<sum<<endl;
            } 
        }
        return sum ; 
    };
    
    return Kruskal(vec);
}


// Topic - Strongly Connected Component ("Kosaraju's Algorithm")
// Link - https://www.youtube.com/watch?v=E6DeC0Zpdns&list=PLpIkg8OmuX-LZB9jYzbbZchk277H5CbdY&index=38
/*
    return the component which r strongly connected 
    strongly connected r those which are connected from both side
    means

    A----->B--->c
   /|\     |
    |______|

    In this grapg A connected with B also B connected with A
    so the component A & B are strongly connected
    But C is not cause 
    B connected with C 
    but C not connected with B 
    So B is in another component 
    So you have to return the component which are strongly connected
    (A,B) & (C) !

*/

/*
    Order -> stack   -> From orginal Graph  O(v+e)
    reverse graph edges O(v+e)
    Dfs on Order O(v+e)
*/

int kosaraju(int V, vector<vector<int>>& adj)
{
    //Step-1 Store order of Dfs in Stack 
    // Topology sort 
    stack<int>st;
    vector<bool>vis(V,false);
    
    auto topologydfs=[&](int u,vector<vector<int>>&adj,auto &&topologydfs)->void{ // i, adj, vis,st 
        vis[u] = true ; 
        for(auto &v : adj[u])
        {
            if(!vis[v]) topologydfs(v,adj,topologydfs); // first all in 
        }
        st.push(u); // then me in 
    };
    
    for(int i=0 ; i<V ; i++)
    {
        if(!vis[i]) topologydfs(i,adj,topologydfs);
    }
    
    // step-2 make a reverse Graph 
    vector<vector<int>>adjreverse(V);
    for(int u = 0 ; u<V ; u++)
    {
        for(int &v : adj[u])
        {
            adjreverse[v].push_back(u);
        }
    }
    
    // step-3 Call dfs based on Stack order(Topology order) 
    
    int countScc = 0 ;
    vis =  vector<bool>(V,false);
    
    auto SCC=[&](int u,vector<vector<int>>&adjreverse,auto &&SCC)->void{
        vis[u]  = true ;
        // cout<<u<<" " // this r the node which r included in this component
        for(auto &v : adjreverse[u])
        {
            if(!vis[v]) SCC(v,adjreverse,SCC);
        }
    };
    
    while(!st.empty())
    {
        int node = st.top();
        st.pop();
        
        if(!vis[node]) {
            SCC(node,adjreverse,SCC), countScc++;
            // cout<<endl; // to node print 
        }
        
    }
    
    return countScc; 
    
}



// Topic - Euler Path 

/*
    Start == End 
*/

/*
    Eulerian Grapph 
    . Have both 
    . All edges visited once 
    . All node degree == Even 

    Semi Eulerian Grapph 
    . All edges visited once 
    . Have Euler path but not have euler circuit 
    . start degree == odd & end degree == odd 
    . rest nodes degree are Even
    . have only two Node Odd degree 

*/


	int isEulerCircuit(int V, vector<int>adj[]){

	    auto DFS=[&](int u, vector<bool>&vis,auto &&DFS)->void{
	        vis[u] = true ; 
	        for(auto v : adj[u])
	        {
	            if(vis[v]==false) DFS(v,vis,DFS);
	        }
	    };
	    
	    
	    auto isconnected=[&](int v)->bool{
	        int nonZerovertices = -1 ; 
	        
	        for(int i = 0 ; i< V ; i++)
	        {
	            if(adj[i].size()!=0) {
	                nonZerovertices = i ; break ; 
	            }
	        }
	        vector<bool>vis(V,false);
	        DFS(nonZerovertices,vis,DFS);
	        
	        
	        // check if all non zero degree vertices are visited 
	        for(int i = 0 ; i<V ; i++ )
	        {
	            if(vis[i]==false && adj[i].size()>0) return false ;
	        }
	        
	        return true ; 
	    };
	    if(isconnected(V) == false) return 0; //Non-Eulerian
	    
	    
	    // count odd degree vertices 
	    int odd  = 0 ; 
	    for(int i = 0 ; i< V ; i++)
	    {
	        if(adj[i].size()%2)
	        {
	            odd++;
	        }
	    }
	    if(odd >2 ) return 0 ;  // NONE
	    
	    if(odd == 2 ) return 1 ;  // EP 
	    
	    return 2 ; // EC // ODDdegree count must zero 
	}