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
     ///"In the name of Allah,most gracious and most merciful"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m,ans=0;
        cin>>n>>m;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            if(i!=0)sum+=a[i];
        }
       
       if((100*sum)<=((a[0]+sum)*m))
       cout<<0<<endl;
       else
       {
          count=sum+1;
          while(1)
          {
             if((100*count)<=((a[0]+count)*m))
              {
                  cout<<count-sum<<endl;
                  break;
              }
              count++;
          }
          
       }
       

    }


    return 0;
}

