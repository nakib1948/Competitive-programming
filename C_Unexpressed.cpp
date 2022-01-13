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
ll Pow(ll x,ll y){return y==0?:x*pow(x,y-1);}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
   
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        ll low=0,high=1e9;
        while(low+1<high)
        {
            ll mid=(low+high)/2;
            if(Pow(mid,2)<=n)
            low=mid;
            else 
            high=mid;
        }
        set<ll>s;
        for(ll i=2;i<=low;i++)
        {
            j=2;
            sum=pow(i,j);
            while(sum<=n)
            {
                s.insert(sum);
                j++;
                sum=pow(i,j);
            }
        }
        cout<<n-s.size()<<endl;
    return 0;
}

