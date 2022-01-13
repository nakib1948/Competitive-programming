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
     ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        string s;
        cin>>s;
        set<ll>v;
        for(ll i=0;i<s.size();i++)
        {
            v.insert(s[i]);
        }
        for(auto it:v)
        {
            for(ll i=0;i<s.size();i++)
            {
                if(s[i]==it)
                {
                    for(ll j=i;j<s.size();j++)
                    {
                        if(s[j]!=it)
                        {
                          
                            break;
                        }
                        else s[j]='.';
                    }
                    break;
                }
               
            }
        }
        bool ok=true;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]!='.')
            {
                ok=false;
                break;
            }
        }
        //cout<<s<<endl;
        cout<<(ok?"YES":"NO")<<endl;
    }


    return 0;
}

