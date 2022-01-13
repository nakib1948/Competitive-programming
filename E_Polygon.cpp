#include<bits/stdc++.h>
using namespace std; 

#define ll long long

int main()
{
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        char a[n][n];
        for( i=0;i<n;i++)
        {
            for( j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }

        bool ok=true;
        for(ll i=n-2;i>=0;i--)
        {
            for(ll j=n-2;j>=0;j--)
            {
               if(a[i][j] == '1')
               {
                   if(a[i+1][j] == '0' && a[i][j+1] == '0')
                   {
                     ok=false;
                     break;
                   }
                   
               }
              
            }
            if(!ok)
              break;
        }
       
      cout<< (ok ?"YES":"NO")<<endl;
        

    }


    return 0;
}

