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
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
          
               while(a[i]>0)
               {
                   if(a[i]>0){
                   a[i]--;

                   m--;
                   a[n-1]++;
                   }
                   else 
                   break;
                   if(m==0)
                   break;
               }
            if(m==0)
            break;
        }

        for(ll i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }


    return 0;
}