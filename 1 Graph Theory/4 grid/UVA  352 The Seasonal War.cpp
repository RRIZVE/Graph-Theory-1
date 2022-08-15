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
const int inf = 2000000000;
char c[mx][mx];
int n, m;
vector < pair<int, int>>s;
bool vis[mx][mx];



int dx[] = {0, 0, +1, -1, +1, +1, -1, -1};
int dy[] = { +1, -1, 0, 0, +1, -1, +1, -1};


void dfs ( int u, int v )
{
	vis[u][v] =  1;

	for ( int i = 0; i < 8 ; i++)
	{
		int x = u;
		int y = v;

		int x1 = x + dx[i];
		int y1 = y + dy[i];

		if (x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m && c[x1][y1] == '1' && vis[x1][y1] == 0)
		{
			vis[x1][y1] =  1;
			dfs(x1, y1);

		}


	}




	return;
}




void solve()
{
	int tc = 0;
	while (cin >> n)
	{
		tc++;
		vis[mx][mx] = {0};
		s.clear();
		int i, j, k , x, y, z, cnt = 0;

		m = n;
		
		for ( i = 1; i <= n ; i++)
		{
			for ( j = 1; j <= m ; j++)
			{
				vis[i][j] = 0;
				cin >> c[i][j];
			}


		}
		
		cnt = 0;
		for ( i = 1; i <= n ; i++)
		{
			for ( j = 1; j <= m ; j++)
			{
				if (c[i][j] == '1' && vis[i][j] == 0)
				{
					//cout << "YES" << endl;
					cnt++;
					dfs(i, j);
				}
			}


		}
		
		cout << "Image number " << tc << " contains " << cnt << " war eagles." << endl;























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