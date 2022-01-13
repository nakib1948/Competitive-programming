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
        cin>>x>>y;
        if((x+y)&1)
        cout<<-1<<" "<<-1<<endl;
        else
        {
            z=min(x,y);
            if(z==x)
            cout<<z<<" "<<((x+y)/2)-z<<endl;
            else
                cout<<((x+y)/2)-z<<" "<<z<<endl;
            
        }
        
    }


    return 0;
}

