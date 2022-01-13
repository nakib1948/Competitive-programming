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
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        deque<ll>q;
        if(n==1)
        cout<<a[0]<<endl;
        else if(n<3){
            if(a[0]>a[1])
            cout<<a[1]<<" "<<a[0]<<endl;
            else cout<<a[0]<<" "<<a[1]<<endl;
        }
        else{
        q.push_front(a[0]);
        if(a[0]>a[1])
        q.push_front(a[1]);
        else q.push_back(a[1]);
        for(ll i=2;i<n;i++)
        {
            if(a[i]<=q.front())
            q.push_front(a[i]);
            else q.push_back(a[i]);
        }
          for(auto it:q)
          cout<<it<<" ";
          cout<<endl;
        }
    }


    return 0;
}

