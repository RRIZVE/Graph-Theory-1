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

const int mx = 200;
vector<int>adj[mx];
bool vis[mx];
bool exist[mx];

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

	int i, j, k , n, m, x, y, z, a, b, c = 0, cnt = 0, ans = 0, zero = 0;
	string s;
	cin >> n >> m;
	for ( i = 1; i <= n ; i++)
	{
		cin >> x;

		if (x == 0)
		{
			ans++;
			zero++;
			continue;
		}
		cin >> a;

		exist[a] = 1;


		for ( j = 1; j < x ; j++)
		{
			cin >> b;
			exist[b] = 1;

			adj[a].push_back(b);
			adj[b].push_back(a);

			a = b;


		}


	}

	for ( i = 1; i <= m ; i++)
	{
		if (exist[i] == 1 && vis[i] == 0)
		{
			dfs(i);
			ans++;
		}

	}
	if (zero != n)
		cout << ans - 1;
	else
		cout << zero;








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