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
     
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        if(m-n < 2)
        cout<< -1 <<endl;
        else if(m-n ==2)
        {
            if(n&1)
            cout<<-1<<endl;
            else 
            cout<<n<<" "<<n+1<<" "<<n+2<<endl;
        }
        else
        {
            if(n&1)
            {
                 cout<<n+1<<" "<<n+2<<" "<<n+3<<endl;
            }
            else
            {
                cout<<n<<" "<<n+1<<" "<<n+2<<endl;
            }
            
        }
        

      


    return 0;
}

