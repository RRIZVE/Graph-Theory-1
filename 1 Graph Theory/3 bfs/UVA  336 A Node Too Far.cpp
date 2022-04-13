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
int cnt;
int k;

//O(m+n)>>O(V+E)>>O(node+edge)


void bfs(int s)
{
	memset(lev, -1, sizeof(lev));

	lev[s] = 0;

	queue<int>q;

	q.push(s);
	cnt++;

	while (!q.empty())
	{
		int u = q.front();     // first element
		q.pop();

		if (lev[u] == k )
		{
			break;
		}              //  first element delete

		for ( auto v : adj[u])
		{
			if (lev[v] == -1)
			{
				cnt++;
				lev[v] = lev[u] + 1;
				q.push(v);
			}



		}




	}


}



void solve()
{

	int tc = 0;

	while (1)
	{
		for ( int i = 0; i < mx; i++ )
			adj[i].clear();

		int i, j , n, m, x, y, z, c = 0;
		set<ll>s;
		cin >> n;
		if (n == 0)
			break;
		for ( i = 1; i <= n ; i++)
		{
			cin >> u >> v;
			s.insert(u);
			s.insert(v);
			adj[u].push_back(v);
			adj[v].push_back(u);

		}

		while (1)
		{

			cin >> x >> k;
			if (x == 0 && k == 0)
				break;
			tc++;
			cnt = 0;
			bfs(x);

			//cout << lev[n] << endl;
			//Case 1: 5 nodes not reachable from node 35 with TTL = 2.
			//Case 1: 5 nodes not reachable from node 35 with TTL = 2.

			//cout << s.size() - cnt << endl;
			z = s.size() - cnt ;

			cout << "Case " << tc << ": " << z << " nodes not reachable from node " << x << " with TTL = " << k << "." << endl;


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