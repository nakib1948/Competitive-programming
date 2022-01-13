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
        cin>>n>>m;
        ll a[n];
        
        rep(i,n){
        cin>>a[i];
        if(a[i]&1)count++;
        }
        while(m--)
        {
            cin>>x>>y;
            if(x==2)
            {
                 if(count>=y)
                cout<<1<<endl;
                else 
                cout<<0<<endl;
            }
            else
            {
                if(a[y-1]==1)
                {a[y-1]=0;count--;}
                else 
                {a[y-1]=1;count++;}
            }
        }

    return 0;
}

