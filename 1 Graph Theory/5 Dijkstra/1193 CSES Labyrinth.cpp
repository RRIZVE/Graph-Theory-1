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
 
const int mx = 1010;
char c[mx][mx];
char par[mx][mx];
char ans[1000000];
int n, m;
int dist[mx][mx];
#define ff first
#define ss second
 
int dx[] = { +1, -1, 0, 0};
int dy[] = {0, 0, +1, -1};
 
void bfs(int x, int y)
{
	memset(dist, -1, sizeof(dist));
 
	queue<pair<int, int>>q;
 
	q.push({x, y});
 
	dist[x][y] = 0;
 
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
 
		for ( int i = 0; i < 4 ; i++)
		{
			int x1 = x + dx[i];
			int y1 = y + dy[i];
 
			if (x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m && c[x1][y1] != '#' && dist[x1][y1] == -1)
			{
				q.push({x1, y1});
 
				if (i == 0)      par[x1][y1] = 'D';
				else if (i == 1) par[x1][y1] = 'U';
				else if (i == 2) par[x1][y1] = 'R';
				else if (i == 3) par[x1][y1] = 'L';
 
				dist[x1][y1] = dist[x][y] + 1;
 
			}
 
 
		}
 
 
 
 
 
	}
 
 
}
 
 
 
void solve()
{
 
	int i, j, k , x, y, z, cnt = 0, ex, ey;
	cin >> n >> m;
 
	for ( i = 1; i <= n ; i++)
	{
		for ( j = 1; j <= m ; j++)
		{
			cin >> c[i][j];
			if (c[i][j] == 'A')
			{
				x = i;
				y = j;
			}
			if (c[i][j] == 'B')
			{
				ex = i;
				ey = j;
			}
		}
 
 
	}
 
 
	bfs(x, y);
	cnt = dist[ex][ey];
	if (cnt == -1)
	{
		cout << "NO" << endl;
		return ;
	}
 
	cout << "YES" << endl;
	cout << cnt << endl;
	pair<int, int> P = {ex, ey};
	for (int i = dist[ex][ey]; i > 0; i--)
	{
		ans[i] = par[P.ff][P.ss];
		if (ans[i] == 'D')       P = {P.ff - 1, P.ss};
		else if (ans[i] == 'U')  P = {P.ff + 1, P.ss};
		else if (ans[i] == 'R')  P = {P.ff, P.ss - 1};
		else if (ans[i] == 'L')  P = {P.ff, P.ss + 1};
	}
	for (int i = 1; i <= dist[ex][ey]; i++)
	{
		cout << ans[i];
	}
	cout << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
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
