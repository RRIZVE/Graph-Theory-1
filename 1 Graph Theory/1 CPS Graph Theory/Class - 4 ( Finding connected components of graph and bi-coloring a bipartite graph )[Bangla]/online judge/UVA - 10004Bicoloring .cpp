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

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pll pair<ll,ll>
#define vp vector<pair<ll,ll>>
#define pb push_back
#define ff first
#define ss second
#define pi acos(-1.0)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define EPS 1e-9


const int mx = 300;
bool vis[mx] = {0};
bool exist[mx] = {0};
vector<int>adj[mx];
int n;
map<int, int>mp;

int dfs ( int u , int col)
{
	vis[u] = 1;
	mp[u] = col;
	int curcol;
	if (col == 1)
		curcol = 2;
	else
		curcol = 1;

	for ( auto v : adj[u])
	{
		if (vis[v] == 0)
		{
			dfs(v, curcol);
		}
		else
		{
			int x = mp[v];
			int y = curcol;

			if (x != y)
			{
				return 0;
			}
		}


	}

	return 1;


}



void solve()
{
	int m;
	while (cin >>  m)
	{
		if (m == 0)
			break;

		cin >> n;

		int i, j, k , x, y, z, c = 0, sum = 0, mn = 0;

		memset(vis, 0, sizeof(vis));
		memset(exist, 0, sizeof(exist));
		mp.clear();
		for ( i = 0; i <= mx ; i++)
		{
			adj[i].clear();

		}



		for ( int i = 1; i <= n; i++ )
		{
			int u, v;
			cin >> u >> v;
			adj[u].pb(v);
			adj[v].pb(u);
			exist[u] = 1;
			exist[v] = 1;


		}
		c = 0;
		for ( i = 0; i <= m ; i++)
		{
			if (exist[i] == 1 && vis[i] == 0)
			{
				x = dfs(i, 1);
				if (x == 0)
				{
					c = 1;
					break;
				}
			}


		}



		if (c == 0)
		{
			cout << "BICOLORABLE." << endl;
		}
		else
		{
			cout << "NOT BICOLORABLE." << endl;
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