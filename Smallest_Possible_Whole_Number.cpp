#include<bits/stdc++.h>
using namespace std; 

#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if(m==0)
        cout<<n<<endl;
        else if(n==m)
        cout<<0<<endl;
        else if(n<m)
        cout<<n<<endl;
        else
        {
            ll k=n%m;
            cout<<k<<endl;
        }
        
    }


    return 0;
}

