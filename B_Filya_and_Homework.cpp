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
     ///"In the name of Allah,most gracious and most merciful"///

        heyyoo;
 
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        set<ll>s;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        if(s.size()<=2)
        cout<<"YES"<<endl;
        else if(s.size()==3)
        {
            auto it=s.begin(),i=s.begin();
            i++;
            auto it1=i;
            i++;
            auto it2=i;
            if((*it1-*it)==(*it2-*it1))
            cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
        


    return 0;
}

