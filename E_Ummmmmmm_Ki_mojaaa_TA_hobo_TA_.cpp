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
        vector<ll>v;
        while(n--)
        {
            cin>>x;
            v.pb(x);
        }

        count+=2;
        for(ll i=0;i<v.size()-1;i++)
        {
           if(v[i]>=v[i+1])
           {
               count+=2;
           }
           else 
           {
               count+=3;
              // count+=v[i+1]+1;
           }

        }
        cout<<count<<endl;


    return 0;
}

