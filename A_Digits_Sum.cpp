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
        ll i,n,m;
        cin>>n;
        if(n%10==9)
        cout<< (n/10) +1  <<endl;
        else cout<< n/10 <<endl;
    }


    return 0;
}

