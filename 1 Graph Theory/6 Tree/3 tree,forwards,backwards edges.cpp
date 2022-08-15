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
bool finish[mx];
vector<int> adj[mx];

void dfs ( int u )
{
	vis[u] =  1;

	for ( auto v : adj[u] )
	{
		if ( vis[v] == 0 )
		{
			cout << "Tree edge      :   " << u << "  " << v << endl;
			dfs ( v );
		}
		else if (finish[v] == 0)
		{
			cout << "backward edge  :   " << u << "  " << v << endl;
		}
		else if (finish[v] == 1)
		{
			cout << "forward edge   :   " << u << "  " << v << endl;
		}
	}
	finish[u] = 1;

	return;
}



void solve()
{
	/*
	for ( int i = 0; i < mx; i++ )
	adj[i].clear();

	memset(vis, 0, sizeof(vis));

	*/

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;

	cin >>  m;
	for ( int i = 1; i <= m; i++ )
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back ( v );
	}

	dfs ( 1 );

	/*

	5
	1 2
	1 4
	2 3
	3 4
	4 2

	Tree edge      :   1  2
	Tree edge      :   2  3
	Tree edge      :   3  4
	backward edge  :   4  2
	forward edge   :   1  4
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