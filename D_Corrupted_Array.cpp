#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n+2;i++)
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
        ll i,j,x=0,y=0,z,count=0,sum=0,n;
        cin>>n;
        map<ll,ll>mp;
        ll a[n+2];
        for(ll i=0;i<n+2;i++)
        {
            cin>>a[i];

            count+=a[i];
        }
        sort(a,a+n+2);
        sum=count;
        bool ok=false;
        if((sum-a[n]-a[n+1])==a[n])
        {
            ok=true;
            for(ll i=0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<endl;
        }
        else
        {
            sum-=a[n+1];
            for(ll i=0;i<n+1;i++)
            {
                if((sum-a[i])==a[n+1])
                {
                    ok=true;
                    a[i]=0;
                    break;
                }
            }
            if(ok)
            {
                for(ll i=0;i<n+1;i++)
                {
                    if(a[i]!=0)
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }
            else cout<<-1<<endl;
        }
        

    }

    return 0;
}
