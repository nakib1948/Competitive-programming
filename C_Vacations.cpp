#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=1;i<=n;i++)
#define debug cout<<"debug"<<endl;
#define heyyoo ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
   
        ll i,j,x,y,z,count=0,sum=INT_MAX,n,m;
        cin>>n;
        ll a[n+1],rest[n+1],contest[n+1],gym[n+1];
        memset(rest,0,sizeof(rest));
        memset(contest,0,sizeof(contest));
        memset(gym,0,sizeof(gym));
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]==0)
            {
              count++;
            }
            else if(a[i]==1)
            {
                if(contest[i-1]==0)
                contest[i]=1;
                else
                count++;
            }
            else if(a[i]==2)
            {
                if(gym[i-1]==0)
                gym[i]=1;
                else 
                count++;
            }
            else 
            {
                if(gym[i-1]==0)
                gym[i]=1;
                else if(contest[i-1]==0)
                contest[i]=1;
            }
        }
        cout<<count<<endl;


    return 0;
}

