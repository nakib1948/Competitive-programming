#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
    double d1, d2;
    cin >> d1 >> d2;
    if (d1 > 0 && d2 > 0)
        cout << "Q1" << endl;
    else if (d1 > 0 && d2 < 0)
    {
        cout << "Q4" << endl;
    }
    else if (d1 < 0 && d2 > 0)
    {
        cout << "Q2" << endl;
    }
    else if (d1 < 0 && d2 < 0)
    {
        cout << "Q3" << endl;
    }
    else if(d1==0&&d2!=0)
    {
        cout<<"Eixo Y"<<endl;
    }
    else if(d2==0&&d1!=0)
    {
        cout<<"Eixo X"<<endl;
    }
    else if(d1==0&&d2==0)
    {
        cout<<"Origem"<<endl;
    }
    
    return 0;
}
