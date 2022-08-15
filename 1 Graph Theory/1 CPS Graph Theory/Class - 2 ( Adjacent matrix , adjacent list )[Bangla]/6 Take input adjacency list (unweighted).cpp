//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

const int mx=1e6;
vector<int>adj[mx];
bool ok[mx];

int main()
{
    optimize();
    int i,j,k,n,m,t,x,y,z,u,v;
    cin>>n>>m;//m==edges
    for(i=1; i<=m; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

        ok[u]=1;
        ok[v]=1;

    }
    for(i=1; i<=mx; i++)
    {
        if(ok[i]==1)
        {
            cout<<"Adjacent list of  "<<i<<"  :  ";
            for(auto u:adj[i])
            {
                cout<<u<<"  ";

            }
            cout<<endl;
        }


    }


    /*5 4
    4 5
    5 6
    6 7
    6 4
    Adjacent list of  4  :  5  6
    Adjacent list of  5  :  4  6
    Adjacent list of  6  :  5  7  4
    Adjacent list of  7  :  6*/








    return 0;
}
