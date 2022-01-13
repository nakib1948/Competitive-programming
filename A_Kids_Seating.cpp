#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define kk ios::sync_with_stdio(false); cin.tie(0);
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
    
         ll i,j,x,y,z,count=1,sum=0,n;
        cin>>n;
        y=n;
        n=4*n;
        cout<<n<<" ";
        
        while(1)
        {
            if(count==y)
            break;
            else
            {
                cout<<n-2<<" ";
                count++;
                n-=2;
            }
            
        }
        cout<<endl;
        
    }


    return 0;
}

