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
        cin>>n;x=n;
        set<string>s;
        vector<string>v,v1;
        while(n--)
        {
            string s1;
            cin>>s1;
            v1.pb(s1);
            s.insert(s1);
        }
        for(auto it:s)
        {
            v.pb(it);  
        }
        for(ll i=0;i<v1.size();i++)
        {
            if(v1[i]==v[0])
            count++;
            else sum++;
        }
        if(x==1)cout<<v[0]<<endl;
        else
        cout<<(count>sum ? v[0]:v[1]);
       
    return 0;
}

