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
ll number_of_digit(ll x) {ll sum=0; while(x>0){ sum++; x/=10; } return sum; }
ll b[]={1,11,101,1009,11621,172001,1063109,15485867,104395303};
ll b1[]={2,13,103,1627,11551,599359,1218709,86028157,198491329};
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y=5,z,count=0,sum=0,n,m;
        cin>>n>>m>>x;z=n,j=m;
        if(x==1){
        if(n!=m)
        cout<<b[n-1]<<" "<<b[m-1]<<endl;
        else cout<<b[n-1]<<" "<<b1[n-1]<<endl;
        }
        else{
        if(n>m)swap(n,m);
        vector<ll>v;
        count=1;
        while(number_of_digit(count)!=n)
        {
            count*=10;
        }
        sum=1;
        while(number_of_digit(sum)!=m)
        {
            sum*=10;
        }
        while(number_of_digit(y)!=x)
        {
            y*=10;
        }
        if(z>j)
        cout<<sum+y<<" "<<count<<endl;
        else
        cout<<count<<" "<<sum+y<<endl;
          
        }
    }

    return 0;
}

