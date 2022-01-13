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
  
        ll i,j,x=0,y,z,count=0,sum=0,n,m;
        cin>>n;
        vector<string>v;
        rep(i,n)
        {
            string s;
            cin>>s;
            v.pb(s);
        }
       
        for(ll i=1;i<v.size();i++)
        {
            if(v[i]!=v[i-1])
            sum++;
        }
        cout<<sum+1<<endl;

    return 0;
}

