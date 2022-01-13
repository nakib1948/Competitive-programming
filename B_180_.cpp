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

 
        ll i,j,x,y,z,count=0,sum=0,n,m;
        string s;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='6')
            {
                s[i]='9';
            }
            else if(s[i]=='9')
            s[i]='6';
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;


    return 0;
}

