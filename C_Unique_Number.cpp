#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout << "debug" << endl;

int main()
{
    ///"In the name of Allah,most gracious and most merciful"///

    ll t;
    cin >> t;

    while (t--)
    {
        ll i, j, x, y, z, count = 0, sum = 0, n;
        cin >> n;
        if (n <= 9)
            cout << n << endl;
        else if(n>45)
        cout<<-1<<endl;
        else
        {
            string s="9";
            sum+=9;
            n=n-9;
            if(n>=8){
            n-=8;
            string s1=to_string(8);
            s+=s1;
            }
            if(n>=7)
            {
              n-=7;
            string s1=to_string(7);
            s+=s1;
            }
            if(n>=6)
            {
                n-=6;
                 string s1=to_string(6);
                 s+=s1;
            }
            if(n>=5)
            {
                n-=5;
                string s1=to_string(5);
                s+=s1;
            }
            if(n>=4)
            {
                n-=4;
                string s1=to_string(4);
                 s+=s1;
            }
            if(n>=3)
            {
                n-=3;
                string s1=to_string(3);
                 s+=s1;
            }
            if(n>=2)
            {
                n-=2;
                string s1=to_string(2);
                 s+=s1;
            }
            if(n>=1)
            {
                n--;
                string s1=to_string(1);
                s+=s1;
            }

            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }
    }

    return 0;
}
