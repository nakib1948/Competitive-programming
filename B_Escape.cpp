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
      ll i,j,x,y=0,z,count=0;
      double sum=0.0,n,m,p,d,t,f,c;
      cin>>p>>d>>t>>f>>c;
       
      if(p>=d)
      cout<<0<<endl;
      else{
      x=p*t;
      while(1)
      {
        //   if(x>=c)
        //   break;
          while(y<x)
          {
              x+=p;
              y+=d;
          }
          if(x<c)
          {
            count++;
            sum=y/d;
          
            y=0;
           
            x+=((sum+f)*p);
      
          }
          else 
          break;
      }
      cout<<count<<endl;
      
      }

    return 0;
}

