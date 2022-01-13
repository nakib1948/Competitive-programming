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
        ll i,j,x,y,z,count=0,sum=0,n,k,w;
        cin>>n>>w;
        vector<pair<ll,ll> >v;
        vector<ll>v1,v2;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            v.pb(mp(a[i],i+1));
        }
        sort(v.begin(),v.end());
        bool ok=true,ok1=true;
        if((w&1)==0)k=w/2;
        else k=(w/2)+1;
        for(ll i=v.size()-1;i>=0;i--)
        {
           if( (count+v[i].ff)>w)
              continue;
           else if((count+v[i].ff<=w))
           {
            count+=v[i].ff;
            v2.pb(v[i].ss);
            if(count>=k)
            {
                ok1=false;
                break;
            }
            
           }
           
        }
        if(ok1)cout<< -1 <<endl;
        else{
              cout<<v2.size()<<endl;
            //  cout<<"Debug"<<endl;
            for(auto it:v2)
         cout<<it<<" ";
         cout<<endl;
        }
    }


    return 0;
}

