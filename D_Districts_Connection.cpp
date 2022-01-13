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
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        ll a[n];
        
        vector<ll>v[n];
        set<ll>s;
        vector<pair<ll,ll> >pa;
        rep(i,n)
        {
            cin>>a[i];
            s.insert(a[i]);
        }

        if(s.size()==1)
        cout<<"NO"<<endl;

        else{
            cout<<"YES"<<endl;
          

                for(auto it:s){
                ll x=-1;
                for(ll i=0;i<n;i++){
                if(a[i]==it){
                    a[i]=0;
                    x=i+1;
                    break;

                    if(i==n)sum=1;
                }
                }
                for(ll i=0;i<n;i++)
                {
                   if(a[i]!=0 && a[i]!=it && pa.size()!=n-1 && x!=-1)
                    {
                        pa.pb(mp(x,i+1));
                        a[i]=0;
                    }
                    if(pa.size()==n-1)
                    break;
                }
                 if(pa.size()==n-1)
                    break;
                
                }
                
                
                for(auto it:pa)
                cout<<it.ff<<" "<<it.ss<<endl;
          

          }
    }

    return 0;
}


