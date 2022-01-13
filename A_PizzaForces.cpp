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
ll ans;
void f(ll n,ll m,ll final)
{
    if(m>=n)
    {
       ans=min(final,ans);
       return;
    }
    
        f(n,m+6,final+15);
        f(n,m+8,final+20);
        f(n,m+10,final+25);
    
}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,p=1,n,m;
        cin>>n;
        ans=1e15;
        if(n<=50)
        {
             f(n,0,0);
             cout<< ans <<endl;
        }
        else
        {
           x=n%10;
           if(x==0)
           cout<< (n/10)*25 <<endl;
           else if(x<=2)
           cout<< (n/10)*25 + 5<<endl;
           else if(x<=4)
           cout<< (n/10)*25 + 10 <<endl;
           else if(x<=6)
           cout<< (n/10)*25 + 15 <<endl;
           else if(x<=8)
           cout<< (n/10)*25 + 20 <<endl;
           else 
           cout<< (n/10)*25 + 25 <<endl;
        
        }
       
        
    }


    return 0;
}

