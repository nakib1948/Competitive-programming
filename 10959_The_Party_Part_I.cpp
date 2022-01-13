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

typedef vector<int> vi;

int T, P, D, x, y;
queue<int> q;
int dist[1001];
vector<vi> AdjList;

void bfs()
{
    memset(dist, -1, sizeof dist);
    q.push(0);
    dist[0] = 0;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int j=0 ; j<AdjList[u].size() ; j++)
        {
            int v = AdjList[u][j];

            if (dist[v] == -1)
            {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

int main()
{
    cin>>T;
    while (T--)
    {
        cin>>P>>D;
        AdjList.assign(P, vi());

        while (D--)
        {
            cin>>x>>y;
            AdjList[x].push_back(y);
            AdjList[y].push_back(x);
        }

        bfs();
        for (int i=1 ; i<P ; i++)
            cout<<dist[i]<<endl;
        if (T) cout<<endl;
    }
}