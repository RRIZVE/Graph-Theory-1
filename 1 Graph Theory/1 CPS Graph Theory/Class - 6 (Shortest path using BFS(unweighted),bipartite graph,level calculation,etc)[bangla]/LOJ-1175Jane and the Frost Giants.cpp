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

const int mx = 250;
const int inf = 2000000000;
char c[mx][mx];
int n, m;
vector < pair<int, int>>s;

int levFire[mx][mx];
int levJan[mx][mx];

int dx[] = {0, 0, +1, -1, +1, +1, -1, -1};
int dy[] = { +1, -1, 0, 0, +1, -1, +1, -1};


void bfsFire()
{
	memset(levFire, -1, sizeof(levFire));

	queue<pair<int, int>>q;

	for ( auto u : s)
	{
		q.push(u);
		levFire[u.first][u.second] = 0;



	}
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for ( int i = 0; i < 4 ; i++)
		{
			int x1 = x + dx[i];
			int y1 = y + dy[i];

			if (x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m && c[x1][y1] != '#' && levFire[x1][y1] == -1)
			{
				q.push({x1, y1});

				levFire[x1][y1] = levFire[x][y] + 1;

			}


		}





	}


}

void bfsjanbhai(int xs, int ys)
{
	memset(levJan, -1, sizeof(levJan));

	queue<pair<int, int>>q;

	q.push({xs, ys});


	levJan[xs][ys] = 0;


	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int  i = 0; i < 4 ; i++)
		{
			int x1 = x + dx[i];
			int y1 = y + dy[i];

			if (x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m && c[x1][y1] != '#' && levJan[x1][y1] == -1 && levJan[x][y] + 1 < levFire[x1][y1])
			{
				q.push({x1, y1});

				levJan[x1][y1] = levJan[x][y] + 1;

			}


		}





	}


}



void solve()
{
	int t, xx;
	cin >> t;
	for ( xx = 1; xx <= t ; xx++)
	{
		s.clear();
		int i, j, k , x, y, z, cnt = 0;
		cin >> n >> m;
		for ( i = 1; i <= n ; i++)
		{
			for ( j = 1; j <= m ; j++)
			{
				cin >> c[i][j];

				if (c[i][j] == 'J')
				{
					x = i;
					y = j;
				}
				if (c[i][j] == 'F')
				{
					s.push_back({ i, j });
				}



			}


		}
		bfsFire();
		bfsjanbhai(x, y);

		int ans = inf;

		for ( int i = 1; i <= n; i++ )
		{
			if ( levJan[i][1] != -1 ) ans = min ( ans, levJan[i][1] );
		}

		for ( int i = 1; i <= n; i++ )
		{
			if ( levJan[i][m] != -1 ) ans = min ( ans, levJan[i][m] );
		}

		for ( int i = 1; i <= m; i++ )
		{
			if ( levJan[1][i] != -1 ) ans = min ( ans, levJan[1][i] );
		}

		for ( int i = 1; i <= m; i++ )
		{
			if ( levJan[n][i] != -1 ) ans = min ( ans, levJan[n][i] );
		}

		if ( ans == inf )
			cout << "Case " << xx << ": IMPOSSIBLE" << endl;
		else
			cout << "Case " << xx << ": " << ans + 1 << endl;



















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