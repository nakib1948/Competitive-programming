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
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
  
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        vector<string>v;

        rep(i,n)
        {
            string s;
            cin>>s;
            if(s[0]=='0')
            count=1;
            v.pb(s);
        }

        if(count)
        cout<<0<<endl;
        else
        {
           sort(v.begin(),v.end());
           for(ll i=0;i<v.size()-1;i++)
           {
               sum+=(v[i].size()-1);
           }
           cout<<v[v.size()-1];
           for(ll i=0;i<sum;i++)
           cout<<"0";
           cout<<endl;
        }
        
        


    return 0;
}

