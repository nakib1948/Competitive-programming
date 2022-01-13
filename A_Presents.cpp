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
        vector<ll>v(n);
       
        rep(i,n)
        {
            cin>>v[i];
        }
        auto it= v.begin()+2;
        if(it != v.end())
        cout<<"found"<<endl;
         else cout<<"Not found";
        v.erase(it);
        for(ll i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
      

    return 0;
}

