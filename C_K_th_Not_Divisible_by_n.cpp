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
        ll i,j,x,y,z,count=0,sum=0,ans=0,n,m;
        cin>>n>>m;
        ll low=1,high=2*m;

        while(low<=high)
        {
            ll mid=(low+high)/2;
            sum=mid-(mid/n);
            if(sum==m)
            {
                ans=mid;
                if(ans%n==0)
                ans--;
                break;
            }

            if(sum>m)
            high=mid-1;
            else if(sum<m)
            low=mid+1;
        }
        cout<<ans<<endl;
    }


    return 0;
}

