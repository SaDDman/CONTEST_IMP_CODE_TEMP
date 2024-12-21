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
Topic - OPERATORS 
       1. & Operators 
       2. Or operators
       3. XOr operators
       4. negation Operator
TOPIC -Check ith bit set ? 
Topic - Bit by bit doing AND , OR , XOR etc 
Topic - how many set bit in n in Even//ODD(after per x) position
Topic - From 0 to x calcule every position number of sets
Topic - Longest common prifix from value left to value right
Topic - N is a power of 2 or not ? 



Topic - About bitset
Topic - Right shift operator 
Topic - Left shift operator 
Topic - Using bit operation to get value is Even or Odd?
Topic - NUmber of set bits 
Topic - Given n and i tell set or not (1 or 0 on ith bit).
Topic - In n if ith bit isnot set then set it !
Topic - Clear the ith bit if set (if ith bit is one then make it 0 then print n)
Topic - Clear the last bit if set (if ith bit is one then make it 0 then print n)
Topic - Is n is power of two?
Topic - cnt total set of n
Topic - Every int appers twice , One int appers one -> BIG 0(n)  Not nlogn
Topic - Given N int , print the xor of all subsets 
Topic - Get the all subsets  of array 
Topic - Bit masking 
Topic - using bit to know multiple number have same  mod or not ? 
Topic-  Leftmost bit (last er ktw tomo bit set) works -> O(1)
Topic-  Rightmost bit( first er ktw tomo bit set)
Topic - Collect maximum AND value in a sub array 
Topic - Collect maximum OR value in a sub array
Topic - adding value as a or and delete bit or value 
Topic - Important function 
Topic - Inclution & EXclution 
Topic - Bitset Function
Topic - Flip number set bit then print the number


Topic - Prefix Xor 
Topic - count perticular bits  of all numbers 
Topic - Prefix Or caltulate 

Topic - calculate OR value between any number to any number, when range is greater then 1e9 
Topic - To check any l to r AND value using bit in a O(32) -> 

Topic - Shift bitset bit to 2D vector 
Topic - Collum wise increase value from this -> 

Problem - 
1. In the vector print the number whiche have 1 occurence where rest numbers occurence are 2!
2. Print 1 to n xor in Big 0(1)
3. Given L  and R  , tell the xor between L to R 

*/

/*
Observation - > 
Binary of 10

    2|10      0
    ---------
    2|5       1
    ---------
    2|2       0
    ---------       
    |1        0      

so binary of 10 is 1010 

binary to decimal 
Always right to left <----
(1011)-->( )
 |||| 2     10
 ||||
 ||||------------>1*2^0 = 1
 |||
 |||-------------> 1*2^1 = 2
 ||
 ||--------------> 0*2^2 = 0
 |
 |---------------> 1*2^3 = 8
 -----------------------------
                           (11)
                              10

*/



Topic - About bitset
//     \|/here must be any number no ll and int will be worked here ! 
bitset< 31 > t = u ; 
// we can or , xor any operation can do by loop 
f(i,0,31)
{
   t[i]= t[i] ^ 1;
}
ll dup = t.to_ulong() ; 
2D vector e bit rakha 
vector<bitset<31>>vec(n);
f(i,0,n) 
{
    cin>>v[i];
    bitset<31> tmp = v[i];
    vec[i]=tmp;
}
print 2d bitset 
f(i,0,n)
{
    rf(j,30,0)
    {
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
}
Topic - count perticular bits  of all numbers 
f(i,0,64)
    {
        ll cnt = 0 ; 
        f(j,0,n)
        {
            if(bit[j][i]==1) cnt++;
        }
        cnt--;
        ll value = (cnt*(cnt+1))/2;
        if(value)
            ans+=((1<<i) * value);
    }
/*
to know what the value is 
we have use this function ->  .to_ulong() ;  otherwise cant see the ll and int
form of t 
*/
ll dup = t.to_ulong() ; 
Topic - Bitset Function
bitset<5> t; 

t.reset();
t.set();
ll totalset = t.count();
t.flip(); // 1 k 0 kre dibe 0 k 1 
cout<< t <<endl;

bitset<32> tt(string("101"));
cout<<tt.to_ullong()<<endl;



Topic - OPERATORS 
1. & Operators 

to calculate some number AND the value of a AND will decrease 
not increase  like 15&14 = 14 it decrease from 15  

1. All one is one 
2. All zero is zero

    0101 (decimal 5)
AND 0011 (decimal 3)
  = 0001 (decimal 1)

    0011 (decimal 3)
AND 0010 (decimal 2)
  = 0010 (decimal 2)


Topic - 2. Or operators

1.Any one is one
2.All zero is zero 

    0101 (decimal 5)
 OR 0011 (decimal 3)
  = 0111 (decimal 7)

    0011 (decimal 3)
 OR 0010 (decimal 2)
  = 0011 (decimal 3)


Topic - 3. XOr operators

1. Even one is zero
2. Odd  one is ONE

    0101 (decimal 5)
XOR 0011 (decimal 3)
  = 0110 (decimal 6)

    0011 (decimal 3)
XOR 0010 (decimal 2)
  = 0001 (decimal 1)

If same number xor then ans will zero 


Topic - 4. negation Operator
 ¬ or ~
1 to 0
0 to 1 
it Flip the bits 
 a = 101 
¬a =010
Topic - Left shift & right shift 

void leftandrightshift()
{
    int n , m ,k; cin>>n;
    bitset<10> leftshift = n ; 
    cout<<leftshift<<endl;
    leftshift=leftshift<<1; // all bit shift 1 left 
    leftshift=leftshift*(pow(2,1)); // all bit shift 1 left  // same
    cout<<leftshift<<endl;


    bitset<10> rightshift = n ; 
    cout<<rightshift<<endl;
    rightshift=rightshift>>1; // all bit shift 1 right 
    // leftshift=leftshift/(pow(2,1)); // all bit shift 1 right  // same
    cout<<rightshift<<endl;  
}   

Topic - Right shift operator 
        2 1 0    
a= 5 -> 1 0 1
a>>1 ->  (1 0)
              2
         3 2 1 0
a= 10 -> 1 0 1 0
a>>3  ->    (1 0)
                 2

10>>2 is nothing but 10 divide by 2 twice , means divided by 2^2 
10>>3 is nothing but 10 divide by 2 trice , means divided by 2^3
10/2 = 5 /2 = 2/1 = 1 (ans)



Topic - Left shift operator 
         3 2 1 0    
a= 5 ->    1 0 1
a<<1 -> (1 0 1 0)
                 2
          6 5 4 3 2 1 0
a= 10 ->        1 0 1 0
a<<3  ->  1 0 1 0 0 0 0
                      2

10<<2 is nothing but 10 multiple by 2 , means multiple by 2^2 
10<<3 is nothing but 10 multiple by 3 , means multiple by 2^3
10*2^3 = 80



1. In the vector print the number whiche have 1 occurence where rest numbers occurence are 2!

vector<int>v={2,1,2,4,5,4,5};
xoor = 0;
f(i,0,v.size())
{
    xoor^= v[i];
}
cout<<xoor<<endl;


a= 5 , b = 7 ; 
swap it !
a^a^b = b
b^b^a= a 
a= 7    , b = 5 


2. Print 1 to n xor in Big 0(1)

Exm - 1 to 5 ans is 1


1^2^3^4^5 = 1 

so if we observe 
n= 1                  1
n = 2 ^1              3
n= 3^2^1              0
n=4^3^2^1             4

n=5^4^3^2^1           1
n=6^5^4^3^2^1         3
n=7^6^5^4^3^2^1       0
n=8^7^6^5^4^3^2^1     8


so the pattern is n%4 == 1 , ans = 1
so the pattern is n%4 == 2 , ans = n+1
so the pattern is n%4 == 3 , ans = 0
so the pattern is n%4 == 0 , ans = n

3. Given L  and R  , tell the xor between L to R 

3 to 6 (imagine)
so we can get the xor of R 
and also get the  xor L

so if we see 
xor of r =  6 = 1^2^3^4^5^6
to delete 1^2 from 6 so that we got 3^4^6 in range of 3 to 6 
we have to delete from 1 to 2 range from 6
so nothing but xor(6) ^ xor(2) ;
that means xor(r)^xor(l-1);

    1^2^3^4^5^6
    1^2
   ^------------
        3^4^5^6


Topic - Using bit operation to get value is Even or Odd?

if(n&1==0) even 
else odd 

cause when we see odd number binary
13 -> 1101  11->1011 (so last dit is 1)
when we see even number binary
12-> 1100  10->1010 (so last bit is 0 ) 
so when we and one with odd number 
last bit of odd number and one's bit 1 
give output 1 thats why n&1==1 is odd 
ans n&1==0 is even (cause 0 &1 is 0)


Topic - Given n and i tell set or not (1 or 0 on ith bit).

so our observation is ,
n= 10 ;
i =4 ;

n = 1010
    1000
    ----
    1000 
int main()
{
   ll n , j;
   cin>>n>>j;
   int mask = (1<<j); ( shifting 1 to jth bit then & that with n)
   bool set = (mask & n);
   cout<<set<<endl;
   if(set) YES 
   else NO 

}


Topic - In n if ith bit isnot set then set it !

do mask then Or it 

int main()
{
   ll n , j;
   cin>>n>>j;
   int mask = (1<<j); //( shifting 1 to jth bit then & that with n)
   n=n|mask ;
   cout<<n<<endl;

}

Topic - Clear the ith bit if set (if ith bit is one then make it 0 then print n)

int main()
{
   ll n , j;
   cin>>n>>j;
   ll mask = ~(1LL<<j); //( shifting 1 to jth bit then negation the mask)
   n=n&mask ;
   cout<<n<<endl;

}


Topic - Clear the last bit if set (if ith bit is one then make it 0 then print n)

n&(n-1) 


Topic - Is n is power of two?
void solve() // O(1)
{
    ll n ; cin>>n;
    if(n<=0) NO  ;
    else if((n&(n-1)) == 0 ) YES ;  // by doing minus erase set bit of n // if n is a powr of 2 then it will have only one set bit // so erasing it will be zero
    else return NO  ; 
}   

Or 

void solve() // com - > log(n)
{
    ll n ; cin>>n;
    ll x = __lg(n);
    ll value = (1LL<<x);

    if(value == n) YES 
    else NO 
    
}  

OR , 
 int value = 0 , shift = 0 ; 
if(n>0)
{
    value = __lg(n);
    shift = (1<<value);
}
if(n<=0) return 0 ;
else if(shift==n) return 1;
else return 0 ;



Topic - cnt total set of n
int cnt = 0;
while(n!=0)
{
    if(n&1==1) cnt++;
    n=n>>1;
}
cout<<cnt<<endl;


int cnt = 0;
while(n!=0)
{
    n=n&(n-1);
    n=n>>1;
}
cout<<cnt<<endl;
Topic - Every int appers twice , One int appers one -> BIG 0(n)  Not nlogn

int main()
{
   vector<ll>v={2,5,4,6,4,6,2,7};


   ll XOR = 0;

   for(int i = 0 ; i < v.size() ;i++ )
   {
      XOR^=v[i];
   }

   // after xor all element we have single element xor means 7^5= 2 which bit is 010
  // 2 which bit is 010 ,in this binary 1 index is 1 so we need element which have 1 index bit is zero and 1

   
   int cnt = 0 ;  /// get the index of binary of 2 
   while(XOR!=0)
   {
      if(XOR&1==1) break;
      cnt++;
      XOR=XOR>>1;
   }


   ll XOR1= 0 , XOR2 = 0 ; /// element who have 1 bit in 1st index and 0 bit in 1st index 

   for(int i = 0 ; i < v.size() ;i++ )
   {
      if(v[i]&(1<<cnt))
         XOR1=XOR1^v[i];
      else XOR2=XOR2^v[i];
   }
   cout<<XOR1<<" "<<XOR2<<endl;

}

Topic - Given N int , print the xor of all subsets 
Answer will be 0 cause if we get all so the subsets 
then every element will be even number of times 
so we no even number of eny elemets xor is zero 
thats why answer is zero! 


Topic - Get the all subsets  of array 

int main()
{
   vector<ll>v={3,2,4};
   for( int i = 0 ;i<(1<<v.size());i++)
   {
      vector<int>sbset ;
      for(int bit = 0 ; bit<v.size() ;bit++)
      {
         if(i & (1<<bit)) // just checking is the bit is set or not // if set then insert
         {
            sbset.push_back(v[bit]);
         }
      }
      ita2(sbset);
   }
   
}

Topic - Bit masking 

ll n = 0 ;
add(5) ---->n|=(1<<5);
add(2) ---->n|=(1<<5);
add(1) ---->n|=(1<<5);
add(5) ---->n|=(1<<5);
add(3) ---->n|=(1<<5);
remove(5) ---->n|=(1<<5);
add(5) ---->n|=(1<<5);
print (adding elements )

to remove 5 --> 
int mask = ~(1<<5); //( shifting 1 to jth bit then negation the mask)
n=n&mask ;

for(auto i = 0 ; i< 60 ; i++)
{
   if(n&(1<<i)) cout<<i<<endl;
}

int main()
{
   ll n = 0 ;
   n=n^(1<<5);
   n=n^(1<<1);
   // ll mask = ~(1<<5); 
   // n=n&mask ;
   n=n^(1<<3);
   cout<<n<<endl;
   for(auto i = 0 ; i< 60 ; i++)
   {
      if(n&(1<<i)) cout<<i<<endl;
   }

}



Topic - using bit to know multiple number have same  mod or not ? 


      
0 1 0 1
0 1 1 1
1 0 1 1
here 2^0 is same but 2^1 is not so we can say that by 
dividing all number by 2^2 we get diffent mod value ! 


Topic-  Leftmost bit (last er ktw tomo bit set)
ll lastb= __lg(x);
int clz(unsigned long long N) 
{
    return N ? 64 - __builtin_clzll(N) : -inf;
}
int clz(int N) 
{
    return N ? 32 - __builtin_clz(N) : -inf;
}

Topic-  Rightmost bit( first er ktw tomo bit set)
// Time Complexity: O(log2N)
class gfg // class purata neya lagbe 
{
    public:
        unsigned int getFirstSetBitPos(int n)
        {
            return __lg(n & -n) + 1;
        }
};
void solve()
{
    gfg g; // this must be declare
    ll n = 7;
    cout << g.getFirstSetBitPos(n);
}




Topic - Collect maximum AND value in a sub array



ar[1,3,4,5,6,3,7,8];

ans hbe - >  [8]

cause element 1 tar pr  ekta and krte thakle man komte thake 
jtw minimus value neya jai ans ttw max ashe GCD er mtw
tai array te j value max ase oi 1 ta value e nise 


Topic - Collect maximum OR value in a sub array

ar[1,3,4,5,6,3,7,8];

ans - > shb value neya 

Topic - adding value as a or and delete bit or value 




Topic - Important function 

void solve()
{
    ll n,m ; cin>>n;
    ll totalone = __builtin_popcount(n); // O(1)
    ll evenoddnumberofONEbit = __builtin_parity(n);
    ll shamnerzerokoita = __builtin_clz(n);
    ll shamnerzerokoitalong = __builtin_clzll(n);
    ll sheshzerokoita = __builtin_ctz(n);
    ll sheshzerokoitalong = __builtin_ctzll(n);

    cout<< evenoddnumberofONEbit <<endl;
}   

Topic - Inclution & EXclution 
n and m shonkok number thakbe ja di dekha lagbe 
1 to n  er modde ktwgula number m shonkok number gula di divide jai na 

Input 
n  m 
15 3 
2 3 5

ans - 4 
odd hole ++
even hle --
LCMa+LCMb+LCMc-(aLCMb)-(bLCMC)-(cLCMa)+ (aLCMbLCMc) ( ata all posbl subset di bair kra lage ja (2^n )-1)
vector<vector<int>>ans;
            ll real = 0;
            for(int i=0;i<(1<<m);i++)
            {   
                vector<int>vec;
                ll LCM = 1; 
                for(int j=0;j<n;j++)
                {   
                    if((1<<j)&i) 
                    {
                        vec.push_back(v[j]); 
                        LCM = lcm(v[j],LCM);
                    }
                }
                ans.push_back(vec);
                // ita2(vec)
                if(!vec.size()) continue;
                if(vec.size()%2) real+=(n/LCM) ; 
                else real-=(n/LCM);
                // cout<<real<<" "<<vec.size()<<endl;
            }
            // ita2d(ans);

    cout<<n-real<<endl;


Topic - NUmber of set bits 

ll n ; cin>>n;
ll cnt = 0;
while(n>0) // nlogn bcz dividing by 2 each time n>>1
{
    if((n&1)>0) cnt++;
    n=n>>1;
}
cout<< cnt <<endl;

OR , more effecient way  ( less complexity + speed )

void solve()
{
    ll n ; cin>>n;
    ll cnt = 0;
    while(n>0) // complexity -nuber of set bit 
    {
        cnt++;
        n=n&(n-1); // each time one set bit will remove by this 
    }
    cout<< cnt <<endl;
}


Topic - Prefix Xor 

pre[r]^pre[l-1]; // (pre[0] to pre[l-1] )^ (pre[0] to pre[l-1]) e shb 0 hoi jabe r thakbe l to r just 



Topic - calculate or between l to r when range is greater then 1e9 
ll sum ( ll l , ll r)
{
    bitset<32> fst = l;
    bitset<32> sec = r;
    ll pos = 0  ;
    ll flag = 0 ; 
    for(int i = 31 ; i >=0 ; i--) 
    {
        if(fst[i]==1 && sec[i]==0 ||fst[i]==0 && sec[i]==1 )
        {
            pos = i ; 
            if(fst[i]==1) flag = 1 ; 
            else flag = 0 ; 
            break;
        }
    }
    ll value = (1<<pos);
    value--;
    if(!flag ) return r|=value;
    else return l|=value;
}




Topic - Shift bitset bit to 2D vector 

vector<bitset<31>>vec(n);
vector<vector<ll>> tec(n,vector<ll>(32,0));
vector<ll>inc(32);

f(i,0,n)
{
    fr(j,0,31)
    {
        if(vec[i][j]==1)
        {
            tec[i][j]=1 ;//++inc[j];
        }
        else tec[i][j]=0;
    }
}


Topic - Collum wise increase value from this -> 

1 1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
0 1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
1 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
0 1 0 1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
0 1 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 

f(i,0,n)
{
    fr(j,0,31)
    {
        if(vec[i][j]==1)
        {
            tec[i][j] = ++inc[j];
        }
    }
}

to this -> 
1 1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
0 2 2 2 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
2 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
0 3 0 3 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
0 4 0 0 0 2 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 


Topic - To check any l to r AND value using bit in a O(32) -> 
ll total = 0;
fr(i,0,31)
{
    if(tec[left][i] && tec[mid][i])
    {
        if(tec[mid][i]-tec[left][i]+1==(mid-left+1)) total+=(1<<i);
    }
}


// Topic - Flip number set bit then print the number
int findComplement(int num) 
{
    bitset<32>t = num ;

    ll shift = __lg(num);
    ll value = num ; 
    f(i,0,shift+1)
    {
        // cout<<t[i]<<" ";
        if(t[i]==1)
        {
            ll mask = ~(1LL<<i); //( shifting 1 to jth bit then negation the mask)
            value=value&mask ;
        }
        else 
        {
            int mask = (1<<i); //( shifting 1 to jth bit then & that with n)
            value=value|mask ;
        }
    }
    return value ; 
}



// TOPIC -Check ith bit set ? 
ll n ; 
ll value = n ; 
boot set = (value >>ithbit) & 1 ; 
// make ith bit set 
 value = value^(1<<i); 



 

// Topic - Bit by bit doing AND , OR , XOR etc 

// suppose if we do xor nums^xor then 

nums = 10101 ; 
x = ? 

if x == 00011;

then by doing this we can simply get the XOR , OR , AND values ;
IF we directly do xor then we get 
    10101
    00011
    -----
    10110
Then if we do bit by bit then we will get the same -> 

    10101
    00001
    -----
    10100  // <- we will use this 

then again 
    10100
    00010
    -----
    10110



//Topic - how many set bit in n in Even//ODD(after per x) position

void solve()
{
    ll n,x ; cin>>n >>x; 
    while(n!=0)
    {
        if((n>>x-1)&1) bug
        else NO 
        C(n)
        n= n>>x; 
    }
    
} 



// Topic - From 0 to x calcule every position number of sets

/*
    
*/
    8 4 2 1
_________________
    0   0   0  0-|
    0   0   0  |1|
    0   0  |1|  0|
    0   0  |1| |1|--> // each have (__lg(n)<<1) /2 bits 
    0  |1|  0  0 |   //          = 8 /2 = 4 bits 
    0  |1|  0  |1|  //          arr -> 5 4 4 4 
    0  |1| |1|  0|
    0  |1| |1| |1|--
       ___________
   |1| |0   0  0 |<-8 // last bit which have the fourth bit set
   |1| |0   0  1 |<__    // 12-8+1 = 5 // 4th bit have five setbit
   |1| |0   1  0 |  |  // arr -> 5 0 0 0 
   |1| |0   1  1 |  |_______
   |1| |1   0  0 |<- 12     |
       ----------           |
  |___________|             |
                            |
    arr -> 5 4 4 4          |_______________________
    /*                                              |
    must need atleast as 4 bits                     |
    that will be get by __lg(x)+1 = 3+1 = 4 bits    |
    */                                              |
    ________________________________________________|
   |->Then again we have to count the part that not counted
   which is nothing but 12 -8 = 4 // x - (__lg(x)<<1) = 12 - 8 = 4
   0   0  0<- 0
   0   0  1
   0   1  0
   0   1  1 
   1   0  0<- 4
//    Again same process will be done 

    arr 5 4+2 4+2 4+2
        5 6   6   6
_____________________________________________________________________________________


void solve()
{
    vector<ll>bit(66,0) ; 
    auto getbitcount=[&](ll mid, auto &&getbitcount)->void{ // log(mid)
        if(mid == 0 ) return ; 
        if(mid == 1 )
        {
            bit[0]++;
            return ;
        }
        if(mid == 2 ) 
        {
            bit[0]++, bit[1]++; 
            return ;
        }

        ll bitlen                 = __lg(mid) ;  // +1 kri nai cause 0 base index hishebe boshabo vector e tai 
        ll lstnumberWhoHavebitlen = (1LL<<bitlen) ;

        bit[bitlen] += mid - lstnumberWhoHavebitlen +1 ;

        for(ll i = 0 ; i< bitlen ; i++)
        {
            bit[i] += (lstnumberWhoHavebitlen / 2 ) ; 
        }
        ll  baki = mid - lstnumberWhoHavebitlen ; 

        getbitcount(baki,getbitcount) ; 
    };

    ll l = 0 , r = 1e15 +1 ,result = 0 ; 

    while(l<=r)
    {
        ll mid = (l+r) /2 ; 
        bit = vector<ll>(66, 0);
        getbitcount(mid,getbitcount) ; 
        ll allXpositionbits = 0 ; 
        for(ll i = 0 ; i<65; i++ )
        {
            if((i+1)%x==0) allXpositionbits+=bit[i] ; 
        }

        if(allXpositionbits<=k) 
        {
            result = mid ;
            l= mid+1 ; // cause i need mx 
        }
        else r = mid-1; 
    }

    return result ;
}




// Topic - Longest common prifix from value left to value right

int LCP(int left, int right) 
{
    int shift = 0 ; 
    while(left!=right) // log(n)
    {
        left=left>>1 ; 
        right=right>>1 ; 
        shift++; 
    }

    return (left<<shift) ;  // jkn match paisi means 
                            // oikhan theke shb same 
                            // so tar pore shb zero kri disi
}



// Topic - N is a power of 2 or not ? 
int main()
{
    ll n ;  cin>> n ; 
    if(n>0 && (n&(n-1) )== 0 ) Yes 
    else No 
}