#include<bits/stdc++.h>
using namespace std; 
 
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;
 
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    
        int x,y,count=0,sum=0,ans=0,n;
        cin>>n;
        vector<pair<int,int> >v;
        while(n--)
        {
            cin>>x>>y;
            v.pb(mp(x,y));
            sum+=x;
        }
 
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
 
        for(int i=0;i<v.size();i++)
        {
            count+=v[i].ff+v[i].ss;
            int k= v[i].ff;
            ans++;
            sum-=k;
           
            if(count>sum)
            break;
        }
        cout<<ans<<endl;
 
    return 0;
}
 