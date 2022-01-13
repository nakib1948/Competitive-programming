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
ll sum_of_digit(ll x) {ll sum=0; while(x>0){ sum+=x%10; x/=10; } return sum; }
ll gcd(ll a, ll b){return (b == 0 ? a : gcd(b, a % b));}
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
        
            for(ll i=n;;i++)
            {
                ll k=sum_of_digit(i);
                if(gcd(i,k)!=1)
                {
                    cout<< i <<endl;
                    break;
                }
            }
        }


    return 0;
}

