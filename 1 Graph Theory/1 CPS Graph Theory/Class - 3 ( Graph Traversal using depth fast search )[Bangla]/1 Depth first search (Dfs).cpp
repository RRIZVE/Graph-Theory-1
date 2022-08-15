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

//O(2n+2m)
//O(n+m)

const int mx = 1e6 + 123;
bool vis[mx];
vector<int> adj[mx];
void dfs ( int u )
{
	vis[u] =  1;

	for ( auto v : adj[u] )
	{
		if ( vis[v] == 0 )
		{

			dfs ( v );
		}
	}

	return;
}

void solve()
{

	/*
	for ( int i = 0; i < mx; i++ )
	adj[i].clear();

	memset(vis, 0, sizeof(vis));

	*/

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;

	cin >> n >> m;
	for ( int i = 1; i <= m; i++ )
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back ( v );
		adj[v].push_back ( u );
	}

	dfs ( 1 );






















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