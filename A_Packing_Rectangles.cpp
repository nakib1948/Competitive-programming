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
  
        ll i,j,x,y,z,count=0,sum=0,n,m;
     
        cin>>x>>y>>z;
        ll low=0,high=1;
        while(((high/x) * (high/y) )<=z)high*=2;
        while(low+1<high)
        {
            ll mid=(low+high)/2;
            n=mid/x;
            m=mid/y;
            if((n*m)>=z)
            {
                high=mid;
            }
            else low=mid;
        }
        cout<<high<<endl;


    return 0;
}

