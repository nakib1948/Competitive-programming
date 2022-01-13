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
        ll i,j,x,y,z,count=0,sum=0,n,m,t1=0,t2=0;
        string s;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if((i+1)%2==0)
            {
                if(s[i]=='1')
                t2++;
            }
            else
            {
                if(s[i]=='1')
                t1++;
            }
        }
        
    }


    return 0;
}

