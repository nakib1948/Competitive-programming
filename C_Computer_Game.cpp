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
        ll i,j,x,y,z,count=-1,sum=0,n,m;
        cin>>m>>n>>x>>y;
        ll low=1,high=n;
        bool ok=false;
        while(low<=high)
        {
            /// Binary search ///
            ll mid=(low+high)/2;
            ll gett=mid*x;
            i=n-mid;
            j=i*y;
            if((gett+j)<m)
            {
                count=max(count,mid);
                ok=true;
            }

            if((gett+j)>=m)
            {
                high=mid-1;
            }
            else 
            low=mid+1;
        }
        if(!ok)
        {
          if(y*n <m)cout<<0<<endl;
          else cout<< -1<<endl;
        }
        else cout<<count<<endl;
    }


    return 0;
}

