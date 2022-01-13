#include<bits/stdc++.h>
using namespace std; 

#define ll long long

int main()
{
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        while(n)
        {
            sum+=n;
            n/=2;
        }
        cout<<sum<<endl;
    }


    return 0;
}

