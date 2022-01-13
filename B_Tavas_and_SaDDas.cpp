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
        
        string s;
        cin>>s;
        ll count=0,sum=0;
        for(ll i=s.size()-1;i>=0;i--)
        {
            count++;
            if(s[i]=='7')
            sum+=(pow(2,count-1));
        }

        sum+=(2*(pow(2,s.size()-1) - 1));
        cout<<sum+1<<endl;


    return 0;
}

