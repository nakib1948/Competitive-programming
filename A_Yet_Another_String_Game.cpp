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
        ll i,j,x,y,z,count=0,sum=0,n;
        string s;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(i%2==0)
            {
                char ch='a';
                if(s[i]!=ch)
                {
                    s[i]=ch;
                }
                else
                {
                    s[i]='b';
                }
                
            }
              else
                {
                    char ch='z';
                    if(s[i]!='z')
                    s[i]='z';
                    else 
                    s[i]='y';
                }
           
        }
         cout<<s<<endl;
    }


    return 0;
}

