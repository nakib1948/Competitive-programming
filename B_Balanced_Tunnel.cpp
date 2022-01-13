#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define Quicksilver ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;
   
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        map<ll,ll>m1,m2;
        vector<ll>v,v1;
        
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            v.pb(x);
            m1[x]=i;
        }
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            m2[x]=i;
            v1.pb(x);
        }

        for(ll i=1;i<v.size();i++)
        {
            if(m2[v[i]]<m2[v[i-1]])            
            continue;
            else 
            {
               
                for(ll j=m2[v[i-1]]+1;j<m2[v[i]];j++)
                {
                    if(m1[v1[j]]>m1[v[i]])
                    count++;
                }
            }
        }
      
        cout<<count+m2[v[0]]<<endl;



    return 0;
}

