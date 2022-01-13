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
        ll i,j,x,y,z,count=0,sum=0,n,m,zero=0,one=0,bitch=INT_MIN;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        s+='9';
        vector<ll>v,v1,v2;
        for(ll i=0;i<s.size();i++)
        {
            count=0;
            if(s[i]=='1')
            {
                count++;
                for(ll j=i+1;j<s.size();j++)
                {
                    if(s[j]=='1')
                    count++;
                    else
                    {
                        i=j-1;
                        break;
                    }
                    
                }
                one+=count;
                v.pb(count);
                v2.pb(count);
            }
            else if(s[i]=='0')
            {
                count++;
                for(ll j=i+1;j<s.size();j++)
                {
                    if(s[j]=='0')
                    count++;
                    else
                    {
                        i=j-1;
                        break;
                    }
                    
                }
                zero+=count;
                v1.pb(count);
                v2.pb(count);
            }
        }
       
            count=0;ll sum1=0,count1=0,sum2=0;
           
                for(ll i=0;i<v1.size();i++)
                {
                    sum+=(v1[i]*x)+y;
                }
                count+=(one*x)+y;
                if(one!=0)
                bitch=max(bitch,sum+count);
                for(ll i=0;i<v.size();i++)
                {
                    sum1+=(v[i]*x)+y;
                }
                count1+=(zero*x)+y;
                if(zero!=0)
                bitch=max(bitch,sum1+count1);
                for(ll i=0;i<v2.size();i++)
                {
                    sum2+=(v2[i]*x)+y;
                }

                cout<< max(sum2,max(bitch,(n*x)+(n*y)))<<endl;
       
    }


    return 0;
}

