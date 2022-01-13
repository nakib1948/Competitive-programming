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
        vector<ll>v; v.pb(1);
        ll sum=2,t;
        for(ll i=1;i<=63;i++)
        {
            v.pb(sum);
            //cout<<sum<<endl;
            sum*=2;
        }

        cin>>t;
        while(t--)
        {
            ll sum=INT_MAX;
            string s;
            cin>>s;
            ll n=stoi(s);

            if(binary_search(v.begin(),v.end(),n))
            cout<<0<<endl;
            else{
            for(ll k=0;k<v.size();k++)
            {
                string w=to_string(v[k]);
                ll i=0,j=0,count=0;
                while(i<s.size() && j<w.size())
                {
                    if(s[i]==w[j])
                    {
                        count++;
                        i++;j++;
                    }
                    else i++;
                }
               // cout<< s.size()-count+w.size()-count<<endl;
                sum=min(sum,s.size()-count+w.size()-count);
            }
            cout<<sum<<"\n";
        }
        
        }

    return 0;
}

