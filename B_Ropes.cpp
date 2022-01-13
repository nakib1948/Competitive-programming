#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
vector<ll>v;
ll check(double k)
{
    ll count=0;
    for(ll i=0;i<v.size();i++)
    {
        ll sum=v[i]*1.0/k;
        count+=sum;
    }
    return count;
}

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///

        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        while(n--)
        {
            cin>>x;
            v.pb(x);
        }
        double low=0,high=1e7+10;
        while(fabs(low-high)>=0.00000001)
        {
            double mid=(low+high)/2;
            if(check(mid)>=m)
            low=mid;
            else 
            high=mid;
        }
        printf("%0.7lf\n",low);

    return 0;
}


