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
        ll i,j,x=0,y=0,z,count=0,sum=0,n,m;
        string s;
        getline(cin,s);
        cout<<s<<endl;
        s+=' ';
        double ans=0.0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='*' || s[i]=='+')
            count++;
        }
        while(sum!=count){
        y=0;
        for(ll i=4;i<=s.size();i++)
        {
            if(s[i]=='*')
            {
                y=1;
                sum++;
                ll k=0,k1=0;
                string w="",r="";
                for(ll j=i+2;j<=s.size();j++)
                {
                    if(s[j]==' ' || s[j]=='*' || s[j]=='+')
                    {
                      k=j;
                      break;
                    }
                    else
                    {
                        r+=s[j];
                    }
                }
                for(ll j=i-2;j>=0;j--)
                {
                    if(s[j]==' ' || s[j]=='*' || s[j]=='+')
                    {
                        k1=j;
                        break;
                    }
                    else
                    {
                        w+=s[j];
                    }
                }
                reverse(w.begin(),w.end());
                double x1=stod(w),x2=stod(r);
                double ans=(x1*x2);
             
                
                string h=to_string(ans),h1=s.substr(0,k1),h2=s.substr(k+1,s.size()-k);
                s=h1;s+=' ';s+=h;s+=' ';s+=h2;
                cout<<s<<endl;
                break;
            }
            if(s[i]=='+' && x==1)
            {
                sum++;
                ll k=0,k1=0;
                string w="",r="";
                for(ll j=i+2;j<=s.size();j++)
                {
                    if(s[j]==' ' || s[j]=='*' || s[j]=='+')
                    {
                      k=j;
                      break;
                    }
                    else
                    {
                        r+=s[j];
                    }
                }
                for(ll j=i-2;j>=0;j--)
                {
                    if(s[j]==' ' || s[j]=='*' || s[j]=='+')
                    {
                        k1=j;
                        break;
                    }
                    else
                    {
                        w+=s[j];
                    }
                }
                reverse(w.begin(),w.end());
                double x1=stod(w),x2=stod(r);
                double ans=(x1+x2);
               
                
                string h=to_string(ans),h1=s.substr(0,k1),h2=s.substr(k+1,s.size()-k);
                s=h1;s+=' ';s+=h;s+=' ';s+=h2;
                cout<<s<<endl;
                break;

            }
        }
            if(y==0)
            x=1;

        }

    return 0;
}

