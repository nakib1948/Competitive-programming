#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        if(n<4)
        cout<<0<<endl;
        else
        {
            cout<<(((n*(n-3))/2)%1000000007)<<endl;
        }
        
    }


    return 0;
}

