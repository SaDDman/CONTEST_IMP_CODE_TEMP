                                             /*In the name of Almighty Allah*/

BRACKET related
TOPIC- checking regular bracket seq or not

STRING related
Topic - string MEX findout
TOPIC - FINDSUBSTRING
Topic -SPACE_RELATED
TOPIC - BORO number theke choto number biyon (in string also )
TOPIC - string to int or ll 
Topic- erase something from string
TOPIC - delete string char 
Topic- digit max value and min value

BLUEPRINT
Topic - Substring Palindrome

STL 
Topic - 3D vector 
Topic - MONOTONIC DEQUE // every partition max / min value 
Topic - Map upperbound / lower bound
Topic - Map of array
Topic - map pair , triplet 
Topic - try to delete vector element from map
Topic - sort vector in map 
Topic - or when inserting element in mp vector sort imediately
Topic - in VECTOR STL
Topic - how to compare prefix and suffix 
Topic - in set STL




MATRIX related 
Topic - Matrix 90 degree rotate 

SHUTRO related - 
TOPIC- ##two point distance (Two dimentional)
Topic - two circle is interset or not?
Topic - clockwise & anticlockwise value (3 er 5 ghor anti clockwise bair kra )
Topic - Return the min point where all query are intersect 

IMPLEMENTATION hacks - 

TOPIC- ROUNDUP tricks
Topic - Array per layer print 
Topic - Prifix sum
Topic - get the MEX
Topic -Kadane's Algorithm
TOPIC-specific index sort
Topic - distance of two point 
Topic - Print big number from 1 to n  (Binary er bikolpo way te )
Topic - Partition in arrray jumping by x 0(n) 
Topic - Circular array position check ( 0 base index )
Topic - map  backtracking map element from the source (not allowed in int)
Topic - get the sequence
TOPIC- taking vector in map 
TOPIC- IN sercular array to get the index use 
TOPIC- Sort kra chara vector er right side e par element er min value  koita bair kra O(1) e
Topic - PRint BW
Topic - print- even pspsps    odd  psp
Topic - 2 4 5 3 1 evabe print kra 
Topic - 5 1 4 2 3 print 
Topic - Next permutation // TC n!
Topic - r some number of x1y1 cover the especific N ? 

TOPIC- ABA / BAB / AAB   /BAB       min way to get this type of seq
ans-   1  / 1   / 2(AB,A)/ 2(BA,B)




LEARnING TOPICS FROM YTUBE - 
TOPIC- NUMBER_THEORY
TOPIC-BINARY_SEARCH
TOPIC- BINARY_SEARCH(cps)
TOPIC- TWO_POINTER
Topic - Prefix Xor 


SlIDING WINDOW related-
Topic - Sliding window subarray count - > ( i - j +1 ) // 0 base // shudu count kra hbe main loop e sliding e na 
TOPIC- sliding window 

2D vector related - 
TOPIC - 2D vector size
Topic - 2D vector e shb . / 0 / 1 neya 
Topic - 2D_VECTOR_PRINT





FUNCTION related -
Topic - sqrt() function
Topic - USing compare in sort 
TOPIC - string to int or ll 
TOPIC-ERASE_DUPlicate_element


### how to get the common of two numbers divisors in a array index?





TOPIC - string to int or ll 
vector<ll>ans;
f(i,0,v.size())
{
    string p = v[i];
    ll gun = 1 ;
    ll sum= 0 ;
    for(ll j = p.size()-1 ; j>=0;j--)
    {
        ll gh = p[j]-'0';
        sum+=(gh*gun);
        // cout<<gh<<" "<<sum<<endl;
        gun*=10;
    }
    ans.push_back(sum);
}
vsort(ans)




TOPIC-ERASE_DUPlicate_element
#ERASE_DUPlicate_element
v.erase(unique(v.begin(),v.end()),v.end());
v.erase(unique(v.begin(),v.end()),v.end());
BY USING UNIQUE FUNCTION WE CAN ERASE DOUBLE SAME VALUE IN VECTOR

EXM- 1 1 1 2 2 2 3 3
OUTPUT- 1 2 3


## ever want to do n/2 then +1 otherwise do this (n+1)/2 ROUNDUP tricks

for round up do this 
when we get 7/2=(  3.something  ) roundup is 4 so we do usually ((7/2)+1) /2 = 4 or 7/2 +1 = 3+1=4 
but sometimes we can get wrong on here cause not every time we will divide with 2 and adding 1 is not the roundup 
of it when we dont devide with 2 if we observe when we devide 7 by 3 if we round up we have to add 2 not 1

so for this situation we can apply this way

dividing number = n;// 3  // 4
number = ans;//7   // 17
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
so the round up of it is --> (ans+div-1)/div; -->exm-->(7+3-1)/3==3--> (17+4-1)/4=5 +
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
ceil =( n+1) /2 

### IN sercular array to get the index use 

(((idx)+(step))% sizeofarray)
0 1 2 3 
in idx 3  go to next 2 step after 3 so ans will be --> (3+2)% 4  = 1idx 



#get the MEX

int Mex(vector<int> a) {
  sort(a.begin(), a.end());
  if (a[0] > 0) return 0;
  for (int i = 1; i < (int) a.size(); i++) {
    if (a[i] > a[i - 1] + 1) {
      return a[i - 1] + 1;
    }
  }
  return a.back() + 1;
}
 
#ALGORIDOM
digit max value and min value
string s = to_string(i);
char c= *(max_element(s.begin(), s.end()));
char b= *(min_element(s.begin(), s.end())) ;
 int mxx = int(c)-48;
int  mnn= int(b)-48;
iput- 1245
cout << 5   1


#deviding algo
if i have to dive 5 card in 2 people equally 
div=5/2;             =2
if(5%2) div++;       =3
per public get div-1 card and maximum number of card will get is div! 


print- even pspsps    odd  psp
            spspsp         sps
fr(i,1,n)
{
    fr(j,1,n)
    {
        if(((i+j)%2)==0 //&& k>0)
        {
            cout<<'p';
            k--;
        }
        else
        {
            cout<<'s';
        }
    }
    cout<<endl;
}

##two point distance
sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)))

#how to get the common of two numbers divisors in a array index?

ll common = total numbers / lcm(x,y);
example - n=7, x=2, y=3
x2div->    *   *  * 
n->     1 2 3 4 5 6 7  (index )
y3div->     *     * 
if we see 6 can divide by 2 and also with 3

so common is 1 which we can get by this - > total numbers / lcm(x,y);
                                               = 7 / lcm(2,3);
                                               =1



#FUntion

sqrt() function->
ll SQRT(ll a){
    ll x=sqrt(a)+2;
    while(x*x>a)x--;
    return x;
}


#Prifix sum
for(ll i = 1 ; i<=lim; i++)
{
    ans[i]+=ans[i-1];
}

shortcuts  # 1base index in sum0 vector 
used in string ( s[i] == '0' ) it give output true or false mean 1 or 0 
sum0[i+1] = ( s[i] == '0' ) + sum0[i]; so if true then 1+ sum0[i] else false 0+sum0[i];
sum1[i+1] = ( s[i] == '1' ) + sum1[i]; so if true then 1+ sum0[i] else false 0+sum0[i];
vector<ll>v(n);
    f(i,0,n)
    {
        cin>>v[i];
    }
    vector<ll>p(n+1);

    p[1]=v[0];
    f(i,2,n+1)
    {
        p[i]=v[i-1]+p[i-1];
    }

1
5
1 2 3 4 5
output-0 1 3 6 10 15

#get the sequence
fr(i,1,5) // 1
    {
        fr(j,1,5) // 1 not --> 2
        {
            if(i==j) continue;
            // cout<<i<<" "<<j<<endl;
            fr(k,1,5) // 3
            {
                if(k==j || k==i) continue;
                    // cout<<k<<endl;
                fr(l,1,5) // 4 5 
                {
                    if(l==i || l==j || l==k) continue;
                    //  cout<<l<<endl;
                    fr(m,1,5) // 5 4 
                    {
                        if(m==i || m==j || m==k || m==l) continue;
                        cout<<i<<j<<k<<l<<m<<endl;
                }
            }
        }
    }

###Topic-
divide odd number by 2 to get a even number
divide even number by 2 to get a odd number
while(k%2==(k/2)%2)
{
    k=k/2;
    cnt2++;
}
cout<<cnt2+1<<endl;
input-  13 8
13/2==6 --->here 6 is even number operation is 1
8/2=4 ---> 4/2=2----> 2/2===1 here 1 is odd  ans number of operation is 3

output- 1 3

Topic - way to get the largest number in array zero base 
cout<<max_element(ar, ar + n) - ar <<endl ;


string can be cleared by s.clear() libary function; //s is the string name



how to find the same char in a string?
like 11111110000


in 1st 4char is 1 .... i have to count the first 4 char i mean 1 then compare it with others or get the max

###PART-
###FINDSUBSTRING

TOPIC- find the same char substring in string
ll con=0;
    	for(i=0;i<s.size();i++)
    	{
    		con++;
    		if(i==s.size()-1 or s[i+1]!=s[i])
    		{
    			ans=max(ans,con*con);
    			con=0;
    		}
    	}


#in string if there only 2 different char then we can see what one after another
exm- 010110
how can i find after 1st index 0 ?
ans well be 1 i mean second index element 
so solution is 

string p;
    int a =s[0]-'0';//01101
    //cout<<a;
    for(ll i=1;i<n;i++)
    {
      if(a==0)
      {
        p+="+";
        a=a+(s[i]-'0');
      }
      else
      {
        p+="-";
        a=a-(s[i]-'0');
      }
    }


##PART-
##SPACE_RELATED
get the space string count

ex : the devil in the sky

    vector<string>v;
    
    for(auto mb: s)
    {
    	if(isspace(mb))///when i get space
		{
			v.push_back(tmp);//push it in the vector 
			tmp.clear();//and then clear the char i count for the next char cnt
		}
    	else
    		tmp+=mb;//counting every single char 
    }
    v.push_back(tmp);

now in vector v : 
the
devil
in
the
sky




# get the max string print 

the
devil
in
the
sky

max string is : the
so i input all string in vector v then 

  map<string,int>hola;
    int maxstr=0;
    for(auto u: v)
    {
    	hola[u]++;
    	maxstr=max(maxstr,hola[u]);
    }
    string ans;
    for(auto u: v)
    {
    	if(hola[u]==maxstr)
    	{
    		ans=u;
    		break;
    	}
    }
    cout<<ans<<" "<<maxstr<<endl;


swap char in string 
  string tmp;//what
//tmp+='a';

    int p= tmp.size();
    //swap(tmp[p-2],tmp[p-1]);
    swap(tmp[0],tmp[p-1]);//last and 1st position swap
    after swap // thaw 







    learn type// count max and show max value and max count
    input-what is the main thing in the book?
    output- the 2
int main()
{
  speed();
    ll t,i,n,j,x,y;
  
    string s;
  char c;
  cin>>c;
  getline(cin,s);
  s=c+s;

    
    ll cnt=0;
    string tmp;
    vector<string>v;
    
    for(auto mb: s)
    {
      if(isspace(mb))
      {
        v.push_back(tmp);
        tmp.clear();
      }
      else
        tmp+=mb;
    }
    v.push_back(tmp);


    map<string,int>hola;
    int maxstr=0;
    for(auto u: v)
    {
      hola[u]++;
      maxstr=max(maxstr,hola[u]);
    }
    string ans;
    for(auto u: v)
    {
      if(hola[u]==maxstr)
      {
        ans=u;
        break;
      }
    }
    cout<<ans<<" "<<maxstr<<endl;

    return 0;
}
###Part-
## Topic->erase something from string

->>>s.erase ( remove ( s.begin(), s.end(), 'delete char' ), s.end() );


get the mex char in string 
12 6  bucket size is 2    total bucket 6
get a mex char in 2size string ///ab c///ac b
input -- cabccadabaac(----after sort-----  aaaaabbccccd)
output -- ccbbba
string ans;//3rd atm ans=c
    for(i=0;i<k;i++)
    {
      int len=n/k;//2
      
      //cout<<"ekane"<<endl;///3red atm//bucket num 2 start
      for(char ch = 'a';ch<='z';ch++)
      {
        //cout<<len<<endl;
        if(len<=0)//1st atm!--len=2
        {
          ans+=ch;
          //cout<<ans<<" "<<"onet"<<endl;
          //ita3
          break;//3rd atm 
        }
        //cout<<len<<" "<<"one"<<endl;
        len--;//len=1
        //cout<<len<<" "<<"two"<<endl;//len=1//len=0
        if(call[ch])
        {
          //cout<<ch<<" "<<call[ch]<<endl;
          call[ch]--;//1st atm a-- a=4//2nd atm b--  b=1
          //cout<<ch<<" "<<call[ch]<<" "<<"four"<<" "<<ans<<endl;
          //ita3
          //cout<<"2nd if erpore"<<" "<<ans<<endl;
        }
        else
        {
          ans+=ch;//char frq jkn zwero hbe
          //cout<<ans<<" "<<"thr"<<endl;
          break;
        }
aaaaa
bb
cccc
d

####part
#SUBSTRING 
#Topic->
get the main string  from suffix and prifix the string of the main string

like ex - main string "abcd"
prifix- abc----- suffix-----bcd

st is a vector ,where both string {st[0]->abc,st[1]->bcd} added
if(st[0].substr(1)!=st[1].substr(0,n-2))
    {
        swap(st[0],st[1]);
    }
    cout<<st[0]<<" "<<st[1][n-2]<<endl;
    string t= st[0]+st[1][n-2];
    
    t= "abcd";

-> also this implement give the string as palindrome wise

implement of this code->
1.
bcd abc<- in here abc need the letter of 'd' frm bcd which is last of its
cd ab
abc d
so if need last letter if(st[0].substr(1)!=st[1].substr(0,n-2)) this condition will not be equal

2.
another ex- alt
al lt<- in here lt need 'a' from "al" 1st string to complete the main string alt
l l
al t
so if need 1st letter if(st[0].substr(1)!=st[1].substr(0,n-2)) this condition will be equal



#topic->
if you ever want to find  s string is a substring of str or not  
where str is a like this str="YesYesYesYesYes........";(we dont know how long
it is,but we know "Yes" repeated many times in a row)
then apply this way
string s is the substring ...we have to find is it substring of str or not
//
string s;
      cin>>s;
      string ans="Yes";
      int pos=0;
      if(s[0]=='Y'){
          pos=0;
      }
      else if(s[0]=='e'){
          pos=1;
      }
      else if(s[0]=='s'){
          pos=2;
      }
      int f=0;
      for(int i=0;i<s.size();i++)
      {
        cout<<s[i]<<" "<<pos<<" "<<ans[pos]<<endl;
          if(s[i]==ans[pos])
          {
              pos++;
              if(pos==3)
              {
                  pos=0;
              }
          }
          else
          {
              f=1;
              break;
          }
   
      }
      if(f)
      cout<<"NO"<<endl;
    else
      YES

in another way to get substring in or not 

if(s.find(p)!=std::string::npos)
{
    Yes
}
else
    No
OR,
int pos = s.find(p); // never use pos as a long long otherwise you will gel TLE BEWARE 
if(pos==-1)
{
    NO
}
else YES 

//////// string MEX findout
String mex serial wise - > a , b , c , d , e , f , g , h , i , j , k , l , m , n , o , p ,
q, r , s , t , u , v , w , x , y , z , aa , ab , ac , ad...... aaa , aab , aac , aad , ....

string ss ; 
void num_to_str(ll num)
{
    if(num)
    {
        num_to_str((num-1)/26);
        ss+=('a'+ (num-1)%26);
    }
}
This function make int to string mex 
It will show us serial wise mex string like 1 = a , 2 = b , 27 = aa ; 

all possible substring


int main()
{
    string s = "abcdef"; 
    //cdef abef abcf adef   
    // a ab abc abcd abcde abcdef b bc bcd bcde bcdef c cd cde cdef d de def e ef f
    int sz=s.size();
    string ss;
    for(int i=0; i<sz; i++)  // i = 0 , 1 , 2 , 3 , 4
    {
      for(int j=0; j<sz-i; j++)  // j = 0 to <2
      {
        ss = s.substr( i , j+1 ); // (1,j+1)
        cout<< ss <<endl;
      }
    }
    return 0;
}


output--
a
ab
abc
abcd
abcde
abcdef
b
bc
bcd
bcde
bcdef
c
cd
cde
cdef
d
de
def
e
ef
f
// delete string char 
// str.erase(str.begin()+1);

#PALINDROME

bool isPalindrome(string a){
    int l=0,r=a.size()-1;
    while(l<r){
        if(a[l]!=a[r])return false;
        l++,r--;
    }
    return true;
}

#PREFIX & SUFFIX 
how to compare prefix and suffix 
len 1 "p" with len 8 "aiumoment"
2"pa" with len 7 "iumoment"
3"pai" with len  6"umoment"
4"paiu" with len 5 "moment"
5 "paium" with len 5"oment"
6 "paiumo" with len 4"ment"
6 "paiumom" with len 3"ent"
7 "paiumome" with len 2"nt"
8 "paiumomen" with len 1"t"

get the prefix suffix length and get the max unique divided pair summation 

input -
10
paiumoment
output-10

void solve()
{
	ll n,m,d;
	string s;
    cin>>n;
	cin>>s;
	set<char>sst;
	vector<int>pre(n),sfx(n);
	//ita2
	f(i,0,s.size())
	{
		sst.insert(s[i]);
		//cout<<sst.size()<<" "<<s[i]<<endl;
		pre[i]=sst.size();
	}
	//for(auto pri : pre) { cout<<pri<<" "; } cout<<endl;
	sst.clear();
	for(ll i=s.size()-1;i>=0;i--)
	{
		
		sst.insert(s[i]);
		//cout<<sst.size()<<" "<<s[i]<<endl;
		sfx[i]=sst.size();
	}
	//ita2
	int ans=0, mx=0;
	f(i,0,n-1)
	{
		//cout<<pre[i]<<" "<<sfx[i+1]<<endl;
		ans=(pre[i]+sfx[i+1]);
		mx=max(ans,mx);
	}

	cout<<mx<<endl;
	
}
//
in multiple same num you want to make them into one number lets do 
like 2 3 3 3 1 1 2 
ans  2 3 1 2

its like this if you take an array as a input then take the differt number in another vector 
like this

//
vector<int>ar;
for(i=0;i<v.size();i++)
    {
      if(i!=v.size()-1&&(v[i+1]!=v[i]))
      {
        ar.push_back(v[i]);
      }
    }
    ar.push_back(v[v.size()-1]);

 //



#if you want to erase any value or erase any multiple
    value 1st one and also sort without doing unique 

    like 1 2 3 4
    ans  1 2 4
    like 1 1 1 
    ans  1 1
//
int main()
{
  ll n,i,m;
  multiset<int>v;

  v.insert(4);
  v.insert(4);
  v.insert(4);
  v.insert(6);
  v.insert(2);
  v.insert(7);
  v.insert(9);
  v.insert(7);
  v.insert(7);

before erase
2 4 4 4 6 7 7 7 9 

  auto it = v.find(7);//it return the 1st location of 7

after erase
  v.erase(it);
2 4 4 4 6 7 7 9 
  return 0;
}
Or, it can be erased by 
    ms.extract(7);
    2 4 4 4 6 7 7 9 
//
to get the serial number
in-5 4 3 6 1 2
out- 2 
ll one =1;
  ll over=0;
for(auto pri : v)
  {
    if(pri == one)
    {
      one++;
      over++;
    }
  }


#in VECTOR STL
declire- vector<int>v;

input-   v.push_back(n);
         v.pop_back();

1st value itaretor -  v.begin();
last value        -   v.end();


1st value   - v.front();
last value  - v.back();

sorting boro to choto--->
sort(v.begin(),v.end(), greater<ll>());

specific index sort--->> sr-->start index    ed--->end index (1 base index)
sort(v.begin()+sr,v.begin()+ed+1);
also use in reverse also
reverse(v.begin()+sr,v.begin()+ed+1);

#in map
declire- map<int,int>mp;
input-  
      1. mp[n]++:  
      we take this when we have one value to in map
      in key the n will stay, and the other int will show the freq

      2. mp[n]= k;
      we take this input when we have like this type input
      n      ==   m
      1      ==   78
      mp[n]  =    m;

1st value in key    - mapname.begin()->first;
last value in key   - mapname.rbegin()->first;

1st value in freq   - mapname.begin()->second;
last value in freq  - mapname.rbegin()->second;

erase any value from map -mapname.erase(value);

mp[x] mean frequency of x value

for(auto u: mp)
{
    ll x= u.first;
    mp[x] -> here it donotes the frequency of the value if in map x freq is 5 then mp[x] = 5;
}



map<ll,ll>mp;
map<ll,ll> :: iterator it;
for(auto it = mp.begin(); it != mp.end(); it++)
{
    cout << it->first << ' ' <<it->second<<endl;
}

for(auto [v,last]:mp)
{
    cout<<v<<" "<<last<<endl;
}

auto it = mp.begin();
ll x = it->first;
ll y = it->second;

# map pair , triplet 
map<pair<ll, ll>, ll> ab, bc, ac;
inserting - ab[{v[i+1],v[i+2]}]

map<vector<ll>,ll> abc;
inserting - > abc[{v[i],v[i+1],v[i+2]}]++ ;  

# taking vector in map 
map<ll,vector<ll>>mp;
// mp[0].pop_back(); delete last number of vector element 
// mp[0].back(); last number of vector element 
    f(i,0,n)
    {
        cin>>v[i];
        mp[v[i]].push_back(i);
    }
    // ita3(mp)
    for(auto u: mp)
    {
        cout<<u.first<<" ";
        for(auto p : u.second)
        {
            cout<<p<<" ";
        }
        cout<<endl;
    }
    input- 6
           1 2 1 2 1 2  output- 1 --->0 2 4 
                                2----> 1 3 5
    or for(auto u : mp[value which element store in vector like 1])
    {
        cout<<u<<" ";       output for mp[1]--->0 2 4
    }

try to delete vector element from map
input - 2 2 3 4 4
output - ......


in map - 
          2 2
          3 1
          4 2

ll ans =0;
   f(i,0,n)
   {
      ll value = 0;
      if(mp[v[i]]!=0)
      {
         ans++;
         value+=v[i];
         while(mp[value]>0)
         {
            mp[value]--;
            value++;
         }
      }
   }
# sort vector in map 
f(i,0,mp.size())
{
    sort(mp[i].begin(),mp[i].end());
}

or when inserting element in mp vector sort imediately
mp[i].push_back(x);
sort(mp[i].begin(),mp[i].end());

or
for(auto u : ser)
{
    vsort(ser[u.first]);
}

//Topic - Map of array

map<int,int>mp[10];
    mp[0][1]++;
    mp[2][1]++;
    mp[2][2]++;
    mp[3][1]++;
    mp[2][1]++;
    mp[9][1]++;
    cout<<mp[5][1]<<endl;
    for(auto u : mp[2])
    {
        cout<<u.first<<" "<<u.second<<endl;
    }
// Topic - Map upperbound / lower bound

/*
map e kno ekta fixed element er closest choto element find kra 
*/
auto it = mp.upper_bound(val);
if(it!=mp.begin()) // it jdi fst element na hoi (!RE)
{
    it--;
}
/*
map e kno exact key er frequency theke boro emn kno
key jar freq kom/beshi take delete kra 
Ex - 
Before delete 
3 4 
5 3 
6 2
7 5 
ekane key 3 er frq 4 
key 3 theke boro key 5 and 6 but tader freq key 3 theke choto 
key 3 er freq 4 jar theke 3 and 2 choto egula delete kra
after delete -> 
3 4
7 5 
*/
suppose val = key ; 
auto it = mp.upper_bound(val);
while(it!=mp.end() && it->second<=sum)
{
    cout<<it->first<<endl;
    mp.erase(it++);
    cout<<it->first<<endl;
    cout<<endl;
    // it++;
}




#in set STL

declire     - set<int>s;
input     -   s.insert(n);
findanything - s.count(find)//if find return 1 else 0
1st value   -  *(setname.begin());
2nd value   - *(++setname.begin());
last value  -*(--setname.end());

serching element is in set  ==   if(s.count(y)==1) Yes else No
serching element is in set  ==    if(s.find(x)!=s.end()) Yes else No

#in multiset

multiset<int> st;
multiset<int>:: iterator it;
it = st.end();
it--;
cnt+=(*it);
st.erase(it);//st can be string set or anything

#in stack
declire- stack<int>st;

input       -      st.push(n);
delete      -      st.top();
anythinginornot -  st.empty();

stack last 2 value
stack<int>st;

  st.push(n);
  st.push(x);
  st.push(g);
  int fst=-1, sec=-1;

  if(!st.empty())
  {
    fst=st.top();
    st.pop();
  }
  if(!st.empty())
  {
    sec=st.top();
    st.pop();
  }

  if(sec!=-1)
  {
    cout<<fst<<" "<<sec;
  }
  return 0;
}

\\\\\

stack same element delation 

cin>>s;
  stack<char>st;
  
  for(auto pri: s)
  {
    if(!st.empty())
    {
      if(st.top()==pri)
      {
        st.pop();
      }
      else 
        st.push(pri);
    }
    else
      st.push(pri);
  }
#permutation

for genarate all permutation 
void permute(int p[], int l, int r) {
    if (l == r) {
        for (int i = 0; i <= r; i++){ 
            cout << (p[i]+1)<< " ";
        }
        cout<<endl;
    } else {
        for (int i = l; i <= r; i++) {
            if (p[i] != l) {
                swap(p[l], p[i]);
                permute(p, l+1, r);
                swap(p[l], p[i]);
            }
        }
    }
}
permute(ar, 0, n-1);//cin array and n is the size of the array 

#queue

1st element in queue  - q.front();
element delation      - q.pop();
empty or not          - q.empty();
size                  - q.size();

#deque
1st element in queue  - q.front();
element shamne push   - q.push_front(x);
element delation 1st  - q.pop_front();
element delation last - q.pop_back();
empty or not          - q.empty(); - empty na hle 0 dekane hole 1 
size                  - q.size();

for example implementation of a deque (working on string)
cin>>s ; 
deque<char>de(s.begin(),s.end());
for(auto u : s) de.push_back(u);
vector<int>op;

int i = 0 ;
while(op.size()<=300 && !de.empty())
{
    if(de.front()==de.back())
    {
        if(de.front()=='0')
        {
            op.push_back(i+de.size());
            de.pop_front();
            de.push_back('0');
        }
        else 
        {
            op.push_back(i);
            de.pop_back();
            de.push_front('1');
        }
    }
    else
    {
    de.pop_back();
    de.pop_front();
    }
    i++;
}

#priority_queue(Alaways return bigger element first)

        priority_queue<int>q;
1st element in queue  - q.top();
element insert        - q.push();
element delation      - q.pop();
empty or not          - !q.empty();
size                  - q.size();
cout                  - while(!q.empty()) { cout<<q.top()<<endl; q.pop();}

but
priority_queue<int,vector<int>,greater<int>>q;
by declaring this way (comparetor) output will be lower to bigger

in pair way
priority_queue <pair<int,int>>q;
priority_queue <pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>q;(small to big)
while(!q.empty())
{
  cout<<q.top().first<<" "<<q.top().second<<endl;
  q.pop();

}
want to minimize map eliment by 1 for 3 times every elment
input -
2 15
3 4
7 3
output-
2 12
3 1
7 0

    f(i,0,3)
    {
        ll ans=1;
        for(auto u: mp)
        {
            ll x= u.first;
            ll y= u.second;
            if(y>0)
            {
                mp[x]--;
            }
  code         2--> //14 //13//12
  works          3-->//3 /2 //1
  by this        7-->//2 //1 //0
        }
    }




#prifix_sum

for(ll i = 1 ; i<=lim; i++)
{
    ans[i]+=ans[i-1];
}

void solve()
{
    ll n,i;
    cin>>n;
    vector<int>v(n);

    vector<int>p;

    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }

    p.push_back(v[0]);

    for(i=1;i<n;i++)
    {
        ll ddp=v[i]+p[i-1];
        p.push_back(ddp);
    }

    for(auto pri : p) 
    { 
        cout<<pri<<" "; 
    } 
    cout<<endl;

}


###PART - 
#2D_VECTOR_PRINT

vector<ll> pos[n+1];
        
        m=n;
        
        for(;m--;)
        {
            for(i=1; i<=n-1; i++)
            {
                cin>>j;
                
                pos[j].push_back(i);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            // cout<<i<<"--> ";
            for(int j=0;j<v[i].size();j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    another
    for( auto u : v)
    {
        for(auto x : u)
        {
            cout<<x<<" ";
        }
        sp
    }

    another 
    ll vsize = 3;
    for( ll i = 0 ; i<vsize; i++)
    {
        for( ll j = 0 ; j< v[i].size() ; j++)
        {
            cout << v[i][j]<<" ";
        }
        cout<<endl;
    }



if you print any number by divide by 3 way then you have to divide the number by 3 but if the number have remainder then the way to add the every divided number by 3 is
int main()
{
    ll p =25;
    ll divide = 25/3;
    ll mod = 25%3;
// cout<<mod<<endl;
    f(i,0,3)
    {
        if(mod>0)
        {
        cout<<divide+1<<" ";
        mod--;
        }
        else{
        cout<<divide<<" ";
        }
    }
}

###PART - 
#TWO_POINTER
get two number sum in array---> O(n)
input-
4
1 2 4 9
11
output- YES
        2 9

code->>

ll val1=0, val2=0;
ll idx=0,idx1=0;
bool maain(ll v[],ll x, ll n)
{
   ll i = 0;
   ll j = n-1;
   while(i<j)
   {
      ll sum = v[i]+v[j];
      if(sum == x)
      {
         val1 = v[i];
         val2 = v[j];
         idx = i; idx1 = j;
         return true;
      } 
      if(sum>x) j--;
      else i++;
   }
   return false;
}
cin>>x; 
bool ans = maain(v,x,n);
if(ans == true)
{
  YES 
  cout<<val1<<" "<<val2<<endl;
  cout<<idx+1<<" "<<idx1+1<<endl;
} else NO

Topic Name--
Find the pair in Array Whose sum is closest to X (closest mean minimum value)--> O(n)

void solve(ll v[],ll x,ll n)// array name , X value , array size!
{
   ll l=0;
   ll r= n-1;
   
   ll ix1,ix2;

   ll dif = INT_MAX;

   while(l<r)
   {
      ll sum =v[l]+v[r];
      if(abs(sum-x)<dif)
      {
         ix1 = l;
         ix2=r;
         dif=abs(sum-x);
      }
      if(sum>x) r--;
      else l++;
   }

   cout<<"{"<<v[ix1]<<","<<v[ix2]<<"}"<<endl;
   cout<<v[ix1]+v[ix2]<<endl;
} 
cin>>n;
ll v[n];
sort(v,v+n);  ll x; cin>>x;   solve(v,x,n);


topic-
find the tirplets with zero  - O(n^2)
get the 3 number sum in arrray  = 0
void solve(ll ar[],  ll n)
{
    for(ll i = 0 ;i< n ;i++)
    {
       set<ll>s;//1 -1 0 2 -2 3//here it can be unordered_set
        for(ll j =i+1; j<n;j++)
        {
            int x = -(ar[i]+ar[j]);
            //cout<<x<<endl;
            if(s.count(x)==1)// -1 
            {
                cout<<"("<<x<<","<<ar[i]<<','<<ar[j]<<")"<<endl;
            }
            else
            {
                s.insert(ar[j]);
                // cout<<"here"<<endl;
                // ita2(s)
            }
        }
        //ita2(s)
    }
}

Topic-
Find a triplet that sum to a given value ----O(n^2)
or, get 3 number from array which sum is equal to X
input- 
1
6
1 2 4 6 3 0
20
output - not found
input-
1
6
1 2 4 6 3 0
7
output-
(0,1,6)
(0,3,4)
(1,2,4)


void solve(ll ar[],  ll n,ll x)
{
    ll in=0;
    for(ll i = 0 ;i< n ;i++)
    {
        ll l = i+1;
        ll r = n-1;
        while(l<r)
        {
            ll sum = ar[i]+ ar[l]+ ar[r];
            if(sum==x)
            {
                cout<<"("<<ar[i]<<","<<ar[l]<<","<<ar[r]<<")"<<endl;
                in=1;
            }
            if(sum>x) r--;
            else l++;
        }
    }
    if(in==0)
    {
        cout<<"NOT found"<<endl;
    }
}

Topic-
Find four elements that sum to a given value O(n^3)
or, get 4 number from array which sum is equal to X

input-
1
9
2 2 4 4 6 6 8 8 0
8
output-
(2,2,4,0)
(2,2,4,0)
input-
1
9
2 2 4 4 6 6 8 8 0
16
output-
(2,6,8,0)
(2,6,8,0)
(2,6,8,0)
(2,6,8,0)
(2,6,8,0)
(2,6,8,0)
(2,6,8,0)
(2,6,8,0)
(4,4,8,0)
(4,4,8,0)
(4,6,6,0)
(4,6,6,0)

void solve(ll ar[],ll n,ll x)
{
    ll in=0;
    for(ll i = 0 ;i< n ;i++)
    {
        for(ll j = i+1 ;j< n ;j++)
        {
            ll l = j+1;
            ll r = n-1;
            while(l<r)
            {
                ll sum = ar[i]+ ar[j] + ar[l]+ ar[r];
                if(sum==x)
                {
                    cout<<"("<<ar[i]<<","<<ar[j]<<","<<ar[l]<<","<<ar[r]<<")"<<endl;
                    in=1;
                }
                if(sum>x) r--;
                else l++;
            }
        }
    }
    if(in==0)
    {
        cout<<"NOT found"<<endl;
    }
}


Topic name -
In array get  2number which equal to another number in array 
or , Find a triplet such that sum of two equals to third element 
input-
9
5 32 1 7 10 50 19 21 2
output-21,2,19
input- 
9
5 32 1 7 10 50 19 21 0
output- error


void solve(ll ar[],ll n)
{
    for(ll i=n-1;i>=0;i--)   
    {
        ll l = 0;
        ll r = i-1;
        
        while(l<r)
        {
            ll sum=ar[l]+ar[r];
            if(sum==ar[i])
            {
                cout<<ar[i]<<","<<ar[l]<<","<<ar[r]<<endl;
                return;
            }
            if(sum>ar[i]) r--;
            else l++;
        }
    }
    cout<<"error"<<endl;
}

###PART-8
#BINARY_SEARCH
Topic - Find the X and get the index of X

void binaryserch(ll ar[],ll n,ll x)
{
   ll l = 0;
   ll r = n-1;
   while(l<=r)
   {
      ll mid = (l+r)/2;
      if(ar[mid]==x)
      {
         cout<<"Found"<<endl;
         cout<<"index"<<" "<<mid+1<<endl;
         return;
      }
      else if (ar[mid]>x) r= mid-1;
      else l= mid+1;
   }
   cout<<"NF"<<endl;
   
}

Topic-Get the element in reverse array 
Input-
1
7
7 5 6 4 3 2 1
2
output-
6

void ReverseSortedbinaryserch(ll ar[],ll n,ll x)
{
   ll l = 0;
   ll r = n-1;
   while(l<=r)
   {
      ll mid = (l+r)/2;
      if(ar[mid]==x)
      {
         cout<<"Found"<<endl;
         cout<<"index"<<" "<<mid+1<<endl;
         return;
      }
      else if (ar[mid]>x) l= mid+1;
      else r= mid-1;
   }
   cout<<"NF"<<endl;
   
}

Topic- geT THE  FirstOccurrence IN ARRAY WHEN THERE IS MANY SAME ELEMENT

Input-
1
7
1 2 2 3 3 5 6
3
output-4 

void  FirstOccurrencebinaryserch(ll ar[],ll n,ll x)
{
   ll l = 0;
   ll r = n-1;
   ll ans=-1;
   while(l<=r)
   {
      ll mid = (l+r)/2;
      if(ar[mid]==x)
      {
         ans = mid;
         r=mid-1;
      }
      else if (ar[mid]<x) l= mid+1;
      else r= mid-1;
   }
   cout<<ans+1<<endl;
}

Topic- geT THE  LASTOccurrence IN ARRAY WHEN THERE IS MANY SAME ELEMENT

Input-
1
7
1 2 2 3 3 5 6
3
output-5
void  lastOccurrencebinaryserch(ll ar[],ll n,ll x)
{
   ll l = 0;
   ll r = n-1;
   ll ans=-1;
   while(l<=r)
   {
      ll mid = (l+r)/2;
      if(ar[mid]==x)
      {
         ans = mid;
         l=mid+1;
      }
      else if (ar[mid]<x) l= mid+1;
      else r= mid-1;
   }
   cout<<ans+1<<endl;
}

Topic- Count of an Element in Sorted array using binary search
input- 
1
7
1 2 2 2 2 2 7
2
output- 5
ll  FirstOccurrencebinaryserch(ll ar[],ll n,ll x)
{
   ll l = 0;
   ll r = n-1;
   ll ans=-1;
   while(l<=r)
   {
      ll mid = (l+r)/2;
      if(ar[mid]==x)
      {
         ans = mid;
         r=mid-1;
      }
      else if (ar[mid]<x) l= mid+1;
      else r= mid-1;
   }
   return ans+1;
}

ll  lastOccurrencebinaryserch(ll ar[],ll n,ll x)
{
   ll l = 0;
   ll r = n-1;
   ll ans=-1;
   while(l<=r)
   {
      ll mid = (l+r)/2;
      if(ar[mid]==x)
      {
         ans = mid;
         l=mid+1;
      }
      else if (ar[mid]<x) l= mid+1;
      else r= mid-1;
   }
   return ans+1;
}

int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll n;
      cin>>n;
      ll ar[n+4];
      f(i,0,n)
      {
         cin>>ar[i];
      }
      ll x;
       cin>>x;
     
      cout<<lastOccurrencebinaryserch(ar,n,x)-FirstOccurrencebinaryserch(ar,n,x)+1;

   }
   
   return 0;
}

Topic- Number of Time a Sorted Array is Rotated 
number ghure shamne kotota gese ta count kra

input-
1
10
9 10 1 2 3 4 5 6 7 8
output- 2

void binaryserch(ll ar[],ll n)
{
   ll l = 0;
   ll r = n-1;
   ll ans=0;
   while(l<=r)
   {
      ll mid = (l+r)/2;
      if(mid<r && ar[mid]>ar[mid+1])
      {
         ans = mid+1;
         break;
      }
      else if(mid>l && ar[mid]<ar[mid-1])
      {
         ans=mid;
         break;
      }
      if(ar[r]>ar[mid])
      {
         r=mid-1;
      }
      else
      {
         l=mid+1;
      }
   }
   cout<<ans<<endl;
}

Topic-  Find an Element in Rotated Sorted Array by using binary search
input-
1
10
6 7 8 9 10 1 2 3 4 5
9
output-
4

ll countrot(ll ar[],ll l,ll r)
{
	ll res=0;
	while(l<=r)
	{
		ll mid=(l+r)/2;
		if(mid<r && ar[mid+1]<ar[mid])
		{
			res=mid+1;
			break;
		}
		else if(mid>l && ar[mid]<ar[mid-1])
		{
			res=mid;
			break;
		}
		else if(ar[r]>ar[mid])r=mid-1;
		else l=mid+1;
	}
	return res;
}

ll binsearch(ll ar[],ll l,ll r,ll x)
{
    ll res=-1;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(x==ar[mid])
        {
            res=mid;
            r=mid-1;
        }
        else if(x>ar[mid])l=mid+1;
        else r=mid-1;
    }
    return res;
}
int main()
{
	speed
	
    ll n;
    cin>>n;
    ll ar[n+2];
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    ll ind=countrot(ar,0,n-1);
    ll fnd;
    cin>>fnd;
    ll ans1=binsearch(ar,0,ind-1,fnd);
    ll ans2=binsearch(ar,ind,n-1,fnd);

    cout<<max(ans1,ans2)+1<<endl;
    return 0;
}

Topic- Find Floor of an Element in a Sorted Array using Binary Search
input-
1
10
1 2 3 4 5 6 7 9 10 11
8
output-7
it wont show the last index of ceil only show the last ceil example 
     1 5 6 7 7 10
idx- 1 2 3 4 5  6
output for 9 is 7  but the index will be 5

void floor(ll ar[],ll n, ll x )
{
   ll l = 0;
   ll r = n-1;
   
   ll main = 0;
   while(l<=r)
   {
      ll mid = (l+r)/2;

      if(ar[mid]==x)
      {
         main = ar[mid];
         break;
         // return;
      }
      if (ar[mid]<x)
      {
         
         main = ar[mid];
         l = mid+1;
      }
      else r = mid-1;
   }

   cout<<main<<endl;
}

Topic-  Find Ceil of an Element in a Sorted Array using binary search
input - 
1
10
1 2 3 4 4 6 7 9 9 11
10
output- 11
it wont show the last index of ceil only show the 1st ceil example 
     1 5 6 7 10 10
idx- 1 2 3 4 5  6
output for 9 is 10 but the index will be 5 

void ceil(ll ar[],ll n, ll x )
{
   ll l = 0;
   ll r = n-1;
   
   ll main = 0;
   while(l<=r)
   {
      ll mid = (l+r)/2;

      if(ar[mid]==x)
      {
         main = ar[mid];
         break;
         // return;
      } 
      if (ar[mid]>x)
      {
         
         main = ar[mid];
         r = mid-1;
      }
      else l = mid+1;
   }

   cout<<main<<endl;
}

Topic- Next Alphabetical Element using Binary Search 
or, find a min greater element of a char 
input-
1
abcdefg
d
output- e
void binaryserch(string s,ll n, char x )
{
   ll l = 0;
   ll r = n-1;
   
   char main;
   while(l<=r)
   {
      ll mid = (l+r)/2;
 
      if (s[mid]>x)
      {
         
         main = s[mid];
         r = mid-1;
      }
      else l = mid+1;
   }

   cout<<main<<endl;
}

Topic -Search an Element in a Nearly Sorted Array using Binary Search
or, check x is in mid/ mid-1 / mid+1 if find show the index otherwise print 0

input-
1
1
8
3 10 20 40 50 70 80 60
10 3 40 20 50 80 70 6<-- searching  element 
output - 
10 index 2
3 index 1
40 index 4
20 index 3
50 index 5
80 index 7
70 index 6
6 index 0

void binaryserch(ll ar[],ll n, ll x )
{
   ll l = 0;
   ll r = n-1;
   
   ll ans = -1;
   while(l<=r)
   {
      ll mid = (l+r)/2;

      if(ar[mid]==x)
      {
         ans = mid;
         break;
      } 
      else if(l<=mid-1 && ar[mid-1]==x)
      {
         ans =mid-1;
         break;
      }
      else if(r>=mid+1 && ar[mid+1]==x)
      {
        ans= mid+1;
         break;
      }

      if(ar[mid]>x) r=mid-2;
      else  l = mid+2;
   }

   cout<<x<<" "<<"index"<<" "<<ans+1<<endl;
}

int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll n;
      cin>>n;
      ll ar[n];
      
      f(i,0,n)
      {
         cin>>ar[i];
      }
      f(i,0,n)
      {
         ll x;
         cin>>x;
         binaryserch(ar,n,x);
      }   
   }
   
   return 0;
}

##### BINARY_SEARCH(cps)
ll p =  (upper_bound(v.begin(),v.end(),find))-v.begin();
ll p =  (upper_bound(v.begin(),v.end(),find))-v.begin();
if(p>n || prev == p ) break;
prev = p;  previous paile break; boro man / choto man kujar khetre arrray te ei condition dile TLE khabo namespace name
if(p >ser.size()-1) vector size er baire handle kra lagle 
{
    cout<<-1<<" "<<-1<<endl;
}

lowerbound hocche first element which is not less then x 
upperbound hocche first elemetn which is greter then x 
lowerbound hocche array er emn ekta min  index  jekhane x k boshale pura array sorted thake like - 2 3 3 5 --x=3 hole lowerbound index will be 1 number idx
upperbound hocche array er emn ekta max index  jekhane x k boshale pura array sorted thake like -  2 3 3 5 --x=3 hole upperbound index will be 3 number idx
ll upperbound(vector<ll>& v , ll search, ll size)                                              idx-0 1 2 3
{

    ll l = 0 , r= size-1;
    ll ans = size;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        if(v[mid]>search)
        {
            ans = min(ans , mid );
            r=mid-1;
            // ct(ans)
        }
        else
        {
            l= mid+1;
        }
    }
    return ans;

}

ll lowerbound(vector<ll>& v , ll search, ll size)
{
    ll l = 0 , r= size-1;
    ll ans = size;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        if(v[mid]>=search)
        {
            ans =min(ans , mid );
            r=mid-1;
        }
        else l=mid+1;
    }
    return ans;
}

###fraction bisection
void  fractionbisection()
{
    double  n,m,k;
    cin>>n;

    double l=0, r = n;

    double main = 1e-6;   /// difference  question e deya thake so eta ques theke neya 
    while(r-l > main )
    {
        double mid = (l + r)/2;

        if((mid * mid ) <= n )
        {
            l=mid; // borabor mid diya lagbe 
        }
        else r = mid; // borabor mid diya lagbe  
    }
                                                 //etao ques e deya thakbe  
    cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);//frac(4); cout<<a; 1.1234
    cout<<l<<endl; /// can print any of them l or r !!!! 
}

#NUMBER_THEORY
#primility test

2 way to do 
#1 less complexity
bool prime(int n)
{
    for(ll i=2;i<=sqrt(n);i++)
    {
       if(n%i==0)  return false;
    }
return true;
}
#2 more less complexity
bool prime(int n)
{
    if(n<2) return false;// 1 cant be a prime number
    if(n<=3) return true;// 2 & 3 prime number
    if(n%2 == 0) return false;// even number cant be a prime number
    for(int i=3;i<=sqrt(n);i+=2)//all even num done so we check only odd
    {
        if(n%i==0) return false;
    }
    return true;
} if(prime(n)==true) cout<<prime; else not prime;


#seive of eratosthenes

void seive(ll n)
{
    ll prime[n+1];
    memset(prime,0,sizeof(prime));
    for(ll i=2;i*i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(ll j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(ll i=2;i<=n;i++)
    {
        if(prime[i]==0)
            cout<<i<<" ";
    }
    cout<<endl;
} cin>>n;sieve(n);



another way cps - 
#Prime_genaretion 

const int mx = 1e8;
// bitset<mx>ar;
// vector<int>ar(mx+1);
vector<int>prime;
void primgen( int n )
{
    // Harmonic series 
    // odd numbers
    // sqrt(n)
    // search only those which arenot prime isprime[i]
    // i*i because number less then i already searched --> 5*5=25  i+i=5+5=10(2*5), 15(3*5) ,20 (4*5) 
    vector<ll>ar(n+1);// baire boshale size alada vabe diclear kra lagbe 
    for ( int i = 3; i<=n ; i+=2) ar[i]=1;


    int sq = sqrt(n);

    
    for ( int i = 3; i<=sq ; i+=2)
    {
         if(ar[i])
         {
             for ( int j = i*i; j<=n ; j+=i)
            {
                ar[j]=0;
            }
        }
    }

    prime.push_back(2);
    for ( int i = 3; i<=n ; i+=2)
    {
        if(ar[i]==1)
        {
            prime.push_back(i);
        }
    }
    
}



#prime factorization
//vector< int > v;
void primefec(int n)
{
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ll cnt=0;
            while(n%i==0)
            {
                cnt++;
                n/=i;
                //v.push_back(i);// inserting the fectorize element
            }

            cout<<i<<"^"<<cnt<<" ";//
        }
    }
    if(n>1)cout<<n<<"^"<<1<<endl;////v.push_back(i);// inserting the fectorize element
    else{//
        cout<<endl;//
    }//
}cin>>n; primefec(n); 


### cps way to do 
#### Prime factorization

vector<ll>prime;
// vector<ll>ar(n+1);
// const int mx = 1e7+123;
// bitset<mx> ar;
void primgen( int n )
{
    // Harmonic series 
    // odd numbers
    // sqrt(n)
    // search only those which arenot prime isprime[i]
    // i*i because number less then i already searched --> 5*5=25  i+i=5+5=10(2*5), 15(3*5) ,20 (4*5) 
    vector<ll>ar(n+1);// baire boshale size alada vabe diclear kra lagbe 
    for ( int i = 3; i<=n ; i+=2) ar[i]=1;


    int sq = sqrt(n);

    
    for ( int i = 3; i<=sq ; i+=2)
    {
         if(ar[i])
         {
             for ( int j = i*i; j<=n ; j+=i)
            {
                ar[j]=0;
            }
        }
    }

    prime.push_back(2);
    for ( int i = 3; i<=n ; i+=2)
    {
        if(ar[i]==1)
        {
            prime.push_back(i);
        }
    }
    
}
vector<int>primefector(int n)
{
    // O(sqrt(n))/ln(sqrt(n))
    vector<int>fectors;
    for(  auto u : prime)
    {
        if( 1ll * u * u >n) break;
        
        if(n%u == 0 )
        {
            while( n% u == 0)
            {
                fectors.push_back(u);
                n/=u;
            }
        }
    }
    if(n>1)  fectors.push_back(n);
    return fectors;
}


int main()
{
    speed 
    int lim = 1e7;
    primgen(lim);

    vector<int>fectors = primefector(40131);

    ita2(fectors)
}



###CPS 
### NUMBER OF DIVISORS ( NOD )

vector<ll>prime;
// vector<ll>ar(n+1);
// const int mx = 1e7+123;
// bitset<mx> ar;
void primgen( int n )
{
    // Harmonic series 
    // odd numbers
    // sqrt(n)
    // search only those which arenot prime isprime[i]
    // i*i because number less then i already searched --> 5*5=25  i+i=5+5=10(2*5), 15(3*5) ,20 (4*5) 
    vector<ll>ar(n+1);// baire boshale size alada vabe diclear kra lagbe 
    for ( int i = 3; i<=n ; i+=2) ar[i]=1;


    int sq = sqrt(n);

    
    for ( int i = 3; i<=sq ; i+=2)
    {
         if(ar[i])
         {
             for ( int j = i*i; j<=n ; j+=i)
            {
                ar[j]=0;
            }
        }
    }

    prime.push_back(2);
    for ( int i = 3; i<=n ; i+=2)
    {
        if(ar[i]==1)
        {
            prime.push_back(i);
        }
    }
    
}

ll NOD( ll n)
{
    // O(sqrt(n))/ln(sqrt(n))
    ll nod = 1;
    for(  auto u : prime)
    {
        if( 1ll * u * u >n) break;

        if(n%u == 0 )
        {
            ll cnt = 0;
            while( n% u == 0)
            {
                n/=u;
                cnt++;
            }
            cnt++;
            nod*=cnt;
        }
    }
    if(n>1) 
    {
        nod*=2;
        //cause divisor is one so count will be 0,1
    }
    return nod;
}


##Power 
#Binary_Exponentiation
//0(log2(p)) 
ll binaryexponentiation(ll base, ll power,ll mod) 
{
    //2^9
    ll res=1;
    while(power)
    {
        if(power%2==1)
        {
            res=(res*base)%mod;
            power-=1;
        }
        else{
            base=(base*base)%mod;
            power/=2;
        }
    }
    return res;
} cin>>n>>m; cout<<binaryexponentiation(n,m,1e9);


#matrix_multiplication

void multipiltionu()
{
	ll n,r,c,r1,c1;

	cin>>r>>c;
	int fir[r][c];

	f(i,0,r)
	{
		f(j,0,c)
		{
			cin>>fir[i][j];
		}
	}

	cin>>r1>>c1;
	int sec[r1][c1];

	int mul[r][c1];
	
	f(i,0,r1)
	{
		f(j,0,c1)
		{
			cin>>sec[i][j];
		}
	}
	ll sum=0;
	
	 f(i,0,r)
	 {
		f(j,0,c1)
		{
			f(k,0,c)
			{
				sum=sum+fir[i][k] *sec[k][j];
			}
			mul[i][j]=sum;
				sum=0;
		}
	 }
	 f(i,0,r)
	 {
		f(j,0,c)
		{
			cout<<fir[i][j]<<" ";
		}
		cout<<endl;
	 }
	 cout<<endl;
	f(i,0,r1)
	 {
		f(j,0,c1)
		{
			cout<<sec[i][j]<<" ";
		}
		cout<<endl;
	 }
	cout<<endl;
	 f(i,0,r)
	 {
		f(j,0,c1)
		{
			cout<<mul[i][j]<<" ";
		}
		cout<<endl;
	 }
 }
#matrix_Exponentiation
#define N 101
ll ar[N][N],I[N][N];
ll mod = 1000000007;
//even				A(base)     A(base)
// odd					I        base(A)
void multiplication(ll A[][N],ll B[][N],ll n)
{
	// for odd A[][N] is I[][N] (result) ans B[][N] is base matrix ar[][]
	ll i, j,k;
	// ll n,r,c,r1,c1;

	int R[n+1][n+1];//<- etar modde base * res kre rakse odd er ketre
	//for odd R = I*A--> first I*A then insert the value in result(I[]{})

	
	// ll sum=0;
	
	 for(i=0;i<n;i++)
	 {
		for(j=0;j<n;j++)
		{
			R[i][j]=0;//first if there any gervage value clear that and insert zero
			for(k=0;k<n;k++)
			{
				ll sum=( A[i][k] * B[k][j] )% mod;
				R[i][j]=(R[i][j]+sum)%mod;
			}
			// mul[i][j]=sum;
				// sum=0;
		}
	 }
	
	 for(i=0;i<n;i++) // erpr R e ja rakse ta abr res(I=10 ) e dukai dise odd er khetre
	 												//	01
	 {
		for(j=0;j<n;j++)
		{
			A[i][j]=R[i][j];/// inserting result matrix value in A matrix
			//res = I*A ( res * ar(base))
		}
	 }
 }

void power(ll A[][N],ll n , ll p)
{
	ll i,j;

	// | 1 0 |*  |1 2 |   = |1 2|
	// | 0 1|   |2 3 |      |2 3|

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				I[i][j]=1;//digonal 1 
			}
			else{
				I[i][j]=0;
			}
		}
	}
	// 1 0<-
	// 0 1 <-for getin this metrix doing this -^

	while(p)// p!=0
	{
		if(p%2==1)
		{
			multiplication(I,A,n); // I*A matrix and n is size
			// in odd res * base  // here I *A
			p--;
		}
		else
		{
			multiplication(A,A,n); // A*A matrix and n is size
			// in evem base * base // here A * A
			p/=2;
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			A[i][j]=I[i][j];/// inserting result matrix value in A matrix
		}
	}
}



void solve()
{
	ll n,p;
	cin>>n>>p;
	// int ar[n][n];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>ar[i][j];
		}
	}
	power(ar,n,p);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
} cin>>t; cin>>n>>p;(n=row,collum,p=power) then cin>>ar[n][n];



////

#count number of divisors

set<ll>s;
void divisor(ll n)
{

	for(ll j = 1;j<=sqrt(n);j++)
	{
		if(n%j==0)
		{
			s.insert(j);
			s.insert(n/j);
		}
	}
} cin>>x; divisor(x);


ll gcd(ll a, ll b)
{
    if((a%b)==0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}


#USing compare in sort
bool cmp( pair<ll , pair < ll ,ll>>x ,pair<ll , pair < ll ,ll>>y )
{
    if(x.first ==  y.first ) return x.second.first < y.second.first; 
    else if(x.first > y.first )  return true ;
    else return false ;
}

in vector if the sorting elements are in vector then thake <ll>element ,<ll>element ;
in vector if the sorting elements are in vector pair then thake  pair < ll ,ll>>x ,  pair < ll ,ll>>y,
in vector if the sorting elements are in vector pair pair  then thake   pair<ll , pair < ll ,ll>>x , pair<ll , pair < ll ,ll>y;

tacniq is take insert of the vector < > and then use x,y anything;



#number_theory
1. Harmony Series
To get the divisor in small time
Input:        Output:
3           
16   ->       5
17    ->      2        
18   ->       6


const int mx = 1e7;
int ar[mx];

int main()
{
   speed

   ll lim = 1e6+25;
   fr(i,1,lim)
   {
      for(ll j = i ; j<= lim ; j+=i )
      {
         ar[j]++;
      }
   }

   ll t;
   cin>>t;
   while(t--)
   {
       ll x ;
       cin>>x;
       cout<<ar[x]<<endl;
   }
}


print the Specific number divisor 
1 - >1
2 ->1 2
10 ->1 2 5 10


const int mx = 1e7;
int ar[mx];

int main()
{
    speed
    ll lim;
    cin>>lim;
    vector<ll>d[lim+1];
    fr(i,1,lim)
    {
        for(ll j = i ; j<= lim ; j+=i )
        {
            ar[j]++;
            d[j].push_back(i);
        }
    }
    
    f(i,0,d[lim].size())
    {
        cout<<d[lim][i]<<" ";
    }
    cout<<endl;


    //   // for( ll i = 0 ; i<vectorsize; i++) 
    //   { for( ll j = 0 ; j< v[i].size() ; j++) 
    //   { cout << v[i][j]<<" "; }  cout<<endl; }
}







//  Topic- Sort kra chara vector er right side e par element er min value  koita bair kra O(1) e
// PDBS 

vector<ll>ans;
ordered_mset x ; 
for(ll i = n-1 ;i >=0 ;i--)
{
    sum+=x.order_of_key(ans[i]);
    x.insert(ans[i]);
}






TOPIC- checking regular bracket seq or not
int brreg(string str) 
{
   stack<char> s;

   for (char bracket : str) 
   {
      if (bracket == '(' || bracket == '[' || bracket == '{') 
      {
         s.push(bracket);
      } 
      else if (bracket == ')' || bracket == ']' || bracket == '}') 
      {
         if (s.empty()) 
         {
            return false;
         }
         char top = s.top();
         s.pop();

         if ((bracket == ')' && top != '(') || (bracket == ']' && top != '[') ||
               (bracket == '}' && top != '{')) 
         {
               return false; 
         }
      }
    }
    return s.empty();
}


Or, 
ll cnt = 0 ; 
for(auto u : s)
{
    if(u=='(') cnt++;
    else cnt--;
}
if(cnt!=0)
{
    cout<<"NOT regular bracket seq"<<endl;
}
else cout<<"Regular bracket seq"<<endl;


TOPIC - 2D vector size
 auto sz = 0 ;
   for( auto u : vectorname)
   { 
      if(u.size()>0)
         sz++;
   }

Topic - 2D vector e shb . / 0 / 1 neya 
vector<vector<char>> ans(n,vector<char>(m,'.'));

f(i,0,n)
{
    f(j,0,m)
    {
        // ans[i][j]='.';
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}

Topic -Kadane's Algorithm

int main()
{
  ll n ; cin>>n;
  vector<ll>v(n);
  f(i,0,n) cin>>v[i];

  ll sum = 0 , mx = LONG_LONG_MIN;
  f(i,0,n)
  {
    if(sum<=0) sum=0;
    sum+=v[i];
    mx= max(mx, sum);
  }
  cout<<mx<<endl;
}

Topic - Partition in arrray jumping by x 0(n)

f(i,0,k)
{
    ll pos = -1; 
    for(ll j = i ; j<n;j+=k)
    {
        if(pos == -1)
        {
            pos = v[j];
        }
        else 
        {
            ll ds = abs(pos-v[j]);
            gd.push_back(ds);
            pos = v[j];
        }
    }
}




Topic - PRint BW
BWBWBW
WBWBWB
BWBWBW
WBWBWB
BWBWBW


const int mx = 1000 ;
vector<char>adj[mx];
vector<ll>vis[mx];
int n , m , cnt ;
vector<char>ans[mx];

int main()
{

   ll n, m ;
   cin>>n>>m;

   f(i,0,n)
   {
      f(j,0,m)
      {
         char a ;
         cin>>a;
         adj[i].push_back(a);
         vis[i].push_back(0);
         ans[i].push_back(0);
      }
   }
   int f = 1 ;

   f(i,0,n)
   {
      f(j,0,m)
      {
         if(f)
         {
            if(adj[i][j]=='.')
            {
               adj[i][j]='B';
            }
            else
            {
               f=0 ;
               continue;
            }

            f=0;
         }
         else 
         {
            if(adj[i][j]=='.')
            {
               adj[i][j]='W';
            }
            else 
            {
               f=1;
               continue;
            }

            f=1;
         }

      }
      if(m%2==0)
      {
         if(f) f=0;
         else f=1;
      }
      
   }

   f(i,0,n)
   {
      f(j,0,m)
      {
         cout<<adj[i][j];
      }
      cout<<endl;
   }
}

Topic- map  backtracking map element from the source 
while(!pr[b].empty())
{
    vec.push_back({pr[b],b});
    b=pr[b];
}



Topic - To check the distance from every single number 

ll lst = -1 ;
ll cow = m ;
for(auto u : v)
{
    if(u-lst >= mid || lst == -1)
    {
        cow--;
        lst = u; 
    }
    if(!cow) break;
}




Topic - distance of two point 
double distance(double x1, double y1, double x2, double y2) 
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

Topic - two circle is interset or not?
bool circle(double x1, double y1, double x2, double y2, double r) 
{
    double d = distance(x1, y1, x2, y2);
    if (d <= 0) 
        return true;
    else if (d <= r * 2) 
        return true;
    else 
        return false;
}


TOpic - Print big number from 1 to n 
Example - in 9 
output - 4 3 2 
int main()
{
    speed 
    ll n ; cin>>n;
    map<ll,ll>mp;
    vector<ll>v;
    if(n==1) cout<<1<<endl;
    else 
    {
        ll total =  0 ; 
        fr(i,1,n)
        {
            
            total+=i;
            v.push_back(i);
            if(total >= n ) break;
        }
        

        ll extra = total - n ;
        auto it = find(v.begin(),v.end(),extra);

        // if(v.count(it))
        if(it!=v.end())
        {
            v.erase(it);
        }
        ita2(v)
    }
    
}

TOPIC- sliding window 

int minSubArrayLen(int target, vector<int>& nums) 
{
    vector<int>pre(n+1);
    int sum = 0;
    int mn = INT_MAX ; 
    int left = 0 ; 
    for(int i = 0 ; i< nums.size() ; i++ )
    {
        sum+=nums[i];

        if(sum>=target)
        {
            while(sum>=target)
            {
                mn = min ( mn , i-left+1);
                sum-=nums[left];
                left++;
            }
        }
    }
    if(mn==INT_MAX) return 0;
    else return mn ; 

}

Topic - clockwise & anticlockwise value (3 er 5 ghor anti clockwise bair kra )

anticlockwise -> 
total clock is n=7 
we have to anticlock x= 5 times from e= 3 then ans will be 
ll ans = (((e - x) % n) + n) % n;
ans =  ( ( (3 - 5) % 7 )+ 7 ) %7 ; 

clockwise -> 
total clock is n=7 
we have to anticlock x= 5 times from e= 3 then ans will be 
ll ans = (e + x) % n;
ans    = (3 + 5) % 7 ;





Topic - Matrix 90 degree rotate 

 for (int i = 0; i < N / 2; i++) 
 {
    for (int j = i; j < N - i - 1; j++) 
    {

        // Swap elements of each cycle
        // in clockwise direction
        int temp = a[i][j];
        a[i][j] = a[N - 1 - j][i];
        a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
        a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
        a[j][N - 1 - i] = temp;
    }
}

If for work with rotating value solo then count those rotating char or value in here -> 
for (int i = 0; i < N / 2; i++) 
{
    for (int j = i; j < N - i - 1; j++) 
    {
        // this r the location of the 4 value 
        //which r rotating every time in example  4*4 matrix
        map<char,ll>mp;
        mp[a[i][j]]++;
        mp[a[N - 1 - j][i]]++;
        mp[a[N - 1 - i][N - 1 - j]]++;
        mp[a[j][N - 1 - i]]++;
        char big = mp.rbegin()->first;
        for(auto u : mp)
        {   
            total+=((big-u.first)*u.second);
        }
    }
}



Topic - Circular array position check ( 0 base index )

 HEre p is the position of the circular array 
 if position is 3 then the code will be -> 
ll p = 0 ,cnt = 0 ; 
    while(!xx.empty())
    {
        // cnt++;
        // if(cnt==) break;
        p+=(m-1);
        // cout<<p<<m-1<<xx.size()<<endl;
        // ita2(xx)
        p%=xx.size();
        ll value = *xx.find_by_order(p);
        cout<<value<<" ";
        xx.erase(value);
    }

Or,
ll pos = n-1 ; // 0 base indx 
while(1)
{
    pos-=v[pos]; // cycle = v[pos] ; // etw ghor age jauua lagbe 
                // position theke v[pos] ghor age jauua lgabe 
    pos= (pos+n)%n;
}
/*
idx-0 1 2 3 4
    1 2 3 4 5
    pos = 4 
    pos -=v[pos]; 4-5 = -1 ; // here v[pos] we use as e 
                            how far we shoud go on a cycle
    pos= (-1+n) = 5-1 = 4 % 5 = 4 ; 
*/
Topic - Prefix Xor 

pre[r]^pre[l-1]; // (pre[0] to pre[l-1] )^ (pre[0] to pre[l-1]) e shb 0 hoi jabe r thakbe l to r just 















// Topic - 2 4 5 3 1 evabe print kra 
int main()
[
    vector<ll>v(n+1,-1);

        ll ps = n; 
        ll sp = 1; 
        ll og = 1; 
        n++;
        ll av = n , gh = 0 ; 
        while(n--)
        {
            // cout<<n<<endl;
            if(n%2)
            {
                v[ps]=og; ps-- ; og++;
            }
            else 
            {
                v[sp]=og; og++ ; sp++;
            }
            if(n==1) break;
        }
        fr(i,1,av-1) cout<<v[i]<<" ";
        cout<<endl;
]



// Topic - 5 1 4 2 3 print 

int main()
{ 
    speed
    ll  n , k ,f=0; 
    cin>>n;
    vector<ll>v(n),ans,anss(n);
    f(i,0,n)
    {
        cin>>v[i];
    }
 
    ans = v ;
    vsort(ans)
    ll cnt = 0 ;
    f(i,0,n)
    {
        if(!f)
        {
            anss[i]=ans[n-cnt-1];
            f=1;
        }
        else 
        {
            anss[i]=ans[cnt]; f= 0; cnt++;
        }
    }
   
    ita2(anss)
}










Topic - Substring Palindrome
/*
Length - l
length  1 i will be i+l-1  
        2 i will be i+l-1 
        3 i will be i+l-1 
        4 i will be i+l-1 
        5 i will be i+l-1 
        
        abcdef
        01
    2Length substring 01(ab) if(i==0) then i+Length = 0+2 = 2-1 for 0 base 
*/

vector<vector<int>>dp(n,vector<int>(n,false));
for(int i = 0 ; i<n ; i++ ) dp[i][i]=1;
for(int l = 2 ; l<= n ; l++) // l means length string length 
{
    for(int i = 0 ; i+l-1<n ;i++)
    {
        int j = i+l-1;
        if(i==j) dp[i][j]=true; // length one alwz true 
        else if(i+1==j) dp[i][j]=(s[i]==s[j]) ; // length two true is 0==1
        else 
        {
            dp[i][j]= (s[i]==s[j] && dp[i+1][j-1]); /// upperlength will be 
                                                    // s[i]==s[j] and there 
                                                    // inside substring must 
                                                    // be a palindrome which is i+1 ,j-1
        }

        if(dp[i][j]) cnt++;
    }
}

Topic - 3D vector 
vector<vector<vector<ll>>>dp(n+1,vector<vector<ll>>(m+1,vector<ll>(l+1,-1)));





Topic - MONOTONIC DEQUE // every partition max / min value 
/*
    shamner theke partition er bairer value delete 
    last er theke partition er vitore max value update or delete 
    thats the reason front e mx value thake 
*/


deque<int>de;
vector<int>ans ; 
partition = 3 ; 

for(int i = 0 ; i< n ; i++ )
{
    // step 1 - erase position which r less then partitions
    while(!de.empty() && de.front()<=i-partition)
    {
        de.pop_front();
    }
    // step 2 - erase position which r less then current value
    while(!de.empty() && v[de.back()]<v[i]) // just chg < to > to get min
    {
        de.pop_back();
    }

    // insertion 
    de.push_back(i);
    
    // for each pertition show ans 
    if(i>=partition-1) ans.push_back(v[de.front()]);
}
// or,  done with priority queue

int n = nums.size();
    priority_queue<pair<int,int>>pq;
    vector<int>ans;
    for(int i = 0 ; i< n ; i++ )
    {
        while(!pq.empty() && i-k >= pq.top().second) pq.pop();

        pq.push({nums[i],i});

        if(i+1>=k) ans.push_back(pq.top().first);
    }    


// Topic - Next permutation // TC n!
do{
       // first work here 
}while(next_permutation(per.begin(),per.end()));





Topic - r some number of x1y1 cover the especific N ? 

/*
iN THIS FUNCTION ITS ALSO SHOW THE MINIMUM X1Y1 NEED TO 
COVER THE N 
*/

int minTaps(int n, vector<int>& ranges) {
    vector<int>v(n+1,0);
    for(int i = 0 ; i <ranges.size() ; i++ )
    {
        int st = max(0,i-ranges[i]) ; // min 0 hbe 
        int ed = min(n,i+ranges[i]); // max n hbe 
        v[st]=max(v[st],ed);
    }

    int cnt = 0 ;  int cur = 0 ; int end = 0 ;

    for(int i = 0 ; i<=n ; i++ )
    {
        if(i>end) return -1; // if not cover then show -1 
        if(i>cur) { 
            cnt++;
            cur= end; 
        }

        end = max(end , v[i]);
    }

    return cnt; // min num of x1y1 need to cover 
}


// Topic - Array per layer print 
    auto all=[&](ll r , ll c , ll x , ll y)->int{
 
        vector<char>vec , age , lst ,ag ; 
        // cout<<r<<" "<<c<<" "<<x<<" "<<y<<endl;
        fr(i,r,y) 
        {
            vec.push_back(v[r][i]);
            if(ag.size()<3) ag.push_back(v[r][i]);
        }
        int f = 0 ; 
        fr(i,c,x) 
        {
            if(!f) 
            {
                f=1;  continue; 
            }
            vec.push_back(v[i][y]);
            if(ag.size()<3) ag.push_back(v[i][y]);
            // cout<<i<<y<<" ";
        }
        // cout<<endl;
        if(vec.size()) vec.pop_back(); 
        f = 0 ; 
        
        fr(i,r,y) age.push_back(v[x][i]);
        reverse(age.begin(),age.end());
        for(auto u : age) 
        {
            vec.push_back(u);
            if(ag.size()<3) ag.push_back(u);
        }
        
        fr(i,c,x) 
        {
            if(!f) 
            {
                f=1;  continue; 
            }
            lst.push_back(v[i][r]);
        }
        if(lst.size()) lst.pop_back(); 
 
        reverse(lst.begin(),lst.end());
        for(auto u : lst) vec.push_back(u);
        for(auto u : ag) vec.push_back(u);
        ll cn = 0 ; 
        f(i,0,vec.size()-3)
        {
            if(vec[i]=='1' && vec[i+1]=='5' && vec[i+2]=='4' && vec[i+3]=='3')cn++;
        }
        // ita2(vec)
        return cn ; 
    };
    ll r = 0 , c = 0 , x = n-1 , y = m-1 ;
    while(r<=x && c<=y)
    {
        // if(gt==5) break; 
        // gt++; 
        // cout<<r<<" "<<c<<" "<<x<<" "<<y<<endl;
 
        cnt+=all(r,c,x,y);
        r++, c++,x--,y-- ; 
    }

// Topic - Array diagonal value print 
/*
    8 7
     5 8
      6 5
       7 2
        9 6
         5 8
*/

f(g,0,n)
{
    ll mx = 0 ,xm = 0 ;
    for(ll i= 0 , j=g ; j<n ; i++,j++)
    {
        cout<<vec[i][j]<<" "<<endl;
        cout<<vec[j][i]<<" "<<endl;
    }
}



// Topic - Return the min point where all query are intersect 


ll lo = 1 , hi = inf ; 
if(o=='<')
{
    ll less = low[r].order_of_key(c);
    hi= min(hi,less);
}
else 
{
    ll gre = up[r].order_of_key(c) ;
    gre = (n-gre)+1 ;
    lo = max(lo,gre);
}

if(lo>hi) cout<<-1<<endl;
else cout<<lo<<endl;



// TOPIC- ABA / BAB / AAB   /BAB       min way to get this type of seq



void solve()
{
    long long n , q, m ,k; cin>>n;
    string s; cin>>s;
    

    map<char,ll>mp;

    int flag = 0 ,cnt = 0 , f = 0 ; 
    ll a = 0 , b = 0 , ans = 0 ;
    f(i,0,n)
    {
        if(s[i]=='A')
        {
            if(b>0) 
            {
                b--;
                a++;
            }
            else 
            {
                ans++;
                a++;
            }
        }
        else 
        {
            if(a>0) 
            {
                a--;
                b++;
            }
            else 
            {
                ans++;
                b++;
            }
        }
    }
    C(ans)
}   