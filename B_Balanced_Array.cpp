#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x=1,y=0,z,count=2,sum=0,n;
        cin>>n;
        if(((n/2)&1)==1)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(ll i=1;i<=n/2;i++)
            {cout<<count<<" ";y+=count;count+=2;}
            for(ll i=(n/2)+1;i<n;i++)
            {cout<<x<<" ";sum+=x;x+=2;}
            cout<< y-sum <<endl;
        }
        
    }


    return 0;
}

