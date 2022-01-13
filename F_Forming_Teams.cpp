#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        ll a[n],b[2508];
        memset(b,0,sizeof(b));
        set<ll>s;
        vector<ll>v;
        map<ll,ll>mp;
        rep(i,n)
        {
            cin>>a[i];
            s.insert(a[i]);
            mp[a[i]]++;
        }
         ll c[s.size()+1];
        memset(c,0,sizeof(c));
        for(auto it:s)
        {
            v.pb(it);
            c[it]=1;
        }
       
        for(auto it:mp)
        {
            if(it.ss%2 == 0)
            {
                ll k=it.ss/2;
                sum=max(sum,k);
            }
            else if(it.ss%2 !=0)
            {
                ll k=it.ss/2;
                count=0;
                for(ll i=0;i<v.size();i++)
                {
                    if(a[i]==it.ff)
                    continue;
                    else 
                    {
                        for(ll j=0;j<v.size();j++)
                        {
                            if((v[i]+v[j])==it.ff)
                            {
                                count=1;
                                k++;
                                sum=max(sum,k);
                                break;
                            }
                        }
                    }
                    if(count==1)
                    break;
                }
            }
        }
        for(ll i=0;i<n;i++)
        {
            if(c[a[i]]==1){
            for(ll j=i+1;j<n;j++)
            {
                if(a[j]!=a[i]){
                ll k=a[i]+a[j];
                b[k]++;
                }
            }
            }
            c[a[i]]=0;
        }
        for(ll i=0;i<2508;i++)
        {
            if(b[i]!=0)
            sum=max(sum,b[i]);
        }
        cout<<sum<<endl;
    }


    return 0;
}

