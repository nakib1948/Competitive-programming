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
     
        ll i,j,x,y,z,count=0,sum=0,n,m,plus=0,minus=0;
        cin>>n;
        ll a[n];
        vector<pair<ll,ll> >v;
        rep(i,n)
        {
            cin>>a[i];
            if((a[i]&1) && (a[i]<0))
            {
                count++;
                v.pb(mp(a[i]/2,1));
                minus+=(a[i]/2);
            }
            else if((a[i]&1) && (a[i]>=0))
            {
                sum++;
                v.pb(mp(a[i]/2,-1));
                plus+=(a[i]/2);
            }
            else if(a[i]>=0)
            {
                v.pb(mp(a[i]/2,0));
                plus+=(a[i]/2);
            }
            else if(a[i]<0)
            {
                v.pb(mp(a[i]/2,0));
                minus+=(a[i]/2);
            }
            
        }
        if(count>=sum)
        {
            for(ll i=0;i<v.size();i++)
            {
                if(plus == abs(-minus))
                break;
                if(v[i].ss == 1)
                {
                    minus+=(-1);
                    v[i].ff+=(-1);
                }
               
            }
              for(ll i=0;i<v.size();i++)
              {
                  cout<<v[i].ff<<endl;
              }
        }
        else
        {
              for(ll i=0;i<v.size();i++)
            {
                if(plus == abs(-minus))
                break;
                if(v[i].ss == -1)
                {
                    plus+=1;
                    v[i].ff+=1;
                }
                
            }
              for(ll i=0;i<v.size();i++)
              {
                  cout<<v[i].ff<<endl;
              }
        }
        



    return 0;
}

