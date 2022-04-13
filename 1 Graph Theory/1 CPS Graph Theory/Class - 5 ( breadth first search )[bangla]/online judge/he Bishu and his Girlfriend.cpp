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
int a[mx];
vector<int>adj[mx];
int lev[mx];
int u, v;


//O(V+E)>>O(node+edge)


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
	/*for ( int i = 0; i < mx; i++ )
			adj[i].clear();*/

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0, q, min = 1e9;
	string s;
	cin >> n;
	m = n - 1;
	for ( i = 1; i <= m ; i++)
	{
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);

	}
	bfs(1);

	cin >> q;
	for (i = 0; i < q; i++)
	{
		cin >> a[i];


	}
	sort(a, a + q);
	for (i = 0; i < q; i++)
	{
		y = lev[a[i]];
		if (y < min)
		{
			min = y;
			z = a[i];
		}


	}
	cout << z << endl;








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