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
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>y;
        ll low=1,high=n;
        while(low<=high)
        {
            ll mid=(low+high)/2;
            ll k=mid-1;
            sum=(k*(k+1))/2;
            count=(mid*(mid+1))/2;
            if(y>sum && y<=count)
            {
                x=mid;
                break;
            }

            if(y>count)
            {
                low=mid+1;
            }
            else if(y<count)
            {
                high=mid-1;
            }
        }
        string s="";
        for(ll i=0;i<n;i++)
        {
            s+='a';
        }
        sum=((x-1)*x)/2;
        z=y-sum;
        s[s.size()-x-1]='b';
        s[s.size()-z]='b';
        cout<<s<<endl;
    }


    return 0;
}

