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
        cin>>n;
        if(n==1)
        cout<<1<<endl;
        else if(n==2)
        cout<< -1 <<endl;
        else
        {
            vector<ll>v;
            x=n*n;
            for(ll i=1;i<=(n*n)/2;i++)
            {
                v.pb(i);
                v.pb(x);
                x--;
            }
            if((n*n)&1)
            {
                v.pb(((n*n)/2)+1);
            }
            ll k=v[0];
            v[0]=v[v.size()-1];
            v[v.size()-1]=k;
            count=0;
            for(ll i=0;i<v.size();i++)
            {
                count++;
                cout<<v[i]<<" ";
                if(count==n)
                {
                    count=0;
                    cout<<endl;
                }
            }
        }
        
    }


    return 0;
}

