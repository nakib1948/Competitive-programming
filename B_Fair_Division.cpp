#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x=0,y=0,z,count=0,sum=0,n,m;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]==1)x++;
            else y++;
            sum+=a[i];
        }
        if(n%2==0)
        cout<<(sum&1 ? "NO":"YES")<<endl;
        else 
        {
            if(y==n || x==n)
            cout<<"NO"<<endl;
            else
            cout<<(sum&1 ? "NO":"YES")<<endl;
        }
        
        
    }


    return 0;
}

