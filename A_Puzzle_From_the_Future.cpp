#include<bits/stdc++.h>
using namespace std; 

#define bss ios::sync_with_stdio(false); cin.tie(0);
#define ll long long

int main()
{
     
    bss;
    ll q;
    cin>>q;
    while(q--)
    {
        ll j,c=0,s=0,n;
        cin>>n;

        string w,s1;
        cin>>w;
        s1=w;
        s1[0]='1';
       
        for(ll i=1;i<w.size();i++)
        {
           if(w[i]=='1' && w[i-1]=='1' && s1[i-1]=='1')
           {
               s1[i]='0';
           }
           else if(w[i]=='1' && w[i-1]=='1' && s1[i-1]=='0' )
           {
               s1[i]='1';
           }
           else if(w[i]=='1' && w[i-1]=='0' && s1[i-1]=='1')
           {
               s1[i]='1';
           }
           else if(w[i]=='1' && w[i-1]=='0' && s1[i-1]=='0')
           {
               s1[i]='1';
           }

            if(w[i]=='0' && w[i-1]=='1' && s1[i-1]=='1')
           {
               s1[i]='1';
           }
           else if(w[i]=='0' && w[i-1]=='1' && s1[i-1]=='0' )
           {
               s1[i]='0';
           }
           else if(w[i]=='0' && w[i-1]=='0' && s1[i-1]=='1')
           {
               s1[i]='0';
           }
           else if(w[i]=='0' && w[i-1]=='0' && s1[i-1]=='0')
           {
               s1[i]='1';
           }


        }
        cout<<s1<<endl;
    }


    return 0;
}

