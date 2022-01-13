#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define Quicksilver ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;
    ll t;
    cin>>t;
    while(t--)
    {
            ll i,j,x,y,z,count=0,sum=0,n,m;
            cin>>n;
            string s;
            cin>>s;
            if(n==1)
            {
                if(s[0]=='?')
                cout<<"B"<<endl;
                else cout<<s<<endl;
            }
            else
            {
            
            for(ll i=0;i<s.size()-1;i++)
            {
                if(s[i]!='?' && count==0)
                {
                    count=1;
                    x=i;
                }
                if(s[i]=='B' && s[i+1]=='?')
                s[i+1]='R';
                else if(s[i]=='R' && s[i+1]=='?')
                s[i+1]='B';
            }
            if(count==0)
            {
                if(s[n-1]!='?')
                {
                    count=1;
                    x=n-1;
                }
            }
            if(count==0)
            {
                s[0]='B';
                for(ll i=1;i<s.size();i++)
                {
                    if(s[i-1]=='B')
                    s[i]='R';
                    else s[i]='B';
                }
            }
            else{
            for(ll i=x-1;i>=0;i--)
            {
                if(s[i+1]=='R')
                s[i]='B';
                else s[i]='R';
            }
            }
            cout<<s <<endl;
            }
    }


    return 0;
}

