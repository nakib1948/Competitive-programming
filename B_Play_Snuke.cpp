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
     
        ll i,j,x,y,z,count=0,sum=1e10,n,m;
        cin>>n;
        rep(i,n)
        {
           cin>>x>>y>>z;
           if(x<z)
           {
               sum=min(sum,y);
               count=1;
           }
        }
     
        if(count==0)cout<<-1<<endl;
        else cout<<sum<<endl;


    return 0;
}

