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
            ll count=0,five=0,zero=0;
            string w;
            cin>>w;
           
            for(ll i=w.size()-1;i>=0;i--)
            {
                if(w[i]=='5')
                {
                    for(ll j=i-1;j>=0;j--)
                    {
                        if(w[j]=='2' || w[j]=='7')
                        break;
                        else five++;
                    }
                    break;
                }
                else five++;
            }
            for(ll i=w.size()-1;i>=0;i--)
            {
                if(w[i]=='0')
                {
                    for(ll j=i-1;j>=0;j--)
                    {
                        if(w[j]=='5' || w[j]=='0')
                        break;
                        else zero++;
                    }
                    break;
                }
                else zero++;
            }
            cout<<min(zero,five)<<endl;
        }


    return 0;
}

