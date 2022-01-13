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
        ll a[3];
        for(ll i=0;i<3;i++)
        {
            cin>>a[i];
        }
        x=a[0],y=a[1],z=a[2];
        sort(a,a+3);
        if(a[2]==a[1]){
           cout<<a[2]+1-x<<" "<<a[2]+1-y<<" "<<a[2]+1-z<<endl;
        }
        else
        {
            if(x==a[2])
            cout<< 0<<" "<<x+1-y<<" "<<x+1-z<<endl;
            else if(y==a[2])
            cout<< y+1-x <<" "<<0<<" "<<y+1-z<<endl;
            else cout<<z+1-x<<" "<<z+1-y<<" "<<0<<endl;
        }
    }


    return 0;
}

