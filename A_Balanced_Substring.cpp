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
        cin>>n;
        string s;
        cin>>s;
        for(ll i=1;i<s.size();i++)
        {
            if(s[i-1]=='a'&& s[i]=='b' || s[i-1]=='b'&& s[i]=='a')
            {
                cout<<i<<" "<<i+1 <<endl;
                count=1;
                break;
            }

        }
        if(!count)
        cout<< -1 <<" "<<-1<<endl;
    }


    return 0;
}

