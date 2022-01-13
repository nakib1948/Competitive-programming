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
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        if(n==1)
        cout<<"0"<<endl;
        else if(n==2)
        cout<<"0 1"<<endl;
        else
        {
           cout<<"0 1 ";
           ll k=0;
           ll l=1;
           for(i=1;i<=n-2;i++)
           {
               sum=k+l;
               cout<<sum<<" ";
               k=l;
               l=sum;
           }
        }
        
      
    return 0;
}

