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

const int mx = 300;
vector<int>adj[mx];
bool vis[mx];
bool exist[mx];
int col[mx];


int isBicolor(int s)
{
	memset(col, -1, sizeof(col));

	queue<int>q;

	q.push(s);

	col[s] = 1;

	while (!q.empty())
	{
		int u = q.front();
		q.pop();

		int curCol;

		if (col[u] == 1)
			curCol = 2;
		else
			curCol = 1;

		for ( auto v : adj[u])
		{
			if (col[v] == -1)
			{
				col[v] = curCol;
				q.push(v);

			}
			else
			{
				if (col[v] == col[u])
				{
					return 0;
				}

			}



		}





	}
	return 1;








}



void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0, u, v;
	string s;
	while (cin >> n)
	{
		if (n == 0)
			break;
		cin >> m;

		for ( int i = 0; i < mx; i++ ) adj[i].clear();


		for ( i = 1; i <= m ; i++)
		{
			cin >> u >> v;

			adj[u].push_back(v);
			adj[v].push_back(u);

			exist[u] = 1;
			exist[v] = 1;


		}

		int ans = 1;

		for ( i = 0; i < n ; i++)
		{
			if (exist[i] == 1 && vis[i] == 0)
			{
				if ( isBicolor( i ) == 0 )
				{
					ans = 0;
					break;

				}


			}

		}
		if ( ans == 1 )
			cout << "BICOLORABLE." << endl;
		else
			cout << "NOT BICOLORABLE." << endl;;

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