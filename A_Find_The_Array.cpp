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
        ll i,j,x,y,z,count=1,sum=1,n,m;
        cin>>n;
        for(ll i=3;;i+=2)
        {
            if(sum+i <=n){
            sum+=i;
            //cout<<sum<<endl;
            count++;
            }
            else break;
        }
        if(sum==n)
        cout<<count<<endl;
        else cout<<count+1<<endl;
    }


    return 0;
}

