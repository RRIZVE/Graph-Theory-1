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

char a[110][110];
bool vis[110][110];
int n, m;
int cnt;

int dx[] = { +1, -1, 0, 0};
int dy[] = {0, 0, +1, -1};

int mnx;
int mny;
int mxx;
int mxy;

void dfs(int x, int y)
{
	mnx = min(mnx, x);
	mny = min(mny, y);
	mxx = max(mxx, x);
	mxy = max(mxy, y);

	vis[x][y] = 1;

	cnt++;

	for (int i = 0; i < 4 ; i++)
	{
		int x1 = x + dx[i];
		int y1 = y + dy[i];

		if ((x1 >= 1 && x1 <= n) && (y1 >= 1 && y1 <= m) && a[x1][y1] == '1' && vis[x1][y1] == 0)
		{
			dfs(x1, y1);
		}

	}


	return;


}




void solve()
{
	int t;
	cin >> t;
	while (t--)
	{

		int i, j, k , x, y, z, c = 0;

		memset(vis, 0, sizeof(vis));

		cin >> n >> m;

		for ( i = 1; i <= n ; i++)
		{
			for ( j = 1; j <= m ; j++)
			{
				cin >> a[i][j];
				vis[i][j] = 0;

			}
		}
		for ( i = 1; i <= n ; i++)
		{
			for ( j = 1; j <= m ; j++)
			{
				if (a[i][j] == '1' && vis[i][j] == 0 )
				{
					mnx = i;
					mny = j;
					mxx = i;
					mxy = j;

					cnt = 0;

					dfs(i, j);

					x = mxx - mnx + 1;
					y = mxy - mny + 1;

					ll totel = x * y;

					//cout << mnx << " " << mxy << " " << mxx << " " << mxy << endl;

					if (cnt != totel)
					{
						c = 1;
						break;
					}
				}

			}
			if (c == 1)
				break;
		}
		if (c == 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}






















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