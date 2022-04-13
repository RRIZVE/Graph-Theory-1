//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;


const int mx = 1e6 + 123;
bool vis[mx];
vector<int> adj[mx];



//O(2n+2m)
//O(n+m)

void dfs ( int u )
{
	vis[u] =  1;

	for ( auto v : adj[u] )
	{
		if ( vis[v] == 0 )
		{

			dfs ( v );
		}
	}

	return;
}



void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;
	for ( int i = 0; i < mx; i++ )
		adj[i].clear();
	memset(vis, 0, sizeof(vis));

	cin >> n >> m;
	for ( int i = 1; i <= m; i++ )
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back ( v );
		adj[v].push_back ( u );
	}

	for ( i = 1; i <= n ; i++)
	{
		if (vis[i] == 0)
		{
			cnt++;
			dfs ( i );

		}


	}
	cout << cnt << endl;










}



int main()
{

	Alhamdulillah;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;

}