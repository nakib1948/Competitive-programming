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
ll c=0;
void f(ll n)
{
    if(n%10!=0 && n%20!=0)
    return;
    if(n<=0)
    return;
    ll x=n,s=0;
    while(x>0)
    {
       ll y=x%10;
       x/=10;
       if(y!=0)
       s++;
    }
    if(s==1) c=1;
    else f(n/20);
}
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
        if(n==1)
               cout<<"YES"<<endl;
        else{
               f(n);
               if(c)
               cout<<"YES"<<endl;
               else cout<<"NO"<<endl;
               c=0;
            }
    }


    return 0;
}

