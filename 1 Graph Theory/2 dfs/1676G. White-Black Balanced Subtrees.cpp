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

const int mx = 4010;
int col[mx];
int vis[mx];
int w[mx];
int b[mx];
int n;
vi adj[mx];
int c1, c2;
void dfs(int src, int par)
{
	vis[src] = 1;
	if (col[src] == 1)
		w[src] = w[src] + 1;
	else
		b[src] = b[src] + 1;
	for ( auto v : adj[src])
	{
		if (vis[v] == 0 && v != par)
		{
			dfs(v, src);
			w[src] = w[src] + w[v];
			b[src] = b[src] + b[v];

		}




	}



}




void solve()
{
	int t;
	cin >> t;
	while (t--)
	{

		int i, j, k , m, x, y, z, c = 0, cnt = 0;
		string s;
		for ( int i = 0; i < mx; i++ )
			adj[i].clear();
		cin >> n;
		for ( i = 2; i <= n ; i++)
		{
			cin >> x;
			adj[i].pb(x);
			adj[x].pb(i);


		}
		cin >> s;
		int len = s.size();
		for ( i = 0; i < len ; i++)
		{
			if (s[i] == 'W')
				col[i + 1] = 1;
			else
				col[i + 1] = 2;



		}
		memset(vis, 0, sizeof(vis));
		memset(w, 0, sizeof(w));
		memset(b, 0, sizeof(b));

		dfs(1, -1);
		for ( i = 1; i <= n ; i++)
		{
			if (w[i] == b[i])
				cnt++;



		}
		cout << cnt << endl;


















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