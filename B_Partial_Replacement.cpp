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
        ll x,y,z,first=0,last=0,count=0,sum=0,n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='*')
            {
                first=i;
                break;
            }
        }
        for(ll i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='*')
            {
                last=i;
                break;
            }
        }
        if(first==last) cout<< 1 <<endl;
        else{

           count=first;
           ll k=count+2,i=0,y=n;
           while(y--){
           ll p=0,q=0;
           for(i=k;i<=count+m;i++)
           {
               if(i<n && i<last-1){
               if(s[i]=='*')
               {
                   p=1;
                   q=i;
               }
               }
           }
           if(p)
           {
               sum++;
               k=q+1;
               count=q;
           }
           }
          cout<<sum+2<<endl;
        }
    }
      

    return 0;
}

