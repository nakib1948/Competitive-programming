#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;
#define kk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll Pow(ll x,ll y){return y==0?:x*pow(x,y-1);}
ll gcd(ll a, ll b){return (b == 0 ? a : gcd(b, a % b));}
ll lcm(ll a, ll b){return (a * (b / gcd(a, b)));}

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    kk;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        string s;
        cin>>s;
        char ch='E';
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='0' && ch=='E')
            {
                ch='S';
            }
            else if(s[i]=='1' && ch=='E')
            {
                ch='N';
            }
             else if(s[i]=='0' && ch=='N')
            {
                ch='E';
            }
            else if(s[i]=='1' && ch=='N')
            {
                ch='W';
            }
             else if(s[i]=='0' && ch=='W')
            {
                ch='N';
            }
            else if(s[i]=='1' && ch=='W')
            {
                ch='S';
            }
             else if(s[i]=='0' && ch=='S')
            {
                ch='W';
            }
            else if(s[i]=='1' && ch=='S')
            {
                ch='E';
            }
        }
        cout<<ch<<endl;
    }


    return 0;
}

