#include<bits/stdc++.h>
using namespace std; 

#define ll long long

int main()
{
   
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,a,b,z,count=0,sum=0,n,m;
        cin>>x>>y>>a>>b>>i>>j;
        if((x==a && x==i && j>=min(y,b) && j<=max(y,b)) || (y==b && y==j && i>=min(x,a) && i<=max(a,x) ))
        {
          cout<< abs(x-a)+abs(y-b)+2 <<endl;

        }
        else
        cout<< abs(x-a)+abs(y-b) <<endl;
    }


    return 0;
}

