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


const int mx = 2e5 + 123;
bool vis[mx];
vector<int> adj[mx];
vector<int> ans;




void dfs ( int u )
{
	vis[u] =  1;



	for ( auto v : adj[u] )
	{

		if ( vis[v] == 0 )
		{
			ans.push_back(v);

			dfs ( v );
			ans.push_back(u);
		}
	}



	return;
}



void solve()
{

	int n, m, i;
	cin >> n ;
	for ( int i = 1; i <= n - 1; i++ )
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back ( v );
		adj[v].push_back ( u );
	}
	for ( i = 1; i <= n ; i++)
	{
		sort(adj[i].begin(), adj[i].end());

	}

	ans.push_back(1);

	dfs ( 1 );

	for ( auto u : ans)
	{

		cout << u << " ";

	}

	/*

	4
	1 2
	2 3
	2 4

	1 2 3 2 4 2 1
	*/








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