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
           ///"Bismillahir Rahmanir Raheem"///

            heyyoo;
    
            ll i,j=0,x=0,y=0,z=0,z1=0,count=0,sum=0,ans=0,n,m,k=0,k1=0;
            string s,w;
            cin>>s>>w;
            if(s.size()==w.size())
            {
                for(ll i=0;i<s.size();i++)
                {
                    if((s[i]=='0'&& w[i]=='1')|| (s[i]=='1' && w[i]=='0'))
                    ans++;
                }
                cout<<ans<<endl;
            }
            else{
            ll a[s.size()],b[s.size()],one[s.size()],one1[s.size()];
            memset(a,0,sizeof(a));
            memset(b,0,sizeof(b));
            memset(one,0,sizeof(one));
            memset(one1,0,sizeof(one1));
            for(ll i=0;i<s.size();i++)
            {
                if(s[i]=='0'){
                    a[i]=1;
                    k++;
                }
                else{
                    one[i]=1;
                    k1++;
                }

            }
            for(ll i=s.size()-1;i>=0;i--)
            {
                if(s[i]=='0')
                    b[x]=1;
                else
                    one1[x]=1;
                x++;
            }
            for(ll i=1;i<s.size();i++)
            {
                a[i]+=a[i-1];
                b[i]+=b[i-1];
                one[i]+=one[i-1];
                one1[i]+=one1[i-1];
            }
            if((s.size()*2) >= w.size())
            { 
                for(ll i=0;i<s.size();i++)
                {
                    if(w[i]=='1')
                    {
                        ans+=(a[i]);
                    }
                    else 
                    ans+=one[i];
                }
                for(ll i=w.size()-1;i>=s.size();i--)
                {
                    if(w[i]=='1')
                    ans+=(b[y]);
                    else ans+=one1[y];

                    y++;
                }
                cout<<ans<<endl;
            }
        
            else{
                
                for(ll i=0;i<s.size();i++)
                {
                    if(w[i]=='1')
                    {
                        ans+=(a[i]);
                    }
                    else 
                    ans+=one[i];
                }
                for(ll i=w.size()-1;i>=w.size()-s.size();i--)
                {
                    if(w[i]=='1')
                    ans+=(b[y]);
                    else ans+=one1[y];

                    y++;
                }

                for(ll i=s.size();i<w.size()-s.size();i++)
                {
                    if(w[i]=='1')
                    count++;
                    else sum++;
                }
                cout<<ans+(k*count)+(sum*k1) <<endl;
        
            }
            }

    return 0;
}

