//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

const int mx=1e6;
vector<pair<int,int>>adj[mx];
bool ok[mx];

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

        ok[u]=1;
        ok[v]=1;

    }
    for(i=1; i<=mx; i++)
    {
        if(ok[i]==1)
        {
            cout<<"Adjacent list of  "<<i<<"  :  "<<endl;
            for(auto u:adj[i])
            {
                cout<<"        ";
                cout<<" Node : "<<u.first<<" "<<"Weight : "<<u.second<<endl;;

            }
            cout<<endl<<endl;
        }

    }
    /*5 4
    4 5 6
    7 8 9
    9 7 6
    4 9 10
    Adjacent list of  4  :
         Node : 5 Weight : 6
         Node : 9 Weight : 10


    Adjacent list of  5  :
         Node : 4 Weight : 6


    Adjacent list of  7  :
         Node : 8 Weight : 9
         Node : 9 Weight : 6


    Adjacent list of  8  :
         Node : 7 Weight : 9


    Adjacent list of  9  :
         Node : 7 Weight : 6
         Node : 4 Weight : 10
    */











    return 0;
}
