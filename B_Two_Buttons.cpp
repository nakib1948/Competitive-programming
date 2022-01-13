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
   
        ll i,j,x,y,z,count=0,sum=0,n,m,flag=0;
        cin>>n>>m;
        if(n>=m)
        cout<<n-m<<endl;
        else{
           if(n>=(m+1)/2)
           {
               flag=1;
               x=(2*n)-m+1;
           }
           y=m;
           while(y>0)
           {
               if(y&1)
               {sum++;y=(y+1)/2;}
               else y=y/2;
               count++;
               if(y<=n)
               break;
           }
           if(flag)
           cout<<min(x,n-y+count+sum)<<endl;
           else 
           cout<<n-y+count+sum<<endl;
         }
 
    return 0;
}

