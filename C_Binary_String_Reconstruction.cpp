#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        string s,q;
        cin>>s>>x;
        q=s;
        ll w=s.size();
        for(ll i=0;i<q.size();i++)
        {
            q[i]='0';
        }
        for(ll i=0;i+x<=s.size();i++)
        {
           if(s[i]=='1')
           {
              q[i+x]='1';
               
           }
        }
        for(ll i=s.size()-1;i-x>=0;i--)
        {
             if(s[i]=='1')
           {
              q[i-x]='1';
               
           }
        }
        bool ok=true;
        for(ll i=0;i+x<=s.size();i++)
        {
            if(s[i]==q[i+x])
            {
                ok=true;
            }
            else
            {
                ok = false;
                break;
            }
            
        }
        if(ok)
          cout<<q<<endl;
       else
       {
           cout<<"-1"<<endl;
       }
       
    }


    return 0;
}

