#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define kk ios::sync_with_stdio(false); cin.tie(0);
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    kk;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,k;
        cin>>n>>k;
        ll b[n];
        rep(i,n)
        {
            cin>>b[i];
        }
        sort(b,b+n);
        for( j=1;j<n;j++)
        {
            if(b[j]<k)
            {
                ll sum=k-b[j];
                 count+=(sum/b[0]);
            }
 
        }
        cout<<count<<endl;
    }


    return 0;
}

