#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;

int main()
{
     ///"Bismillahir Rahmanir Raheem"///
     string s,s1="3B",s2="HR",s3="2B",s4="H";
     map<string,ll>mp;
     mp[s1]=0;
     mp[s2]=0;
     mp[s3]=0;
     mp[s4]=0;
     while(cin>>s)
     {
         mp[s]=1;
     }
    
     if(mp[s1]==1 && mp[s2]==1 && mp[s3]==1 && mp[s4]==1)
     cout<<"Yes"<<endl;
     else cout<<"No"<<endl;

    return 0;
}

