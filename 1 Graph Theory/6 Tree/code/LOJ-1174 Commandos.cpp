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
int lev[mx];
int u, v;
int mxlen = 0;

//O(m+n)>>O(V+E)>>O(node+edge)


void bfs(int s)
{
	memset(lev, -1, sizeof(lev));

	lev[s] = 0;

	queue<int>q;

	q.push(s);

	while (!q.empty())
	{
		int u = q.front();     // first element
		q.pop();               //  first element delete

		for ( auto v : adj[u])
		{
			if (lev[v] == -1)
			{
				lev[v] = lev[u] + 1;
				q.push(v);
			}



		}


	}


}


void solve()
{
	int t, tt;
	cin >> t;
	while (t--)
	{
		tt++;
		cout << "Case " << tt << ": ";
		for ( int i = 0; i < mx; i++ )
			adj[i].clear();

		int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
		int s, d;
		cin >> n >> m;
		for ( i = 1; i <= m ; i++)
		{
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);

		}
		cin >> s >> d;
		mxlen = 0;

		int mx = 0;
		c = 0;

		for ( i = 0; i < n ; i++)
		{
			bfs(s);
			x = lev[i];
			bfs(i);
			y = lev[d];
			mx = max(mx, x + y);



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