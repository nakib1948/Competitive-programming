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
   
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>x>>y>>z;
        bool ok=false;
        for(ll i=1;i<=100000;i++)
        {
            n+=x;
            ll k=y*i;
            count++;
            if(n<=(k*z))
            {
                ok=true;
                break;
            }
        }
        if(ok)
        cout<<count<<endl;
        else cout<<-1 <<endl;


    return 0;
}

