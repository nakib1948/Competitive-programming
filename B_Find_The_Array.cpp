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
           s+=a[i];
        }
        for(ll i=0;i<n;i++)
        {
            cout<<1<<" ";
        }
        cout<<endl;

    }


    return 0;
}

