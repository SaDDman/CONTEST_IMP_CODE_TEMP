#include<bits/stdc++.h>
using namespace std ;



vector<ll> z_function(string s) 
{
    ll n = s.size(), l = 0, r = 0;
    vector<ll> z(n);
    for(ll i = 1; i < n; i++) {
        if(i < r) z[i] = min(r - i, z[i - l]);
        while(i + z[i] < n && s[z[i]] == s[i + z[i]]) z[i]++;
        if(i + z[i] > r) l = i, r = i + z[i];
    }
    // z[0] = n;
    return z;
}



/*
This function will return opposite of kmp 

___4___
    ___4___
a b a b a b c a b
0 0 4 0 2 0 0 2 0
__      ___   ___
2        2     2


Steps to nott get error on code 
1. starts from the seraching element size 
2. Inicialize cnt = 1 
Exmple 
    string search ; 
    ll cnt = 1 ,ser = search.size()-1;
    f(i,search.size(),n)
    {
        ser++;
        if(final[i]>=mid && ser>=mid)
        {
            ser=0;
            cnt++;
        }
    }
*/