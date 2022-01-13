#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
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
        ll a[n+1];rep(i,n)
        {cin>>a[i]; }
        x=n-m;
        
        if((m-1)==x){
             if(a[m]==1){count++;}
        for(ll i=m+1;i<=n;i++)
        {
                if(a[m-(i-m)]==1 && a[i]==1)
                count+=2;
           // else if(a[i]==1){count++;}
        }
        cout<<count<<endl;
        }
        else if(x>(m-1))
        {
             if(a[m]==1){count++;}
        for(ll i=m+1;i<=n;i++)
        {
            if(m-(i-m)>=1)
            {
                if(a[m-(i-m)]==1 && a[i]==1)
                count+=2;
            }
           else if(a[i]==1){count++;}
        }  cout<<count<<endl;
        }
       else if((m-1)>x)
       {
            if(a[m]==1){count++;}
        for(ll i=m+1;i<=n;i++)
        {
                if(a[m-(i-m)]==1 && a[i]==1)
                count+=2;
           // else if(a[i]==1){count++;}
        }
        for(ll i=m-1-x;i>=1;i--) 
        {
            if(a[i]==1)count++;
        }
         cout<<count<<endl;
       }
    
      


    return 0;
}

