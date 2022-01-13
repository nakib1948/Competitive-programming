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
vector<ll>v;
// void getall()
// {
//     for(ll i=7;i<=300000000;i+=7)
//     {
//         v.pb(i);
//     }
// }
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///

    heyyoo;
    //getall();
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>x>>y>>z;
        sum=x+y+z;

        ll low=1,high=300000000;
        bool ok=false;
        while(low<=high)
        {
            ll mid=(low+high)/2;
            ll k=mid/7;
            m=k*7;
            j=k*2;
            if(m+j ==sum)
            {
                if((x-(k-1))<=0 || (y-(k-1))<=0 || (z-(k-1))<=0){
                  ok=false;
                }
                else
                {
                    ok=true;
                    break;
                }
                
            }
            if(m+j > sum)
            high=mid-1;
            else 
            low=mid+1;
        }
        cout<<(ok ? "YES":"NO")<<endl;
    }


    return 0;
}

