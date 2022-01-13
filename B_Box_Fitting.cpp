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
            ll i,j,x,y,z,count=1,sum=0,n,m;
            cin>>n>>m;
            vector<ll>v(n);
            multiset<ll>s;
            
            for(ll i=0;i<n;i++)
            {
                cin>>v[i];
                s.insert(v[i]);
            }
            sum=m;
            while(s.size())
            {
                auto it=s.upper_bound(sum);
                if(it==s.begin())
                {
                    sum=m;
                    count++;
                }
                else
                {
                    it--;
                    sum-=*it;
                    s.erase(it);
                }        
            }
            cout<<count<<endl;
        }


    return 0;
}

