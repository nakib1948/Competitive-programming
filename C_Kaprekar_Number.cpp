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
        while(m--)
        {
            string s,w;
            s=to_string(n);
            sort(s.begin(),s.end());
            x=stoi(s);
            reverse(s.begin(),s.end());
            y=stoi(s);
            n=y-x;
            if(n==0)
            {
                cout<<0<<endl;
                return 0;
            }
        }
        cout<<n<<endl;


    return 0;
}

