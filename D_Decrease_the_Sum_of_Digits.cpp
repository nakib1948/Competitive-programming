#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///

    ll t;
    cin>>t;
    while(t--)
    {
        ll count=0,n,count1=0;
        string s="0",q,w;
        cin>>w>>q;
        ll k=stoi(q);
        if(q==w)
         cout<<"0"<<endl;
        else
        {
            s+=w;
            w="0"+w;
            count=s.size();
            for(ll i=1;i<count;i++)
            { 
                ll sum=0;
                for(ll j=0;j<s.size();j++)
                {
                    sum+=s[j]-'0';
                }
                if(sum>k)
                {
                    s[count-1]='0';
                    s[count-2]++;
                    count--;
                }
                else
                {
                    break;
                }
            }
            string q1,w1;
            for(ll i=0;i<s.size();i++)
            {
                if(s[i]==w[i])
                {
                    continue;
                }
                else
                {
                    q1=s.substr(i,(s.size()-i+1));
                    w1=w.substr(i,(w.size()-i+1));
                }
                
            }
            ll k1=stoi(q1);
            ll k2=stoi(w1);
            cout<<abs(k1-k2)<<endl;
            cout<<s<<endl;
        }
        
        
    }


    return 0;
}

