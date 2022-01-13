#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;
ll Pow(ll x,ll y){return y==0?:x*pow(x,y-1);}
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
        ll y,n,m;
        cin>>n>>y;
        ll low=1,high=n;
        while(low<high)
        {
            ll mid=(low+high)/2;
            ll ans=mid,sum=mid,x=y;
            while((ans/x)>0)
            {
               sum+=(ans/x);
                x*=y;
            }
            if(sum>=n)
            {
                high=mid;
            }
            else 
            {
                low=mid+1;
            }
        }
        cout<<high<<endl;

    return 0;
}

