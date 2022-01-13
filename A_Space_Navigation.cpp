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
ll Pow(ll x,ll y){return y==0?:x*pow(x,y-1);}
ll gcd(ll a, ll b){return (b == 0 ? a : gcd(b, a % b));}
ll lcm(ll a, ll b){return (a * (b / gcd(a, b)));}

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x=0,y=0,z,count=0,sum=0,n,m,R=0,L=0,D=0,U=0;
        cin>>n>>m;
        string s;
        cin>>s;
            for(ll i=0;i<s.size();i++)
            {
                if(s[i]=='R')R++;
                else if(s[i]=='U')U++;
                else if(s[i]=='D')D++;
                else if(s[i]=='L')L++;
            }
      if(n>0) {if(n<=R){x++;} }
 	  else 
 	  {if(abs(n)<=L){x++;}}
 	  if(m>0){if(m<=U){y++;}}
 	  else{if(abs(m)<=D){y++;}}
     if(x>0 && y>0)
     cout<<"YES"<<endl;
     else 
    cout<<"NO"<<endl;
    }


    return 0;
}

