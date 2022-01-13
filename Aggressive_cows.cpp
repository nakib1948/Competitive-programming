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
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll low=1,high=a[n-1];
        while(low<=high)
        {
            ll mid=(low+high)/2;
            count=1,x=0,y=1;
            while(x<n && y<n)
            {
                if((a[y]-a[x])<mid)
                {
                    y++;
                }
                else 
                {
                    x=y;
                    y++,count++;
                }
            }
            //cout<<count<<endl;
            if(count>=m)
            {
                sum=mid;
                low=mid+1;
            }
            else 
            high=mid-1;  
        }
        cout<<sum<<endl;
    }


    return 0;
}

