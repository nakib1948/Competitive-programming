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

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>x>>y;
        z=(x-1)%4;
        if(z==0)
        sum=x-1;
        else if(z==1)
        sum=1;
        else if(z==2)
        sum=x;
        else sum=0;
       
        if(sum==y)
        cout<<x<<endl;
        else
        {
            m=sum^y;
            if(m==x)
            cout<<x+2<<endl;
            else cout<<x+1<<endl;
        }

   
    }


    return 0;
}

