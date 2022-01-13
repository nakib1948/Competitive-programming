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
        cin>>n>>m;
        bool check=true;
        vector<ll>v[n];
        set<ll>s;
        char a[n][m];
        rep(i,n)
        {
            count=0;
            for(ll j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='G')
            v[i].pb(j);

            if(a[i][j]=='S')
            v[i].pb(j);

            if(a[i][j]=='S'&&count==0)
                check=false;
            else if(a[i][j]=='G')
                count=1;
            }
        }
        if(check){
            for(ll i=0;i<n;i++)
            {
                s.insert(v[i][1]-v[i][0]);
            }
            cout<<s.size()<<endl;
        }
        else 
        cout<< -1 <<endl;

    return 0;
}

