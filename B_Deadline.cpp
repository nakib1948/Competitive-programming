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
    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        if(m<=n)
        cout<<"YES"<<endl;
        else{
        ll low=0,high=n;
        while(low+1<high)
        {
            ll mid=(low+high)/2;
            sum=mid+ceil(m*1.0/(mid+1));
            if(sum<=n)
            {
                count=1;
                break;
            }
            else 
            high=mid;
        }
        cout<<(count==1 ? "YES":"NO")<<endl;
        }
    }
           

    return 0;
}