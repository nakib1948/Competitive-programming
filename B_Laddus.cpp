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
     
    
        ll i,j,x,y,z,count=0,sum=0,n,m,r=0,s=0;
        cin>>n;
        vector<ll>v(n);
        rep(i,n)
        {
            cin>>v[i];
        }
        while(1)
        {
            if(v.size()==0)
            break;
            if(count==0)
            {
                if(v[0]>=v[v.size()-1])
                {
                    auto it=v.begin();
                    r+=v[0];
                    v.erase(it);
                }
                else
                {
                 auto it=v.end();
                it--;
                r+=*it;
                v.erase(it);
                }
                count=1;
                
            }
            else
            {
                if(v[0]>=v[v.size()-1])
                {
                    auto it=v.begin();
                    s+=v[0];
                    v.erase(it);
                }
                else
                {
                 auto it=v.end();
                it--;
                s+=*it;
                v.erase(it);
                }
                count=0;
            }
            
        }
        cout<<r<<" "<<s<<endl;



    return 0;
}

