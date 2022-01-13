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
     ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x=1,y,z,count=0,sum=0,n,m;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            sum+=a[i];
        }
        z=n;

        double k=double(sum)/double(n);
        while(x!=0){
        x=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==0)
            continue;
            if(double(a[i])>k){
               
            x=1;
            count++;
            sum-=a[i];
            z--;
            a[i]=0;
            }
        }
        k=double(sum)/double(z);

        }
        cout<<count<<"\n";
    }

    return 0;
}

