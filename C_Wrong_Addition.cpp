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
        ll i,j,x,y,z,count=0,sum=0,n,m;
        string s,w,r="";
        cin>>s>>w;
        j=w.size()-1;
        for(ll i=s.size()-1;i>=0;i--)
        {
            if(j<0)break;
            if(s[i]==w[j])
            r+='0';
            else if(s[i]<w[j])
            {
                r+=((w[j]-s[i])+'0');
            }
            else
            {
                ll k=s[i]-'0';
                string q="1";
                q+=w[j];
                ll k1=stol(q);
                ll k2=k1-k;
                string p=to_string(k2);
                r+=p;
                j--;
            }
            j--;
        }
        reverse(r.begin(),r.end());
        // for(ll i=0;i<r.size();i++)
        // {
        //     if(r[i]=='0')
        //     {
        //         r.erase(i,1);
        //         i--;
        //     }
        //     else break;
        // }
        cout<<r<<endl;
        // ll k=stol(s),k1=stol(r),k2=stol(w);
        // if(k+k1==k2)
        // cout<<r<<endl;
        // else cout<< -1 <<endl;


    }


    return 0;
}

