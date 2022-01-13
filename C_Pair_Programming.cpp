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
            ll i,j,x,y,z,a1=0,z1=0,b1=0,z2=0,count=0,sum=0,n,m;
            cin>>z>>n>>m;
            ll a[n],b[m];
            vector<ll>v,v1,v2,v3,v4;
            rep(i,n)
            {
                cin>>a[i];
               
            }
            for(ll i=0;i<m;i++)
            {
                cin>>b[i];
             
            }
            bool ok=true;
            x=0,y=0;
            while(1)
            {
                if(a[x]==0 && x<n){
                v.pb(a[x]);sum++;
                x++;
                }
                else if(b[y]==0 && y<m)
                {
                    v.pb(b[y]);
                    y++;
                    sum++;
                }
                else if(a[x]>z && sum+z>=a[x] && x<n)
                {
                    v.pb(a[x]);
                    x++;
                }
                else if(b[y]>z && sum+z>=b[y] && y<m)
                {
                    v.pb(b[y]);
                    y++;
                }
                 else if(a[x]<=z && x<n)
                {
                    v.pb(a[x]);
                    x++;
                }
                else if(b[y]<=z && y<m)
                {
                    v.pb(b[y]);
                    y++;
                }
                
                else {
                    break;
                }

            }
            if(v.size()==(n+m))
            {
                for(auto it:v)
                cout<<it<<" ";
                cout<<endl;
            }
            else cout<< -1 <<endl;

        }


    return 0;
}

