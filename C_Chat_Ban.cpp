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
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>x>>y;
        ll k=(x*(x+1))/2;
        k+=(((x-1)*x)/2);
        if(x==1)
        cout<<1<<endl;
        else if(y>=k)
        cout<<(2*x)-1<<endl;
        else{
        ll low=0,high=(2*x);
        while(low+1<high)
        {
            ll mid=(low+high)/2;
            if(mid<=x)
            {
                ll k=(mid*(mid+1))/2;
                if(y>k)
                low=mid;
                else high=mid;
            }
            else
            {
                ll k=(x*(x+1))/2;
                k+=(((x-1)*x)/2);
                ll k1=(2*x)-mid;
                k-=((k1*(k1+1))/2);
                if(y>k)
                low=mid;
                else high=mid;
            }
            
        }
        sum=(low*(low+1))/2;
        if(sum<y)
        cout<<low+1<<endl;
        else cout<<low<<endl;
        }
    }


    return 0;
}

