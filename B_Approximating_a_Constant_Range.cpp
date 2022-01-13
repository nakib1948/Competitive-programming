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
ll b[100005];
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

       heyyoo;
 
        ll i,j,z,y=0,count=0,sum=0,n,m;
        cin>>n;
        ll a[n];
        vector<ll>v;
        rep(i,n){
            cin>>a[i];
            v.pb(a[i]);
        }
      
        set<ll>s;
        while(y<v.size())
        {
            b[v[y]]=y;
            s.insert(v[y]);
         
            if(s.size()<=2)
            {
                sum=max(sum,y+1);
              
            }
            else
            {
              
                auto it2=s.find(v[y]);
                s.erase(it2);
                auto it=s.begin();
                auto it1=s.end();
                it1--;
                if(abs(v[y]-*it)>1)
                {
                   v.erase(v.begin(),v.begin()+b[*it]+1);
                }
                else if(abs(v[y]-*it1)>1)
                {
            
                    v.erase(v.begin(),v.begin()+b[*it1]+1);
                }
             
                count=1;
                y=0;
                s.clear();
            }
            if(count==1)
            count=0;
            else 
            y++;
               
        }
        cout<<sum<<endl;
        
    return 0;
}

