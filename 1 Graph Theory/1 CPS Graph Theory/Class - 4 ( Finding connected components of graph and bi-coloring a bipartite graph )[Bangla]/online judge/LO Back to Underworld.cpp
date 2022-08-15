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
bool isNode[mx];
bool vis[mx];
int cnt;
int cnt1;

void dfs(int u, int col)
{
	vis[u] = 1;
	if (col == 1)
		cnt1++;

	cnt++;


	int temp;
	if (col == 1)
	{
		temp = 2;
	}
	else
	{
		temp = 1;
	}

	for ( auto v : adj[u])
	{
		if (vis[v] == 0)
		{
			dfs(v, temp);
		}



	}
	//return;

}



void solve()
{
	int t, tc = 0;
	cin >> t;
	while (t--)
	{
		tc++;

		int i, j, k , n, m, x, y, z, c = 0, u, v;
		string s;

		for (i = 0; i < mx; i++)
		{
			adj[i].clear();
			isNode[i] = 0;
			vis[i] = 0;


		}

		cin >> m;
		for ( i = 1; i <= m ; i++)
		{
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);

			isNode[u] = 1;
			isNode[v] = 1;


		}
		int ans = 0;
		for ( i = 1; i <= 2e4 + 123 ; i++)
		{
			if (isNode[i] == 1 && vis[i] == 0)
			{
				cnt = 0;
				cnt1 = 0;


				dfs(i, 1);
				ans = ans + max(cnt1, cnt - cnt1);

			}


		}
		cout << "Case " << tc << ": " << ans << endl;




















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