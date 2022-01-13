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
        ll a[n],b[51];
        memset(b,0,sizeof(b));
        rep(i,n)
        {
            cin>>a[i];
            if(b[a[i]]==0)
            {
                b[a[i]]=i+1;
            }
        }
        for(ll i=0;i<m;i++)
        {
            cin>>x;
            cout<< b[x]<<" ";
            for(ll j=1;j<51;j++)
            {
                if(b[j]!=0 && b[j]<b[x])
                b[j]+=1;
            }
            b[x]=1;
        }
        cout<<endl;


    return 0;
}

