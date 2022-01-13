#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y=1,z,count=0,sum=0,n,m;
        cin>>n;
        vector<ll>v[n];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<5;j++)
            {
                cin>>x;
                v[i].pb(x);
            }
            sort(v[i].begin(),v[i].end());
        }
        
        while (count<n)
        {
            sum=0;
            for(ll i=0;i<n;i++)
            {
                ll k=0;
                if(i==count)
                continue;
                else
                {
                    if(v[i][0]>v[count][0])
                    k++;
                    if(v[i][1]>v[count][1])
                    k++;
                    if(v[i][2]>v[count][2])
                    k++;
                    if(v[i][3]>v[count][3])
                    k++;
                    if(v[i][4]>v[count][4])
                    k++;
                }
                if(k>=3)
                sum++;
            }
            if(sum==n-1)
            {
                y=0;
                cout<< count+1 <<endl;
                break;
            }
            count++;
        }
        if(y)
        cout<< -1 <<endl;

    }


    return 0;
}

