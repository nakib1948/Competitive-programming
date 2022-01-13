#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        vector<ll>v;
         
        while(n!=0)
        {
            v.pb(n%2);
            n/=2;
        }
        for(ll i=0;i<v.size();i++)
        {
            if(v[i]==0)
            {
                sum+=pow(2,i);
            }
        }
        cout<<sum<<endl;
    }


    return 0;
}

