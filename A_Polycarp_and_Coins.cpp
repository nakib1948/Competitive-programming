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
        ll i,j,x,y=0,z,count=0,sum=0,n,m;
        cin>>n;
        x=n/3;
        y=n-x;
        if(y%2==0)
            cout<< x <<" "<<y/2<<endl;
        else
            cout<< x+1 <<" "<<y/2<<endl;
        
    }


    return 0;
}

