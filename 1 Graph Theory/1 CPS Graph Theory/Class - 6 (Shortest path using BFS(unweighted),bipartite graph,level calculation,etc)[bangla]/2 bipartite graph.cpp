//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define PB push_back

const int mx = 300;
vector<int> adj[mx];
int col[mx];

bool isBicolor ( int s )
{
    memset(col,-1,sizeof(col));

    col[s] = 1;
    queue<int> q;
    q.push( s );

    while ( !q.empty() )
    {
        int u = q.front();
        q.pop();

        int curCol;
        if ( col[u] == 1 ) curCol = 2;
        else curCol = 1;

        for ( auto v : adj[u] )
        {
            if ( col[v] == -1 )
            {
                col[v] = curCol;
                q.push( v );
            }
            else if ( col[v] == col[u] ) return 0;
        }
    }

    return 1;
}

int main()
{
    optimize();


    int n;

    cin >> n;

    int m,min=INT_MAX;
    cin >> m;
    for ( int i = 1; i <= m; i++ )
    {
        int u, v;
        cin >> u >> v;
        adj[u].PB ( v );
        adj[v].PB ( u );

        if(u<min)
        {
            min=u;
        }
        if(v<min)
        {
            min=v;
        }
    }


    if ( isBicolor( min ) == 1 ) cout << "BICOLORABLE."<<endl;
    else cout << "NOT BICOLORABLE."<<endl;;



    return 0;
}
