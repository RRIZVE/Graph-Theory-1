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


const int mx = 30;
bool vis[mx][mx];
char c[mx][mx];
int n, m;
int cnt;

int dx[] = { +1, -1, 0, 0};
int dy[] = {0, 0, +1, -1};




//O(2n+2m)
//O(n+m)

void dfs ( int x, int y )
{
	vis[x][y] = 1;
	cnt++;

	for (int  i = 0; i < 4 ; i++)
	{
		int x1 = x + dx[i];
		int y1 = y + dy[i];


		if (x1 >= 1 && x1 <= m && y1 >= 1 && y1 <= n && vis[x1][y1] == 0 && c[x1][y1] == '.')
		{
			dfs(x1, y1);

		}


	}

	return;
}



void solve()
{
	int t, tc = 0;
	cin >> t;
	while (t--)
	{
		tc++;

		//memset(c, -1, sizeof(c));
		memset(vis, 0, sizeof(vis));


		int i, j, k, x, y, z;
		string s;

		cnt = 0;

		cin >> n >> m;
		for ( i = 1; i <= m; i++ )
		{
			for ( j = 1; j <= n ; j++)
			{
				cin >> c[i][j];
				if (c[i][j] == '@')
				{
					x = i;
					y = j;
				}


			}

		}

		dfs ( x, y );


		cout << "Case " << tc << ": " << cnt << endl;
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