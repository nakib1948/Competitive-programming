#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define Quicksilver ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x=0,y,z,count=0,sum=0,n,m;
        cin>>n;
      
        vector<ll >v,v1;
        ll a[n],b[n];
        rep(i,n)
        {
            cin>>a[i];
            sum+=a[i];
        }
        rep(i,n)
        {
            cin>>b[i];
            count+=b[i];
            if(a[i]>b[i])
            {
                while(a[i]!=b[i])
                {
                    v.pb(i+1);
                    a[i]--;
                }
            }
            else if(a[i]<b[i])
            {
                while(a[i]!=b[i])
                {
                    v1.pb(i+1);
                    a[i]++;
                }
            }
        }
        if(sum==count)
        {
            cout<<v.size()<<endl;
            for(ll i=0;i<v.size();i++)
            {
                cout<<v[i]<< " "<<v1[i] <<endl;
            }
        }
        else cout<< -1 <<endl;

    }


    return 0;
}

