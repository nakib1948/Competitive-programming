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
        cin>>x>>y;
        sum=(y*(y+1)/2)-(y-2)-1;
        if(sum<x) 
        cout<<-1<<endl;
        else if(x==y)
        cout<<1<<endl;
        else
        {
            ll low=1,high=y+1;
            while(low+1<high)
            {
                ll mid=(low+high)/2;
                sum=(mid*(mid+1)/2)-(mid-2)-1;
                // if(sum==x)
                // {
                //     cout<<mid-1<<endl;
                //     return 0;
                // }
                if(sum>x)
                high=mid;
                else 
                low=mid;
            }
            cout<<low<<endl;
        }
        


    return 0;
}

