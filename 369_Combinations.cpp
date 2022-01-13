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
        ///"In the name of Allah,most gracious and most merciful"///

        heyyoo;
        
        while(1)
        {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        if(n==0 && m==0)
        break;
        vector<ll>v,v1;
        z=n-m;
        for(ll i=2;i<=m;i++)
        {
            v.pb(i);
        }
        for(ll i=z+1;i<=n;i++)
        {
            v1.pb(i);
        }
        for(ll i=0;i<v.size();i++)
        {
            for(ll j=0;j<v1.size();j++)
            {
                if(v1[j]%v[i]==0)
                {
                    v1[j]/=v[i];
                    v[i]=1;
                    break;
                }
            }
            if(v[i]==1)
            count++;
        }
        if(count==v.size())
        {
            sum=1;
            for(ll i=0;i<v1.size();i++)
           { sum*=v1[i];}
           cout<<n<<" things taken "<<m<<" at a time is "<<sum<<" exactly.\n";
        }
        else
        {
            sum=1;
            for(ll i=0;i<v1.size();i++)
            {sum*=v1[i];}
            count=1;
            for(ll i=0;i<v.size();i++)
            {count*=v[i];}
           cout<<n<<" things taken "<<m<<" at a time is "<<sum/count<<" exactly.\n";

        }
        
         
        }

    return 0;
}

