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
        ll a[n];
        vector<ll>v,v1,v2,v3;
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]<0)
            {
                if(abs(a[i])&1)
                v.pb(a[i]);
                else v1.pb(a[i]);
            }
            else
            {
                if(a[i]&1)
                v2.pb(a[i]);
                else v3.pb(a[i]);
            }
        }
         
        if(v.size()>0)
        sort(v.rbegin(),v.rend());
        if(v1.size()>0)
        sort(v1.rbegin(),v1.rend());
        if(v2.size()>0)
        sort(v2.rbegin(),v2.rend());
        if(v3.size()>0)
        sort(v3.rbegin(),v3.rend());
        
        if(v2.size()>0)
        {
            for(ll i=0;i<v2.size();i+=2)
            {
                sum+=v2[i]+v2[i+1];
            }
            for(ll i=0;i<v3.size();i+=2)
            {
                sum+=v3[i]+v3[i+1];
            }
            cout<< sum+v2[v2.size()-1]<<endl;
        }
        else if(v.size()>0)
        {
             for(ll i=0;i<v1.size();i+=2)
            {
                sum+=v1[i]+v1[i+1];
            }
            cout<< sum+v[0]<<endl;
        }
        else cout<< -1 <<endl;



    return 0;
}

