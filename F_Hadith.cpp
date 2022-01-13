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
   
        ll i,j,x,y,z,count=0,sum=0,n,m,mot=0;
        cin>>n>>m;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        x=0,y=0;
        while(x<n && y<n)
        {  
            
            if(count>m)
            {  
                mot--;
                count-=a[x];
                x++;    
            }
            else 
            {
                 count+=a[y];
                 mot++;
                 //cout<<mot<<endl;
                 y++;
                 if(count<=m)
                 sum=max(sum,mot);
            }
           
        }
        cout<<sum<<endl;


    return 0;
}
