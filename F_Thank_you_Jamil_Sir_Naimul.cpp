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
     
   
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        x=(2*n)-1,z=n;
        ll a[x];
        vector<ll>v,v1;
        for(ll i=0;i<x;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]>=0)
            v.pb(a[i]);
            else 
            v1.pb(a[i]);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
    
       for(ll i=0;i<v1.size();i++)
       {
           z--;
           count+=(abs(v1[i]));
           if(z==0)
           {
               y=i;
               break;
           }
       }
       if(z==0){
       for(ll i=y+1;i<v1.size();i++)
       {
           count+=v1[i];
       }
       }
       if(z!=0)
       {
           y=0;
           for(ll i=0;i<v.size();i++)
           {
               z--;
               count+=(-v[i]);
               if(z==0)
               {
                   y=i;
                   break;
               }
           }
           if(z==0){
           for(ll i=y+1;i<v.size();i++)
           {
               count+=v[i];
           }
           }
       }
       cout<<max(sum,count)<<endl;

   


    return 0;
}

