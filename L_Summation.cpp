#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
ll recsum(ll a[],ll index)
{
    ll sum=0;
    ll count=0;
    sum+=a[count];
    if(count==(index-1))
    {
        return sum;
    }
    else
    {
        count++;
       return recsum(a,index);
    }
    
}

int main()
{
        ll i,j,x,y,z,count=0,n;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }

        cout<<recsum(a,n)<<endl;
    return 0;
}

