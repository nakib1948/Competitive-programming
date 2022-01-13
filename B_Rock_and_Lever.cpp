#include<bits/stdc++.h>
using namespace std; 

#define bss ios::sync_with_stdio(false); cin.tie(0);
#define ll long long

ll gcd(ll a, ll b)
{
    return (b == 0 ? a : gcd(b, a % b));
}
 
ll lcm(ll a, ll b)
{
    return (a * (b / gcd(a, b)));
}


int main()
{
     
    bss;
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll i,c=0,s=0,n;
        scanf("%lld",&n);

        ll a[n];
        for(i=0;i<n;i++)
        {
           scanf("%lld",&a[i]);
        }
        sort(a,a+n);
        for(ll k=0;k<n-1;k)
    }


    return 0;
}

