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
     ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        ll a[n],b[200005];
        set<ll>s;
        memset(b,0,sizeof(b));
        rep(i,n)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        x=0,y=0;
        while(x<n && y<n)
        {
            if(b[a[y]]==0){
            sum+=a[y];
            b[a[y]]++;
            }
            if(sum<=m)
            {
                count=max(count,y-x);
                y++;
            }
            else
            {
                sum-=a[x];
                b[a[x]]--;
                x++;
            }
            
        }
        cout<<count<<endl;
        
    }


    return 0;
}

