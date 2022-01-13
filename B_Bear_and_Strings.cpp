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
        string s,q="bear";
        cin>>s;
        vector<ll>v;
        for(ll i=0;i+4<=s.size();i++)
        {
            string w=s.substr(i,4);
            if(w==q)
            {
                v.pb(i+4);
            }
        }
     
        for(ll i=0;i<v.size();i++)
        {
            if(i==0)
            {
                ll k=(v[i]-3)*(s.size()-v[i]+1);
                sum+=k;
            }
            else
            {
                ll k=((v[i]-2)-(v[i-1]-2))*(s.size()-v[i]+1);
                sum+=k;
            }
            
        }
        cout<<sum<<endl;
    return 0;
}

