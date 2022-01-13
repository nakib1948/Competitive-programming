#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;
ll Pow(ll x,ll y){return y==0?:x*pow(x,y-1);}
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
   
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        
      
        while(ceil(log2(n)) != floor(log2(n)))
        {
            ll k=floor(log2(n));
            n=n-Pow(2,k);
            count++;
        }
        cout<<count+1<<endl;


    return 0;
}

