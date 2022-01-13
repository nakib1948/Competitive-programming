#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    set<ll>s;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,m;
        cin>>x>>y;
        if(x==1)
        {
            s.insert(y);
        }
        else if(x==2)
        {
           s.erase(y);
        }
        else if(x==3)
        {
           auto it=s.find(y);
            if(it!=s.end())
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
            
        }
        
    }


    return 0;
}

