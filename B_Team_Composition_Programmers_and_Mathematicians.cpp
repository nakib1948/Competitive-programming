#include<bits/stdc++.h>
using namespace std; 

#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
      
        if(n>=(n+m)/4 && m>=(n+m)/4)
        cout<<(n+m)/4<<endl;
        else cout<<min(n,min(m,(n+m)/4))<<endl;
        
        
    }


    return 0;
}

