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

        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        while(m--)
        {
            cin>>x;
            ll low=-1,high=n;
            while(low+1<high)
            {
                ll mid=(low+high)/2;
                if(a[mid]<=x)
                low=mid;
                else 
                high=mid;
            }
            cout<<low+1<<endl;
        }
    


    return 0;
}

