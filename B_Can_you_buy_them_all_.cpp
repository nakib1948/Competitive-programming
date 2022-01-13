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
   
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        for(ll i=1;i<=n;i++)
        {
            cin>>x;
            if(i%2==0)
            {
                sum+=(x-1);
            }
            else sum+=x;
        }
        if(sum<=m)
        cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
  


    return 0;
}

