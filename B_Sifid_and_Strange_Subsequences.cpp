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
        ll i,j,x=INT_MAX,y,z,count=0,sum=0,n,m;
        cin>>n;
        vector<ll>v;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]<=0){
            count++;
            v.pb(a[i]);
            }
            if(a[i]>0)
            x=min(x,a[i]);
        }

        sort(v.begin(),v.end());
        if(count==0)
        cout<<1<<endl;
        else if(x==INT_MAX)
        cout<<count<<endl;
        else
        {
            bool ok=true;
            for(ll i=0;i<v.size()-1;i++)
            {
                if(abs(v[i]-v[i+1])<x)
                {
                    ok=false;
                    break;
                }
            }
            if(ok)
            cout<<count+1<<endl;
            else cout<<count<<endl;
        }
        
    }


    return 0;
}

