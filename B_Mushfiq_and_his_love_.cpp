#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
  
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        vector<ll>a(n);
        rep(i,n)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        if(m>n)
        cout<<-1<<endl;
        else
        cout<<a[m-1]<<" "<<0<<endl;


    return 0;
}

