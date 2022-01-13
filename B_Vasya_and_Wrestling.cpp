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
    ll t,i,j,x,y,z,count=0,sum=0,n,m,last=0;
    cin>>t;
    vector<ll>v,v1;
  
    while(t--)
    {
        cin>>n;
        if(n>0){
        sum+=n;
        v.pb(n);
        }
        else{
        count+=abs(n);
         v1.pb(n);
        }
        last=n;
    }
    if(count==sum)
    {
        x=min(v.size(),v1.size());
        ll ans=0;
        for(ll i=0;i<x;i++)
        {
            if(v[i]>abs(v1[i]))
            {
                ans=1;
                cout<<"first"<<endl;
                break;
            }
            else if(v[i]<abs(v1[i]))
            {
                ans=1;
                cout<<"second"<<endl;
                break;
            }
        }

        if(ans==0)
        {
            if(last>0)
            cout<<"first"<<endl;
            else cout<<"second"<<endl;
        }
        
    }
    else if(count>sum)
    cout<< "second"<<endl;
    else if(count<sum)
    cout<<"first"<<endl;


    return 0;
}

