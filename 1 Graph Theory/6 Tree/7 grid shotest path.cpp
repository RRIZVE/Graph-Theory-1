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

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

const int mx = 100;
int dis[mx][mx] ;
char s[mx][mx];
int n, m;

int dx[] = { +1, -1, 0, 0};
int dy[] = {0, 0, +1, -1};


void bfs(int x, int y)
{
	for (int i = 1; i <= n ; i++) {
		for (int j = 1; j <= n ; j++) {
			dis[i][j] = 1e9;

		}
	}


	queue<pair<int, int>>q;

	q.push({x, y});
	dis[x][y] = 0;

	while (!q.empty())
	{


		int x = q.front().ff;
		int y = q.front().ss;

		q.pop();

		for (int i = 0; i < 4 ; i++)
		{
			int x1 = x + dx[i];
			int y1 = y + dy[i];

			if ((x1 >= 1 && x1 <= n) && (y1 >= 1 && y1 <= m) && (s[x1][y1] != '#'))
			{
				if (dis[x][y] + 1 < dis[x1][y1])
				{
					dis[x1][y1] = dis[x][y] + 1;
					q.push({x1, y1});
				}


			}

		}

	}


}



void solve()
{
	/*for ( int i = 0; i < mx; i++ )
			adj[i].clear();*/

	int i, j, k , x, y, z, c = 0, cnt = 0;
	cin >> n >> m;
	for ( i = 1; i <= n ; i++)
	{
		for ( j = 1; j <= m ; j++)
		{
			cin >> s[i][j];

		}

	}
	bfs(1, 1);

	cout << dis[n][m] << endl;

	/*

	5 3
	...
	##.
	...
	.##
	...

	>>
	10

	*/








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