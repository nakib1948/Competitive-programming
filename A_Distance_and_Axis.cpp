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
        if(m==n)
        cout<<0<<endl;
        else if(m<n)
        {
            if(2*m<n)
            cout<< abs(n-m)<<endl;
            else cout<<abs(2*m-n)<<endl;
        }
        else if(m>n)
        {
            cout<<(2*m-n)<<endl;
        }
    }


    return 0;
}

