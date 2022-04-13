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
int lev[mx];
int vis[mx];
int u, v;


//O(m+n)>>O(V+E)>>O(node+edge)


int bfs(int start, int finish)
{
	memset(lev, -1, sizeof(lev));


	lev[start] = 0;
	vis[start] = 1;

	queue<int>q;

	q.push(start);


	while (!q.empty())
	{
		u = q.front();
		q.pop();

		int x = u * 2;
		int y = u - 1;

		if (vis[x] == 0 && x <= 2 * finish)
		{

			q.push(x);
			lev[x] = lev[u] + 1;
			vis[x] = 1;


		}
		if (vis[y] == 0 && y >= 0)
		{
			q.push(y);
			lev[y] = lev[u] + 1;
			vis[y] = 1;


		}



	}
	return lev[finish];




}



void solve()
{
	/*for ( int i = 0; i < mx; i++ )
			adj[i].clear();*/

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0, a, b;
	string s;
	cin >> a >> b;

	cout << bfs(a, b);










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