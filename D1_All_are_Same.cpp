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
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=INT_MAX,ans=0,n,m;
        cin>>n;
        ll a[n];
        vector<ll>v,v1;
        set<ll>s;
        rep(i,n)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
       
        for(auto it:s)//{
        v.pb(it);
        //  cout<<it<< " ";
        // }
       // cout<<endl;
        for(ll i=1;i<v.size();i++)
        {
           // cout<<v[i]-v[i-1]<<" "<<v[i]<<" "<<v[i-1]<<endl;
            sum=min(sum,v[i]-v[i-1]);
        }
        for(ll i=1;i*i<=sum;i++)
        {
            if(sum%i==0){
            v1.pb(i);
            v1.pb(sum/i);
            }
        }
        bool ok=true;
        for(ll j=0;j<v1.size();j++){
        count=0;
        for(ll i=1;i<v.size();i++)
        {
            if((v[i]-v[0])%v1[j] ==0)
            {
               count++;
            }
        }
         if(count==v.size()-1)
         ans=max(ans,v1[j]);

        }
        if(ans==INT_MAX)
        cout<< -1 <<endl;
        else
        cout<<ans<<endl;
        // if(ok)
        // cout<<sum<<endl;
        // else cout<< 1 <<endl;
    }


    return 0;
}

