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
        if(n==1 && m==10)
        cout<< -1 <<endl;
        else 
        {
            cout<<m;
            if(m<10){
            for(ll i=1;i<n;i++)
            {cout<<0;}
            }
            else
            {
                for(ll i=2;i<n;i++)
                {cout<<0;}
            }
            
            cout<<endl;
        }

    return 0;
}

