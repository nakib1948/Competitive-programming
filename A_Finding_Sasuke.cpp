#include<bits/stdc++.h>
using namespace std; 
 
#define kk ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
 
 
int main()
{
     
    kk;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,c=0,s=0,n;
        cin>>n;
 
        ll a[n];
        for(i=0;i<n;i++)
        {
           cin>>a[i];
        }
 
        for(ll i=0;i<n;i+=2)
        {
            ll k,k1;
            k=a[i];
            k1=a[i+1];
            cout<<k1<<" "<<-k<<" ";
        }
        cout<<endl;
    }
 
 
    return 0;
}