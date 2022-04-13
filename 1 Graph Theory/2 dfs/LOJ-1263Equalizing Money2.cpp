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

const int mx = 10000 + 123;
int a[1010];
ll sum;
ll avg;
ll cnt;
int u, v;
int n, m;

bool vis[mx];
vector<int> adj[mx];

ll dfs ( int u )
{
	vis[u] =  1;
	sum = sum + a[u];
	cnt++;

	for ( auto v : adj[u] )
	{
		if ( vis[v] == 0 )
		{

			dfs ( v );
		}
	}

	return sum;
}




void solve()
{
	int t, tc = 0;
	cin >> t;
	while (t--)
	{
		tc++;
		cout << "Case " << tc << ": ";

		for ( int i = 0; i < mx; i++ )
			adj[i].clear();
		memset(vis, 0, sizeof(vis));

		int i, j, k , x, y, z, c = 0;

		map<ll, ll> mp;
		sum = 0;

		cin >> n >> m;

		for ( i = 1; i <= n ; i++)
		{
			cin >> a[i];
			sum = sum + a[i];

		}



		for ( i = 1; i <= m ; i++)
		{
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
			mp[u] = 1;
			mp[v] = 1;

		}
		if (sum % n != 0)
		{
			cout << "No" << endl;
			continue;
		}
		avg = sum / n;
		sum = 0;
		c = 0;
		for ( i = 1; i <= n ; i++)
		{
			if (vis[i] == 0 && mp[i] == 1)
			{
				sum = 0;
				cnt = 0;
				dfs ( i );

				cout << cnt << "  " << sum << endl;
				x = sum / cnt;
				if (sum % cnt == 0 && x == avg)
				{
					continue;
				}
				else
				{
					c = 1;
					break;
				}

			}

		}
		if (c == 1)
		{
			cout << "No" << endl;
		}
		else
		{
			cout << "Yes" << endl;
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