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
     ///"In the name of Allah,most gracious and most merciful"///
     
        ll i,j=0,x,y,z,count=0,sum=0,n,m;
        string s,w;
        cin>>s>>w;
        for(ll i=0;i<w.size();i++)
        {
            if(w[i]==s[j])
            {
                j++;
            }
        }
        cout<<j+1<<endl;


    return 0;
}

