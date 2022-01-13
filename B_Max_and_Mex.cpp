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
        ll i,j,x=-1,y,z,count=INT_MAX,sum=0,n,m;
        cin>>n>>m;
        set<ll>s;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            sum=max(sum,a[i]);
            count=min(count,a[i]);
            s.insert(a[i]);
        }
      sort(a,a+n);
      if(m==0)
      {
         cout<<s.size()<<endl;

      }
      else{

        if((count-1)>=0)
        {
            s.insert((sum+1)/2);
            cout<<s.size()<<endl;
        }
        else{
         for(ll i=0;i<n-1;i++)
         {
             if(a[i]+1!=a[i+1])
             {
                 x=a[i]+1;
                 break;
             }

         }
        if(x==-1)
        {
            cout<<s.size()+m<<endl;
        }
        else{
            s.insert((sum+x+1)/2);
            cout<<s.size()<<endl;
        }
        }

        }
    }


    return 0;
}

