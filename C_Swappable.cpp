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
        cin>>n;sum=n;
        map<ll,ll>mp;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            mp[a[i]]++;
        }

        for(auto it:mp)
        {
            sum-=it.ss;
            count+=(it.ss*sum);
        }
        cout<<count<<endl;
    


    return 0;
}

