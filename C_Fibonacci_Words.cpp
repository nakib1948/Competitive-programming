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
    string s;
    cin>>s;
    bool ok=true;
    for(ll i=2;i<s.size();i++)
    {
     
        ll temp=(s[i-1]-'A')+(s[i-2]-'A');
        if(temp>=26)temp=temp-26;
        ll k=s[i]-'A';
        if(temp==k)
        {
           continue;
        }
        else
        {
           ok=false;
           break;
        }
        
       
    }

    cout<<(ok?"YES":"NO")<<endl;

    return 0;
}

