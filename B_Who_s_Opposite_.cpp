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
                cin>>x>>y>>z;
                i=max(x,y)-min(x,y);
                j=1+i;
                j=j+i-1;
               
                if(z>j || x>j || y>j)
                {
                    cout<< -1 <<endl;
                    continue;
                }
                
                ll k=(z+i)%j,k1=(j+z-i)%j;
                if(k==0)k=j;
                if(k1==0)k1=j;
                if(k==k1)
                cout<<k<<endl;
                else cout<< -1 <<endl;
            }


    return 0;
}

