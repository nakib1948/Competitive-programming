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
        ll i,j,x,y,z,count=0,sum=0,n,m,ans=0;
        cin>>n;
        ll a[n];
        vector<ll>alice,bob;
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]&1)
            bob.pb(a[i]);
            else 
            alice.pb(a[i]);
        }
        sort(bob.begin(),bob.end());
        sort(alice.begin(),alice.end());
        while(1)
        {
            if(bob.size()==0 || alice.size()==0)
            break;

            if(count==0 && bob.size()>0 && alice.size()>0)
            {
                if(alice[alice.size()-1]>=bob[bob.size()-1])
                {
                    sum+=alice[alice.size()-1];
                     auto it=alice.end();
                    it--;
                    alice.erase(it);

                }
                else{
                auto it=bob.end();
                it--;
                bob.erase(it);
                
                }
                count=1;
            }
            else if(count==1 && alice.size()>0 && bob.size()>0)
            {
                if(alice[alice.size()-1]<=bob[bob.size()-1])
                {
                    ans+=bob[bob.size()-1];
                     auto it=bob.end();
                    it--;
                    bob.erase(it);

                }
                else{
                auto it=alice.end();
                it--;
                alice.erase(it);
                }
                count=0;
            }
        }
        if(bob.size()>0)
        {
            while(bob.size()!=0)
            {
            if(count==0)
            {
                auto it=bob.end();
                it--;
                bob.erase(it);
                count=1;
            }
            else
            {
                auto it=bob.end();
                it--;
                ans+=*it;
                bob.erase(it);
                count=0;
            }
            }
            
        }
        else if(alice.size()>0)
        {
             while(alice.size()!=0)
            {
            if(count==1)
            {
                auto it=alice.end();
                it--;
                alice.erase(it);
                count=0;
            }
            else
            {
                auto it=alice.end();
                it--;
                sum+=*it;
                alice.erase(it);
                count=1;
            }
            }
        }
        if(sum>ans)
        cout<<"Alice"<<endl;
        else if(ans>sum)
        cout<<"Bob"<<endl;
        else 
        cout<<"Tie"<<endl;
    }


    return 0;
}

