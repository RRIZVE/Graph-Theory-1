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

const int MX = 1e6;
int u, v;
vector<int>adj[MX];
int lev[MX];
ll mx = 1;
ll mxlen = 1;
int n;

int bfs(int s)
{
	memset(lev, -1, sizeof(lev));

	queue<int>q;

	q. push(s);

	lev[s] = 0;
	mx = 1;

	int x = s;

	while (!q.empty())
	{
		int u = q.front();
		q.pop();

		for ( auto v : adj[u])
		{
			if (lev[v] == -1)
			{
				q.push(v);
				lev[v] = lev[u] + 1;

			}



		}

	}

	mxlen = 0;

	for ( int i = 1; i <= n ; i++)
	{
		if (lev[i] > mxlen)
		{
			mxlen = lev[i];
			x = i;
		}



	}


	return x;


}



void solve()
{

	int i, j, k , m, x, y, z, c = 0, cnt = 0, mn = 1e9;
	string s;
	cin >> n;
	for ( i = 1; i <= n - 1 ; i++)
	{
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);



	}
	x = bfs(1);
	bfs(x);



	cout << mxlen << endl;









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