//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

const int mx=1e6;
vector<pair<int,int>>adj[mx];

int main()
{
    optimize();
    int i,j,k,n,m,t,x,y,z,u,v,w;
    cin>>n>>m;//m==edges
    for(i=1; i<=m; i++)
    {
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});

    }
    for(i=1; i<=n; i++)
    {
        cout<<"Adjacent list of  "<<i<<"  :  "<<endl;
        for(auto u:adj[i])
        {
            cout<<"        ";
            cout<<" Node : "<<u.first<<" "<<"Weight : "<<u.second<<endl;;

        }
        cout<<endl<<endl;

    }











    return 0;
}
