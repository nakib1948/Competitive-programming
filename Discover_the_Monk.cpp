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
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        vector<ll>v(n);
        rep(i,n)cin>>v[i];
        sort(v.begin(),v.end());
        while(m--)
        {
            cin>>x;
            
            ll low=0,high=n-1,mid,count=0;
           
            while(low<=high)
            {
                mid=(low+high)/2;
                if(v[mid]==x)
                {
                    count=1;
                     break;
                }
               
                if(v[mid]>x)
                high=mid-1;
                else 
                low=mid+1;
            }
            if(count==1)
            cout<<"YES"<<endl;
            else 
            cout<<"NO"<<endl;
        }


    return 0;
}

