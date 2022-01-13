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
        string w,q;
        map<string,string>mp;
        cin>>n;
        cin.ignore();
        while(n--)
        {
            getline(cin,w);
            getline(cin,q);
            mp[w]=q;

        } 
        cin>>m;
        cin.ignore();
        while(m--)
        {
            string g;
            getline(cin,g);
            cout<<mp[g]<<endl;
        }


    return 0;
}

