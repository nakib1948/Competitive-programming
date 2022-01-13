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
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y=0,z,count=0,sum=0,n;
        cin>>n;
        string s,w;
        cin>>s>>w;
       
        if(s==w)
        cout<<"YES"<<endl;
        else{
        vector<ll>v;
        for(ll i=0;i<s.size();i++)
        {
         
            if(s[i]=='0')
            count++;
            else sum++;

            if(count!=0 && count==sum)
            {
                v.pb(i);
                count=0;sum=0;
            }
        }
        if(v.size()==0){
        cout<<"NO"<<endl;
        continue;
        }
        for(ll i=0;i<v.size();i++)
        {
            string r,q;
            if(i==0)
            {
                  r=s.substr(0,v[i]+1);
                  q=w.substr(0,v[i]+1);
            }
            else{
                r=s.substr(v[i-1]+1,(v[i]-v[i-1]));
                q=w.substr(v[i-1]+1,(v[i]-v[i-1]));
            }
            if(r==q)
            continue;
            for(ll j=0;j<r.size();j++)
            {
                if(r[j]=='0')
                r[j]='1';
                else r[j]='0' ;
            }
           // cout<<r<<" "<<q<<endl;

            if(r!=q)
            {
                y=1;
                break;
            }
        }
        if(v[v.size()-1]!=(n-1))
        {
            for(ll i=v[v.size()-1]+1 ;i<s.size();i++)
            {
                if(s[i]!=w[i])
                {
                    y=1;
                    break;
                }
            }
        }
        cout<<(y==0 ? "YES":"NO")<<endl;
        }
    }


    return 0;
}

