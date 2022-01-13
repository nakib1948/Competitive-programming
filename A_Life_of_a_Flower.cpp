#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define Quicksilver ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=1,n,m;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
       
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]==0 && a[i+1]==0){
                count=1;
                break;
            }
           
            else if(a[i]==1 && a[i+1]==1) 
            sum+=5;
          
            else if(a[i]==1 && a[i+1]==0)
            sum++;
        }
        if(a[n-1]==1)sum++;
        if(count)cout<< -1 <<endl;
        else cout<<sum<<endl;
        
    }


    return 0;
}

