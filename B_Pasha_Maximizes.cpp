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
  
        ll i,j,x,y,z,count=0,sum=0,n,m;
        string s;
        cin>>s>>m;
        n=s.size();
     
     
        for(ll i=0;i<s.size();i++)
        {
           ll k=i;
           x=0;
           if(m==0)
           break;
           k+=m;
           char ch=s[i];
           for(ll j=i;j<=min(n-1,k);j++)
           {
               ch=max(ch,s[j]);
           }
           for(ll t=i;t<=min(n-1,k);t++)
           {
               if(s[t]==ch)
               {
                   x=t;
                   break;
               }
           }
          // cout<<x<<endl;
           for(ll j=x;j>i;j--)
           {
               swap(s[j],s[j-1]);
               m--;
               if(m==0)
               break;
           }
           if(m==0)
           break;

        }
        cout<<s<<endl;
    


    return 0;
}

