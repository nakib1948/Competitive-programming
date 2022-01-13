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

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        ll a[n];
        //set<ll>s;
        rep(i,n)
        {
            cin>>a[i];
            //s.insert(a[i]);
            sum+=a[i];
            count=max(count,a[i]);
        }
    
            x=ceil((sum*1.0)/(n-1));
            y=x*(n-1);
            if(count>x)
            y=(n-1)*count;

            cout<<y-sum<<endl;
        
    }


    return 0;
}

