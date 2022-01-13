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
     ///"In the name of Allah,most gracious and most merciful"///

        heyyoo;

        double i,j,x,y,z,count=0.0,sum=0.0,n,m,ans=INT_MAX,final=0.0,a,b;
        
        cin>>n;
        rep(i,n)
        {
            cin>>x;
            count=max(count,x);
        }
        cin>>m;
        for(ll i=0;i<m;i++)
        {
            cin>>y;
            sum=max(sum,y);
        }
        cin>>j;
        for(ll i=0;i<j;i++)
        {
            cin>>z;
            ans=min(ans,z);
        }
        cin>>a>>b;
        final=count*(sqrt((b*sum)/((a*ans)+(b*sum))));
        printf("%.14lf\n",final);
 
    return 0;
}

