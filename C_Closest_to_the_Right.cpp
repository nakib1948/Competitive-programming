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
     ///"In the name of Allah,most gracious and most merciful"///

    heyyoo;
   
    ll i,j,x,y,z,count=0,sum=0,n,k;
    cin>>n>>k;
    vector<ll>v(n);
    rep(i,n)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    while(k--)
    {
        cin>>x;
        // z=lower_bound(v.begin(),v.end(),x)-v.begin();
        // cout<<z+1<<endl;
         ll low=0,high=n-1;
        while(low<high){
        ll mid = (low+high)/2;
        if(v[mid]>=x){
            high = mid;
        }
        else{
            low = mid+1;
        }
        }
        if(v[high]<x)high++;
         cout<<high+1<<endl;
    }

    


    return 0;
}

