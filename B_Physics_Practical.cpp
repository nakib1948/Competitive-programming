#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=1;i<=n;i++)
#define debug cout<<"debug"<<endl;
#define heyyoo ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
        freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
        
        ll i,j,x=0,y,z,count=0,sum=INT_MAX,n,m;
        cin>>n;
        ll a[n+2];
        for(ll i=1;i<=n;i++)cin>>a[i];
        a[0]=0,a[n+1]=INT_MAX;
        sort(a,a+n+2);
        for(ll i=1;i<=n;i++)
        {
            ll low=0,high=n+1;
            while(low+1<high)
            {
                ll mid=(low+high)/2;
                if(2*a[i]<a[mid])
                {
                    high=mid;
                }
                else low=mid;
            }
            sum=min(sum,(i-1+n-low));
        }
        cout<<sum<<endl;
    return 0;
}

