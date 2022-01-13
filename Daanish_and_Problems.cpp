#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define heyyoo ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        vector<ll>v;
        for(ll i=1;i<=10;i++)
        {
            cin>>x;
            v.pb(x);
        }
        cin>>n;
        for(ll i=v.size()-1;i>=0;i--)
        {
             if(n>v[i])
             {
                 n=n-v[i];
                 v[i]=0;
             }
             else
             {
                 v[i]=v[i]-n;
                 n=0;
             }
             if(n==0)
             break;
             
        }
        for(ll i=0;i<v.size();i++)
        {
             if(v[i]!=0)
             count=i;
        }
        cout<<count+1<<endl;
        
    }


    return 0;
}

