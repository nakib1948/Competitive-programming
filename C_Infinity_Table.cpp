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
            
            vector<ll>v;
            for(ll i=1;;i++)
            {
                if(i*i>1e9){
                    
                    v.pb(i*i);
                    break;
                }
                else
                    v.pb(i*i);
            }
            
            ll t;
            cin>>t;
            while(t--)
            {
                ll i,j,x,y,z,count=0,sum=0,n,m;
                cin>>n;
                x=lower_bound(v.begin(),v.end(),n)-v.begin()+1;
                y=v[x-1]-x+1;
                if(n>=y)
                {
                    cout<<x<<" "<<v[x-1]-n+1<<endl;
                }
                else
                {
                   z=y-n;
                   cout<<x-z<<" "<<x<<endl;

                }
                
            }


    return 0;
}

