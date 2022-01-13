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
        ll i,j,x,y,z,count=0,sum=0,n,k;
        cin>>n>>k;
        for(ll i=1;;i++)
        {
            if(pow(2,i)<=k)
            sum=pow(2,i);
            else
            break;
        }
        if(sum-1>=n)
        cout<<(sum^(sum-1)) <<endl;
        else
        {
            cout<<(k^n) <<endl;
        }
        
    }


    return 0;
}

