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

const int mx = 1e6;
vector<int>adj[mx];
int u, v;
int n, m;
char c[100][100];
int lev[100][100];


int dx[] = { +1, -1, 0, 0};
int dy[] = {0, 0, +1, -1};



void bfs(int u, int v)
{
	for (int i = 1; i <= 30 ; i++)
	{
		for (int j = 1; j <= 30 ; j++)
		{
			lev[i][j] = -1;

		}


	}

	queue<pair<int, int>>q;

	q.push({u, v});

	lev[u][v] = 0;


	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for ( int i = 0; i < 4 ; i++)
		{
			int x1 = x + dx[i];
			int y1 = y + dy[i];

			if (x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m && c[x1][y1] != '#' && c[x1][y1] != 'm' && lev[x1][y1] == -1)
			{
				q.push({x1, y1});



				lev[x1][y1] = lev[x][y] + 1;

			}


		}





	}


}


void solve()
{
	int t, tc = 0;
	cin >> t;
	while (t--)
	{
		tc++;
		cout << "Case " << tc << ": ";

		int i, j, k , x, y, z, cnt = 0, hx, hy;
		string s;
		cin >> n >> m;
		for ( i = 1; i <= n ; i++)
		{
			for ( j = 1; j <= m ; j++)
			{
				cin >> c[i][j];

				if (c[i][j] == 'h')
				{
					hx = i;
					hy = j;
				}

			}


		}
		int mx = 0;
		for ( i = 1; i <= n ; i++)
		{
			for ( j = 1; j <= m ; j++)
			{


				if (c[i][j] == 'a' || c[i][j] == 'b' || c[i][j] == 'c')
				{
					bfs(i, j);
					x = lev[hx][hy];
					if (mx < x)
					{
						mx = x;
					}
				}


			}


		}
		cout << mx << endl;




















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