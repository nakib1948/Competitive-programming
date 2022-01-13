#include<bits/stdc++.h>
using namespace std; 

#define ll long long

int main()
{
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,sum=INT_MAX,n;
        cin>>x>>y>>z;
        cout<<((x+y+z)%3==0 ? 0:1)<<endl;
    }


    return 0;
}

