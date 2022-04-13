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

map<string, vector<string>>adj;
map<string, int>lev;
map<string, string>par;



void bfs(string s)
{
	lev.clear();

	queue<string>q;

	q.push(s);
	lev[s] = 1;

	while (!q.empty())
	{
		string u = q.front();
		q.pop();

		for ( auto v : adj[u])
		{
			if (lev[v] == 0)
			{
				lev[v] = lev[u] + 1;
				par[v] = u;

				q.push(v);

			}



		}

	}






}



void solve()
{
	int n;
	bool ok = 0;
	while (cin >> n)
	{
		//if (n == 0)
		//break;

		if ( ok ) cout << endl;
		ok = 1;

		adj.clear();
		par.clear();
		lev.clear();

		int i, j, k , m, x, y, z, c = 0, cnt = 0;
		string s, t;
		for ( i = 1; i <= n ; i++)
		{
			string u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);



		}
		cin >> s >> t;

		bfs(s);

		if (lev[t] == 0)
		{
			cout << "No route\n";
			continue;
		}

		vector<pair<string, string>>ans;

		while (!par[t].empty())
		{
			ans.push_back({par[t], t});
			t = par[t];

		}
		reverse(ans.begin(), ans.end());

		for ( i = 0; i < ans.size() ; i++)
		{
			cout << ans[i].first << " " << ans[i].second << endl;


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