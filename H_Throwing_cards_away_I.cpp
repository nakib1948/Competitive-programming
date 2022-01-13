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
        cin>>n;
        while(n!=0)
        {
            queue<ll>q;
            vector<ll>v;
            for(ll i=1;i<=n;i++)
            {
                q.push(i);
            }

            while(q.size()!=1)
            {
                ll k=q.front();
                q.pop();
                v.pb(k);
                ll k1=q.front();
                q.pop();
                q.push(k1);
            }
          
           
            if(v.size()==0){ cout<<"Discarded cards:"<<endl;}
            else{
            cout<<"Discarded cards: ";
            for(ll i=0;i<v.size();i++)
            {
                if(i==v.size()-1)
                {
                    cout<<v[i]<<endl;
                }
                else
                cout<<v[i]<<", ";
            }
            }
            cout<<"Remaining card: "<<q.front()<<endl;

            cin>>n;
        }


    return 0;
}

