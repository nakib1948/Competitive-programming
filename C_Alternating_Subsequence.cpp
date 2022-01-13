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
        ll i,j=0,x,y,z=-1000000000000,count=0,sum=0,n;
        cin>>n;ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        
        bool ok=true;
        for(ll i=0;i<n;i++)
        {
            z=max(a[i],z);
            if(a[i]>0)
            {
                j=i;
                ok=false;
                break;
            }
        }
        
        if(ok){cout<< z << endl;}else{j=0;
        while(j<n)
        {
            x=0,y= -1000000000000;
            while(a[j]>0 && j<n)
            {
                x=max(x,a[j]);
                j++;
            }
            sum+=x;
            while(a[j]<0 && j<n)
            {
                y=max(y,a[j]);
                j++;
            }
            if(y>(-1000000000000))
            sum+=y;
        }
        cout<< sum <<endl;
    }
     
    }

    return 0;
}

