                                             /*In the name of Almighty Allah*/
#include<bits/stdc++.h>
using namespace std;
#define    speed   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define     ll     long long
#define                 MOD                         1000000007
#define  testcases   ll t; cin >> t; while (t--) 
#define                 YES                         cout<<"YES"<<endl;
#define                 Yes                         cout<<"Yes"<<endl;
#define                 yes                         cout<<"yes"<<endl;
#define                 NO                          cout<<"NO"<<endl;
#define                 no                          cout<<"no"<<endl;
#define                 No                          cout<<"No"<<endl;



/*
Topic - rho  // show a divisors of a number in O(N^(1/4))
Topic - Miller Rabin // check its prime or not? // log(n)
Topic- Harmony Series
Topic- Prime_genaretion  // seive of eratosthenes
Topic - Prime Test
Topic- Prime_Fectorization 
Topic- Number of division (NOD ) //For exm if x=18, the correct answer is NOD(x)= 6 , 6 because its divisors are 1,2,3,6,9,18
Topic- sum_of_number_Division// summation of Number of division of each int from 1 to n is  its works  like snod(5)= 1->1 , 2->2, 3->2 , 4->3 , 5->2  snod(5)=1+2+2+3+2=10
Topic- Sum of Divsors (SOD) ///sum of those numbers which can divide n .. ex-> 5->1+5 = 6
Topic- Phi Function (how many numbers gcd with n  is 1 )
Topic- Phi Function Sum of Co-prime Numbers of an Integer
Topic- Get n fectorial prime fectorization // all prime power in n! // All fectorization of 1 to n (n!)
Topic- Checking perfect squre or not?
Topiv- Some tecniq to get the time complexity
Topic- Get the fectorial by doing MOD // using recurtion 
Topic- HOw do i know that any value is the power of 2? 
*/



/*


observation-> GCD 
suppose  gcd of a ,b , c , d  is x 

then a= x * x1 ( x1 can be even or odd )
then b= x * x1 ( x1 can be even or odd )
then c= x * x1 ( x1 can be even or odd )
then d= x * x1 ( x1 can be even or odd )

but not all x1 will be same or even or odd 
if all x1 will be same or even or odd then gcd(x) will be x*2 or x* same number of all (x1)





observation-> modulo
a%b = x ;
Always x will be , x < b 
Exm - 4%3 = 1 ;   7% 4 = 3 ;,  ... 4%4 == 0 

Another one ->
->(x-n)%n == (x%n) both same cause 
(8-3)%3 == 5%3 == 2 both same 


Another one ->

1, 2, 3, 4, 5 modulo of all of them will be smalles one 1
2, 3, 4, 5 modulo of all of them will be smalles one 2
3, 4, 5 modulo of all of them will be smalles one 3


Another one 
1. (x+y)%m = (x%m + y%m)%m 
2. (x-y)%m = (x%m - y%m)%m 
3. x%m =a , where , ; a>= 0 && a<=m-1 

*/

/*
    Ignore rounding system by make it to normal int 
    if  (n/2 ) - ans > (n/2)-(i+1) ;
    then product both statement by 2 and get 

        2*((n/2)-ans ) > 2*((n/2)-(i+1));
        ((2n/2)-2*ans ) > ((2n/2)-2*(i+1));
        ( n- 2*ans ) > (n - 2 * (i+1));

*/


/*

number - > 679 

679 / 10 = 67 ..... 67/10 = 6 delete last number 
679%10 = 9 .......67 %10 == 7 last number show 
*/


// observation->
// x^1 + x^2 +x^3 + x^4 < x^5




/*
observation->
	1,  2, 4, 7, 8, 14, 28, 56
    1   2  3  4  4   3    2  1
*/


/*
observation->
100/3 = ?
100-3  -> 97
97-3   -> 94
94-3  -> 91
91-3  -> 88
88-3  -> 85
85-3  -> 97
.
.
.....
1-3  <0


100-3  -> 97
100-3*2  -> 94
100-3*3  -> 91
100-3*4  -> 88
100-3*5  -> 85
100-3*6  -> 82
100-3*7  -> 79
.
.
...
1-3*33  < 0

*/
// 1*1 = 56
// 2*2 = 56
// 3*3 = 56
// 4*4 = 56
/*
    left shift ->
    1<<0 = 2^0 ;
    1<<1 = 2^1 ;
    1<<2 = 2^2 ;
    1<<3 = 2^3 ;
    1<<4 = 2^4 ;
    1<<...and so on....
*/

// prime size 1 to 1e9
// v.push_back(3);
// 	v.push_back(11);
// 	v.push_back(101);
// 	v.push_back(1009);
// 	v.push_back(10007);
// 	v.push_back(100003);
// 	v.push_back(1000003);
// 	v.push_back(10000019);
// 	v.push_back(100030001);
//cps

// lcm(a,b)= a*b / gcd(a,b);

//     0101 (decimal 5)
// AND 0011 (decimal 3)
//   = 0001 (decimal 1)

//     0011 (decimal 3)
// AND 0010 (decimal 2)
//   = 0010 (decimal 2)


/*ax+by=c here c is gcd(a,b) 
 or multiple of gcd(a,b) (gcd(a,b)*k=c) 
 or c must be devide by gcd(a,b) otherwise this cant be solved 
*/




//Topic- Harmony Series
// To get the divisor in small time
// Input:        Output:
// 3           
// 16   ->       5
// 17    ->      2        
// 18   ->       6

const int mx = 1e7;
int ar[mx];

int main()
{
   speed
   ll lim = 1e6+25;
   for( ll i = 1 ; i<=lim ; i++)
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



Topic - Prime Test
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}












//Topic- Prime_genaretion 

vector<ll>prime; 
const ll mx = 1e7+123;
bitset<mx> ar;
void primgen( ll n )
{
    // Harmonic series 
    // odd numbers
    // sqrt(n)
    // search only those which arenot prime isprime[i]
    // i*i because number less then i already searched --> 5*5=25  i+i=5+5=10(2*5), 15(3*5) ,20 (4*5) 
    // vector<ll>ar(n+1);// baire boshale size alada vabe diclear kra lagbe 
    for ( ll i = 3; i<=n ; i+=2) ar[i]=1;


    ll sq = sqrt(n);

    
    for ( ll i = 3; i<=sq ; i+=2)
    {
         if(ar[i])
         {
             for ( ll j = i*i; j<=n ; j+=i)
            {
                ar[j]=0;
            }
        }
    }

    ar[2]=1;
    prime.push_back(2);
    for ( ll i = 3; i<=n ; i+=2)
    {
        if(ar[i]==1)
        {
            prime.push_back(i);
        }
    }
    
}

int main()
{
    ll lim = 1e7; // if we have to get n number of prime then we give to lim = sqrt(n) 
    // if ques says that n = 1e16 then can can easyly generate here by giving lim = sqrt(n)= 1e8


    primgen(lim); // by using this funtion it will add all prime between 1 to lim in vector<ll>prime ;
}
















// Topic- Prime_Fectorization 
// #some note
// if any number multiple by 2,
// n times then the prime fectors of that number is n + others fectors and
// multiple number must be prime number like we multiple here 2 
// exm - if we multiply 3(prime number) with 13(prime number ) , 9 times the fectors will be 
// 3 3 3 3 3 3 3 3 3 13


vector<ll>prime; 
const ll mx = 1e7+123;
bitset<mx> ar;
void primgen( ll n )
{
    // Harmonic series 
    // odd numbers
    // sqrt(n)
    // search only those which arenot prime isprime[i]
    // i*i because number less then i already searched --> 5*5=25  i+i=5+5=10(2*5), 15(3*5) ,20 (4*5) 
    // vector<ll>ar(n+1);// baire boshale size alada vabe diclear kra lagbe 
    for ( ll i = 3; i<=n ; i+=2) ar[i]=1;
 
 
    ll sq = sqrt(n);
 
    
    for ( ll i = 3; i<=sq ; i+=2)
    {
         if(ar[i])
         {
            for ( ll j = i*i; j<=n ; j+=i)
            {
                ar[j]=0;
            }
        }
    }

    ar[2]=1;
    prime.push_back(2);
    for ( ll i = 3; i<=n ; i+=2)
    {
        if(ar[i]==1)
        {
            prime.push_back(i);
        }
    }
    
}
 
// ^ by using  prime generetion we get all the prime between 1 to lim then we do fector operation->
vector<ll>primefector(ll n)
{
    // O(sqrt(n))/ln(sqrt(n))
    vector<ll>fectors;
    for(  auto u : prime)
    {
        if( 1ll * u * u >n) break; 
 
        if(n%u == 0 )
        {
            // fectors.push_back(u); // if they said unique means not double same thing
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
    int lim = 1e7; // if we have to get n number of prime then we give to lim = sqrt(n) 
    // if ques says that n = 1e16 then can can easyly generate here by giving lim = sqrt(n)= 1e8

    primgen(lim); // by this genereting primes between 1 to lim in vector<ll>prime 
    ll n ;
    cin>>n; 
    vector<ll>fectors = primefector(n);
}

// or

//vector< ll > v;

void primefec(ll n)
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
}











// Topic- Number of division (NOD )  
// For example, if 
// x=18, the correct answer isNOD(x)= 6
// 6 because its divisors are 1,2,3,6,9,18

vector<ll>prime; 
const ll mx = 1e7+123;
bitset<mx> ar;
void primgen( ll n )
{
    // Harmonic series 
    // odd numbers
    // sqrt(n)
    // search only those which arenot prime isprime[i]
    // i*i because number less then i already searched --> 5*5=25  i+i=5+5=10(2*5), 15(3*5) ,20 (4*5) 
    // vector<ll>ar(n+1);// baire boshale size alada vabe diclear kra lagbe 
    for ( ll i = 3; i<=n ; i+=2) ar[i]=1;


    ll sq = sqrt(n);

    
    for ( ll i = 3; i<=sq ; i+=2)
    {
         if(ar[i])
         {
             for ( ll j = i*i; j<=n ; j+=i)
            {
                ar[j]=0;
            }
        }
    }

    ar[2]=1;
    prime.push_back(2);
    for ( ll i = 3; i<=n ; i+=2)
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
} // common divisors of two number is nod(gcd(a,b)); 

// or get all the number of divisors in array 

int const mxoo = 1e7+123;
ll ar[mxoo];
int main()
{
    speed 
    ll lim = 1e7;
    
    for(ll i = 1 ; i<=lim ; i++ )
    {
        for(ll j = i ; j<=lim ;j+=i)
        {
            ar[j]++;
        }
    }
}















// Topic- sum_of_number_Division 
// its works is summation of Number of division of each int from 1 to n 
              //int->division
// like snod(5)= 1->1 , 2->2, 3->2 , 4->3 , 5->2  snod(5)=1+2+2+3+2=10
ll sumofnumberDivision(ll n)
{
    //0(sqrt(n))
    ll snod = 0;
    ll sq= sqrt(n);
    for(ll i = 1 ; i<=sq ; i++)
    {
        ll total = (n/i)- i ;
        snod +=total ;
    }

    snod*=2;

    snod+=sq;
    
    return snod;
}


















// Topic- Sum of Divsors (SOD)

vector<ll>prime; 
const ll mx = 1e7+123;
bitset<mx> ar;
void primgen( ll n )
{
    // Harmonic series 
    // odd numbers
    // sqrt(n)
    // search only those which arenot prime isprime[i]
    // i*i because nu4mber less then i already searched --> 5*5=25  i+i=5+5=10(2*5), 15(3*5) ,20 (4*5) 
    // vector<ll>ar(n+1);// baire boshale size alada vabe diclear kra lagbe 
    for ( ll i = 3; i<=n ; i+=2) ar[i]=1;


    ll sq = sqrt(n);

    
    for ( ll i = 3; i<=sq ; i+=2)
    {
         if(ar[i])
         {
             for ( ll j = i*i; j<=n ; j+=i)
            {
                ar[j]=0;
            }
        }
    }

    ar[2]=1;
    prime.push_back(2);
    for ( ll i = 3; i<=n ; i+=2)
    {
        if(ar[i]==1)
        {
            prime.push_back(i);
        }
    }
    
}

// ^ by using  prime generetion we get all the prime between 1 to lim then we do fector operation->
ll sod(ll n) //84 =  2^2 * 3^1 * 7^1
{
    // O(sqrt(n))/ln(sqrt(n))
    ll sod = 1;
    for(  auto u : prime)
    {
        if( 1ll * u * u >n) break; 

        if(n%u == 0 )
        {
            ll sum = 1;
            ll pwr=1;

            while( n% u == 0)
            {
                n/=u;
                pwr*=u;
                sum+=pwr ; 
            }
            sod *= sum ; // sod = ( 2^0 + 2^1 + 2^2)* (3^0 + 3^1) 
        }
    }
    if(n>1)  //  (7^0 + 7^1) cause ekane ektai thakbe prime so +1 mean 7^0 and n mean 7^1
    {
        sod *= ( n+1 );// sod = ( 2^0 + 2^1 + 2^2)* (3^0 + 3^1) * (7^0 + 7^1)
    }
    return sod;
}
int main()
{
    speed 
    int lim = 1e7; // if we have to get n number of prime then we give to lim = sqrt(n) 
    // if ques says that n = 1e16 then can can easyly generate here by giving lim = sqrt(n)= 1e8

    primgen(lim); // by this genereting primes between 1 to lim in vector<ll>prime 
    ll t ;
    while(t--)
    {
        ll n ;
        cin>>n;
        cout<<sod(n)<<endl;
    }
}











// Topic- Phi Function (how many numbers gcd with n  is 1 )

vector<ll>prime; 
const ll mx = 1e7+123;
bitset<mx> ar;
void primgen( ll n )
{
    // Harmonic series 
    // odd numbers
    // sqrt(n)
    // search only those which arenot prime isprime[i]
    // i*i because number less then i already searched --> 5*5=25  i+i=5+5=10(2*5), 15(3*5) ,20 (4*5) 
    // vector<ll>ar(n+1);// baire boshale size alada vabe diclear kra lagbe 
    for ( ll i = 3; i<=n ; i+=2) ar[i]=1;


    ll sq = sqrt(n);

    
    for ( ll i = 3; i<=sq ; i+=2)
    {
         if(ar[i])
         {
             for ( ll j = i*i; j<=n ; j+=i)
            {
                ar[j]=0;
            }
        }
    }

    ar[2]=1;
    prime.push_back(2);
    for ( ll i = 3; i<=n ; i+=2)
    {
        if(ar[i]==1)
        {
            prime.push_back(i);
        }
    }
    
}

// co prime // relative rpime
ll eularPHI(ll n) // get how many numbers in 1 to n which gcd with n is 1? means gcd(i,n)=1?
{
    // O(sqrt(n))/ln(sqrt(n))
    ll PHI = n; 
    for(  auto u : prime)
    {
        if( 1ll * u * u >n) break; 

        if(n%u == 0 )
        {
            while( n% u == 0)
            {
                n/=u;
            }
            PHI /= u ;
            PHI*= (u-1); // PHI*= ( (p-1) / p );
        }
    }
    if(n>1) 
    {
        PHI /= n ;
        PHI*= (n-1); // PHI*= ( (p-1) / p ); 
    }
    return PHI;
}
int main()
{
    speed 
    int lim = 1e6;
    primgen(lim);// by this genereting primes between 1 to lim in vector<ll>prime 
    testcases
    {
        ll n ;
        cin>>n;
        // if(n==1) // special case only if said  less than 1 is 0 and 1 
        // {
        //     cout<<0<<endl; continue ;
        // }
        cout<<eularPHI(n)<<endl;
    }
    
}

// or you can calculate all the phi of n in an array using harmonic series
// pri calculate the phi[n] value
const int mxo = 5e6+12 ;
long long harmonicwayPHI[mxo];
int main()
{
    // less complexity then before
    speed 
    int lim = 5e6;
    primgen(lim);// by this genereting primes between 1 to lim in vector<ll>prime 

    for( int i = 1 ; i<= lim ; i++)   harmonicwayPHI[i]=i;


    for(  auto p : prime )//0(nln(n))
    {
        for(int j = p ; j<= lim ; j+=p )
        {
            harmonicwayPHI[j]/= p ;
            harmonicwayPHI[j]*=(p-1) ;
        }
    }

    for(int i=1 ; i<11 ; i++ )// we can print till mxo // wtv we give 1 to  lim & mxo
    {
        cout<<i<<" "<<harmonicwayPHI[i]<<endl;
    }
    output:
    // phi[1] =1
    // phi[2] =1
    // phi[3] =2
    // phi[4] =2
    // phi[5] =4
    // phi[6] =2
    // phi[7] =6
    // phi[8] =4
    // phi[9] =6
    // phi[10] =4

    return 0;
    
}

// or
const int mx = 5e6+5;
unsigned long long phi[mx];
int main()
{
        
    int lim = 5e6;
        for ( int i = 1; i <= lim; i++ ) phi[i] = i;
        for ( int i = 2; i <= lim; i++ ) {
            if ( phi[i] == i ) {
                for ( int j = i; j <= lim; j += i ) {
                    phi[j] *= (i-1);
                    phi[j] /= i;
                }
            }
        }

}












// Topic- Phi Function Sum of Co-prime Numbers of an Integer

vector<ll>prime; 
const ll mx = 1e7+123;
bitset<mx> ar;
void primgen( ll n )
{
    // Harmonic series 
    // odd numbers
    // sqrt(n)
    // search only those which arenot prime isprime[i]
    // i*i because number less then i already searched --> 5*5=25  i+i=5+5=10(2*5), 15(3*5) ,20 (4*5) 
    // vector<ll>ar(n+1);// baire boshale size alada vabe diclear kra lagbe 
    for ( ll i = 3; i<=n ; i+=2) ar[i]=1;


    ll sq = sqrt(n);

    
    for ( ll i = 3; i<=sq ; i+=2)
    {
         if(ar[i])
         {
             for ( ll j = i*i; j<=n ; j+=i)
            {
                ar[j]=0;
            }
        }
    }

    ar[2]=1;
    prime.push_back(2);
    for ( ll i = 3; i<=n ; i+=2)
    {
        if(ar[i]==1)
        {
            prime.push_back(i);
        }
    }
    
}

// co prime // relative rpime
ll eularPHI(ll n) // get how many numbers in 1 to n which gcd with n is 1? means gcd(i,n)=1?
// if you get tle
// you can calculate all the phi of n in an array using harmonic series which is already created before just search-> harmonicwayPHI
{
    // O(sqrt(n))/ln(sqrt(n))
    ll PHI = n; 
    for(  auto u : prime)
    {
        if( 1ll * u * u >n) break; 

        if(n%u == 0 )
        {
            while( n% u == 0)
            {
                n/=u;
            }
            PHI /= u ;
            PHI*= (u-1); // PHI*= ( (p-1) / p );
        }
    }
    if(n>1) 
    {
        PHI /= n ;
        PHI*= (n-1); // PHI*= ( (p-1) / p ); 
    }
    return PHI;
}
int main()
{
    speed

    int lim = 1e6;
    primgen(lim);// by this genereting primes between 1 to lim in vector<ll>prime 
    
    testcases
    {      
        ll n ;
        cin>>n;
        ll total = (n* (n-1)) / 2;
        ll coprimesum = (eularPHI(n)*n) / 2;
        cout<<coprimesum<<endl;
    }
}













//Topic- Get n fectorial prime fectorization // all prime power in n! // All fectorization of 1 to n (n!)

// Example- 8! 
// 1 2 3 4 5 6 7 8 -> 2^7 * 3^2 * 5^1 * 7^1 
//                       2^4   ->    2^6  ->   2^7
// how 2^7? 2 4 6 8 -> 1 2 3 4 -> 1 1 3 2 -> 1 1 3 1 -> 2^7
//                  -> 3^2     -> 3^2
// how 3^2? 3 6     -> 1 2     -> 3^2
//                  -> 5^1     -> 5^1
// how 5^1? 5       -> 1       -> 5^1
//                  -> 7^1     -> 7^1
// how 7^1? 7       -> 1       -> 7^1

int main()
{
    speed

    int lim = 1e6;
    primgen(lim);// by this genereting primes between 1 to lim in vector<ll>prime 
    ll n ;
    vector<pair<ll,ll>>v;
    while(cin>>n)
    {
        if(n==0) break;

        ll ans = 1;
        for(auto u : prime )
        {
            ll cnt = 0;
            if(n/u == 0) break;
            ll secn  = n;
            ll pwo = 0;
            while(secn > 0 )
            {
                cnt+=(secn/u );
                secn/=u;
                pwo++;
            }
            v.push_back({u,cnt});
        }
        for(auto u : v)
        {
            cout<<u.first<<" "<<u.second<<endl;
        }
    }
}







// Topic -  ### Moduler arithmetic 

// /**/

//     mod modulas always cyclelic hoi ->
//     example ->  0-n % 5-> 

//     int    0 1 2 3 4 5 6 7 8 9   10 . . . . . .
//             % % % % % % % % % %  % ....
//             5 5 5 5 5 5 5 5 5 5  5.....
//             0 1 2 3 4 0 1 2 3 4  0. . . .

//     and kno int k n diye mod krle ans obossoi 0 to (n-1) er moddei thakbe
//     (int % n) = 0-(n-1) ; 

//     mulplication
//     (a*b ) %  m = (a%m * b%m )%m 

//     subtraction
//     but in (a-b) % m = (a%m - b%m )
//     ans =(a%m - b%m ); 
//     if((a%m - b%m )  <0) ans+=m ;
//     ans%=m ; 

//     divition
//     (a/b)%m =?
//     (a/b)%m = (a*(b^-1)) % m 

//     (a%m)*(b^-1)%m = (a%m)*(b^(m-2))%m ; // m should be prime
//     exm-> (28/7)%m =( (28%m)* power(7,m-2))%m ; log2(power) / log2(m)
//     n
//      c =
//        k 
//     Nck = n! / ((n-k)! *  k!)

// /**/

void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
ll modMul(ll a, ll b, ll mod) 
{ 
    a %= mod, 
    b %= mod; 
    normal(a), normal(b); 
    return (a*b)%mod; 
}
ll inversemod(ll b , ll mod)
{
    return  (power(b,mod-2,mod)) % mod ;
}
ll moddiv(ll a , ll b , ll mod)
{
    return modMul(a,inversemod( b , mod),mod);
    // ll ans = ((a % M )* power(b,M-2,M))% M ;
    // return ans ;
}

//  module arithemetic template alltime usefull 
ll gcd(ll a, ll b)                      { if (b == 0) return a;       return gcd(b, a%b );  }
ll lcm(ll a, ll b)                      {  return ((a*b) / gcd(a, b)) ; }
ll power(ll base, ll power,ll mod)      {ll res=1;while(power){if(power%2==1){res=(res*base)%mod;power-=1;}else{base=(base*base)%mod;power/=2;}}return res;} ////0(log2(p)) 
void normal(ll &a)                      { a %= MOD; (a < 0) && (a += MOD); }
ll modAdd(ll a, ll b)                   { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
ll modSub(ll a, ll b)                   { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
ll modMul(ll a, ll b, ll mod)           { a %= mod, b %= mod; normal(a), normal(b); return (a*b)%mod; }
ll inversemod(ll b , ll mod)            {return  (power(b,mod-2,mod)) % mod ;}
ll moddiv(ll a , ll b , ll mod)         {return modMul(a,inversemod( b , mod),mod);}// ll ans = ((a % M )* power(b,M-2,M))% M ;// return ans ;






















ll power(ll base, ll power,ll mod)  {ll res=1;while(power){if(power%2==1){res=(res*base)%mod;power-=1;}else{base=(base*base)%mod;power/=2;}}return res;} ////0(log2(p)) 
//Topic -  fectorial count + inverse of that fectorial count 
int const mx = 1e6+123 ;
ll fec[mx];
ll infec[mx];

int main()
{
    ll lim = 1e6 ;
    //( (28%m)* power(7,m-2))%m ;
    fec[0]=1; //0!=1;
    infec[0]=1; // (0!)^-1 = 1 ;
    ll sum = 1; 

    for(ll i = 1 ; i<= lim ; i++)
    { 
        fec[i]=(fec[i-1]*i) % MOD ;
        infec[i]=(power(fec[i] , MOD-2,MOD)% MOD);// 1e6 * log2(MOD) = 1e6*20 = 2*10^7
    }
}

















// Topic- Checking perfect squre or not?


// NOTE-
// if a number have perfect squre then it has odd fectors else it have even fectors 
// proof - 
// sqrt(36) - 1 2 3 4 6 9 12 18 36 - ODD 
// sqrt(12)- 1 2 3 4 6 12 - ( even)
int main()
{
    ll n ;
    cin>>n;
    ll sq = sqrt(n);
    if(sq* sq== n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}



// Topiv- Some tecniq to get the time complexity


// just think we have to  find the number of (positive) primes 
// not larger than n which are of the form x^2+y^4

// p= x^2+1^4 ;
// or
// p= 1^2 +y^4
// y^4=p-1


















// Topic- Get the fectorial by doing MOD 
// using recurtion 
ll fact(ll num) 
{
    if(num==1) 
    {
        return 1;
    }
    else 
    {
        return modMul(num , fact(modSub(num,1)) , MOD );
    }
}

// or ,
// ll fun = 1; 
// fr(i,1,mop) fun=modMul(fun,i,MOD);



// Topic- HOw do i know that any value is the power of 2? 
void solve() // O(1)
{
    ll n ; cin>>n;
    if(n<=0) NO  ;
    else if((n&(n-1)) == 0 ) YES ;  // vaue doing minus erase set bit of n // if n is a powr of 2 then it will have only one set bit // so erasing it will be zero
    else return NO  ; 
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

OR , 
void solve() // com - > log(n)
{
    ll n ; cin>>n;
    ll x = __lg(n);
    ll value = (1LL<<x);

    if(value == n) YES 
    else NO 
    
}  



// Topic - Miller Rabin // check its prime or not? // log(n)
/*

 suppose p - prime 
         a - any int 

         In Farmas formule ,
         a^(p-1) %p =1 ; then it will be a prime number must 

         but if p is not prime this formule can also show same 
         output means a^(composite-1) %composite =1 ;

         so we need some simple math that is -> 
         
         p must be cause every prime is odd 
         then p-1 must be even

         so we can convert p-1 (even) to (2^s ) *d 
         example 13 -> 13-1 = 12 -> (2^2) * 3 ;

         so now a^(((2^s)*d)-1) % p = 1 

         so we can convert it to
         a^(((2^s)*d)-1) to a^((((2^s-1)*d)^2)-1^2)
        
        // a^2 - b^2 formule 

         means (2^2) 
              = (2^2-1)^2 

        so,
        a^((((2^s-1)*d)^2) * a^((((2^s-2)*d)^2).....(a^d+1)(a^d-1)


        finally it converted in two steps ;
        1/ a^d -1 = 0 
        2 / (a^(2^r)*d)+1 = 0 
             (a^(2^r)*d) = n-1 ; 
            so we have to prove this two steps to confirm it
            is prime or not  
*/

ll rp(ll a, ll b, ll mod) // log(n) // it just multiply big numbers which cant be stored in ll
{
    ll res = 0;
    while(b > 0)
    {
        if(b % 2 == 1) res = (res + a) % mod;

        a = (a << 1) % mod; 
        b = (b >> 1);
    }
    return res;
}

ll binpower(ll base, ll e, ll mod) // moduler exponential 
{
    ll result = 1;
    base %= mod;
    while (e) {
        if (e & 1)
            result = rp(result, base, mod);
        base = rp(base, base, mod);
        e >>= 1;
    }
    return result;
}

bool check_composite(ll n, ll a, ll d, int s)
{
    ll x = binpower(a, d, n); /// i) a^d % n
    if (x == 1 || x == n - 1) return false; /// n probably prime
    for (int r = 0; r < s - 1; r++) /// O(log(n) ^ 2)
    {
        x = rp(x, x, n); /// ii) x^2 % n
        if (x == n - 1) return false; /// n probably prime
    }
    return true; /// n composite
};

bool MillerRabin(ll n)   // returns true if n is prime, else returns false.
{
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    int s = 0;
    ll d = n - 1; // even krlam 
    while ((d & 1) == 0) // d%2 
    {
        d >>= 1; // d/2 
        s++;
    }

    vector<int>bases{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};

    for (int a : bases) /// O(|base| * (logN)^2) = O(12 * 3600)
    {
        if (n == a) return true;
        if (check_composite(n, a, d, s)) return false;
    }
    return true; /// highly probable that n is a prime number
}
void solve()
{
    ll n ; 
    cin>>n;
    if(MillerRabin(n)) puts("YES");
    else puts("NO");
}



// Topic - rho  // show a divisors of a number in O(N^(1/4))

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll rp(ll a, ll b, ll mod)
{
    ll res = 0;
    while(b)
    {
        if(b & 1) res = (res + a) % mod;

        a = (a << 1) % mod;
        b = (b >> 1);
    }
    return res;
}

ll binpower(ll base, ll e, ll mod)
{
    ll result = 1;
    base %= mod;
    while (e) {
        if (e & 1)
            result = rp(result, base, mod);
        base = rp(base, base, mod);
        e >>= 1;
    }
    return result;
}

bool check_composite(ll n, ll a, ll d, int s)
{
    ll x = binpower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = rp(x, x, n);
        if (x == n - 1)
            return false;
    }
    return true;
};

bool MillerRabin(ll n)   // returns true if n is prime, else returns false.
{
    if (n < 2) return false;
    int r = 0;
    ll d = n - 1;
    while ((d & 1) == 0)
    {
        d >>= 1;
        r++;
    }
    for (int a : { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37})
    {
        if (n == a) return true;
        if (check_composite(n, a, d, r)) return false;
    }
    return true;
}

ll ff(ll x, ll c, ll mod)
{
    return (rp(x, x, mod) + c) % mod;
}

ll rho(ll n) /// Time Complexity: O(N^(1/4) * logN)
{
    if(n % 2 == 0) return 2;
    if(MillerRabin(n) == 1) return n;

    ll x = (rng() % n) + 1;
    ll y = x;
    ll g = 1;
    ll c = (rng() % n) + 1;

    while(g == 1)
    {
        x = ff(x, c, n);
        y = ff(y, c, n);
        y = ff(y, c, n);
        g = __gcd(abs(x - y), n);
    }
    return g == n ? rho(n) : g;
}

int main()
{
    cout<<rho(15)<<endl;
}