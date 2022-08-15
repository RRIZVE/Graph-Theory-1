//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

const int mx=1e6;
map<string,vector<string>>adj;
map<string,int>lev;
map<string,string>par;

void bfs(string s)
{
    queue<string>q;
    q.push(s);
    lev[s]=1;

    while(!q.empty())
    {
        string u=q.front();  //first element;
        q.pop();  //first element delete

        for(auto v:adj[u])
        {
            if(lev[v]==0)
            {
                lev[v]=lev[u]+1;
                par[v]=u;
                q.push(v);
            }
        }
    }
}

int main()
{
    optimize();
    int i,j,k,n,x,y,z;
    string u,v;

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);


    }

    string s,t;
    cin>>s>>t;
    bfs(s);

    if(lev[t]==0)
    {
        cout<<"No route"<<endl;

    }

    vector<pair<string,string>>path;

    while(!par[t].empty())
    {
        path.push_back({par[t],t});
        t=par[t];
    }
    reverse(path.begin(),path.end());

    for(auto u:path)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }












    return 0;
}
