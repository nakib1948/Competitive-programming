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
    cin>>t;
    while(t--)
    {
        ll i,n,m;
        double s=0,c=0;
        cin>>n>>m;

        double a[n];
        for(i=0;i<n;i++)
        {
          cin>>a[i];
        }

        sort(a,a+n);

        for(i=0;i<n;i++)
        {
            s+=(a[i]/(i+1))*(i+1);
        }

        if(s==m)
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        

    }


    return 0;
}

