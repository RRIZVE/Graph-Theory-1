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

const int mx = 1e6;
vector<int>adj[mx];
int lev[mx];
int u, v;


//O(m+n)>>O(V+E)>>O(node+edge)


void bfs(int s)
{
	memset(lev, -1, sizeof(lev));

	lev[s] = 0;

	queue<int>q;

	q.push(s);

	while (!q.empty())
	{
		int u = q.front();     // first element
		q.pop();               //  first element delete

		for ( auto v : adj[u])
		{
			if (lev[v] == -1)
			{
				lev[v] = lev[u] + 1;
				q.push(v);
			}



		}


	}


}



void solve()
{
	int t, c = 0;
	cin >> t;


	bool isBlank = false;
	for (int ii = 1; ii <= t ; ii++)
	{
		c++;

		for ( int i = 0; i < mx; i++ )
			adj[i].clear();

		int i, j, k , n, m, x, y, z, cnt = 0;
		string s;
		cin >> n >> m;
		for ( i = 1; i <= m ; i++)
		{
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);

		}
		bfs(0);
		//if (isBlank)printf("\n");

		for ( i = 1; i <= n ; i++)
		{
			x = lev[i];
			if (x != -1)
			{
				cout << x << endl;
			}

		}
		if (ii != t)
		{
			cout << endl ;
		}
	}










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