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
   
        ll i,j,x,y,z,count=0,sum=0,n,m;
        string s1,w;
        ll ch[26];
        cin>>s1;w=s1;
        i=0;j=25;
        while(j<w.size())
        {
            x=0;
            memset(ch,0,sizeof(ch));
            set<char>s;
            vector<ll>v;
            for(ll l=i;l<=j;l++)
            {   
                if(w[l]!='?'){
                ch[w[l]-'A']=1;
                s.insert(w[l]);}
                else v.pb(l);
            }
            for(ll k=0;k<=25;k++)
            {
                if(ch[k]==0 && x<v.size())
                {
                    char p='A'+k;
                    w[v[x]]=p;
                    x++;
                    s.insert(p);
                }
            }
            if(s.size()==26)
            {
                sum=1;y=j; 
                break;
            }
            else{
                for(ll l=i;l<=j;l++)
                {
                    w[l]=s1[l];
                }
            }
            i++,j++;
        }
        if(sum)
        {
            for(ll i=0;i<w.size();i++)
            {
                if(w[i]=='?')
                w[i]='A';
            }
            cout<<w<<endl;
        }
        else cout<<-1<<endl;

    return 0;
}

