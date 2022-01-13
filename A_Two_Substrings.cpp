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
   
        ll i,j,x,y,z,count=0,sum=0,n,m,ab=0,ba=0,total=0;
        string s;
        cin>>s;
        if(s.size()<3)cout<<"NO"<<endl;
        else{
        string w="ABA",q="BAB";
        for(ll i=0;i+3<=s.size();i++)
        {
            string r=s.substr(i,3);
            if(r==w || r==q)
            {
                total++;
                s[i]='0';s[i+1]='0';s[i+2]='0';
            }
        }
        for(ll i=0;i<s.size()-1;i++)
        {
            if(s[i]=='A' && s[i+1]=='B' && ab==0)
            {
                ab=1;
                count++;
                s.erase(i,2);
                i--;
            }
            else if(s[i]=='B' && s[i+1]=='A' && ba==0)
            {
                ba=1;
                count++;
                s.erase(i,2);
                i--;
            }
            if(count==2)
            break;
        }
        if(count==2)
        cout<<"YES"<<endl;
        else
        {
            if(count==0 && total>=2)
            cout<<"YES"<<endl;
            else if(count==1 && total>=1)
            cout<<"YES"<<endl;
            else if((total==0 && count<2) || (total==1 && count==0))
            cout<<"NO"<<endl;
        }
        
        }

    return 0;
}

