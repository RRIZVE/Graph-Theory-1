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

const ll infLL = 9000000000000000000;
const int mx = 1e6 + 123;

vp adj[mx];//vector<pair<ll, ll>>adj[mx]
ll dist[mx];
int par[mx];

//E + V log2 (V) // E == Edge == m   //V == Node == n
void dijkstra ( int s, int n )
{
	for ( int i = 0; i <= n; i++ )
	{
		dist[i] = infLL;          /// initilization
	}
	dist[s] = 0;            /// initilizing source distance

	priority_queue < pll, vp, greater<pll> > pq;
	//priority_queue < pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>> > pq;

	pq.push ( { 0, s } );                   // pushing source in queue

	while ( !pq.empty() )
	{
		int u = pq.top().ss;                // current node
		ll curD = pq.top().ff;              // source take distance koto
		pq.pop();

		if ( dist[u] < curD ) continue;     // important

		for ( auto p : adj[u] )
		{
			int v = p.ff;                   //node
			ll w = p.ss;                    //wedge
			if ( curD + w < dist[v] )       // relax operation
			{

				dist[v] = curD + w;
				pq.push ( { dist[v], v } );
				par[v] = u;
			}
		}
	}

}


void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;
	cin >> n >> m;
	for ( int i = 0; i < m; i++ )
	{
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].pb ( { v, w } );
		adj[v].pb ( { u, w } );
	}

	dijkstra ( 1, n );



	if (dist[n] == infLL)
	{
		cout << -1 << endl;
		return;
	}
	vll v;

	int last = n;
	v.pb(last);

	while (par[last] != 0)
	{
		v.pb(par[last]);
		last = par[last];

	}
	reverse(v.begin(), v.end());
	for ( i = 0; i < v.size() ; i++)
	{
		cout << v[i] << " ";

	}
	cout << endl;

	/*
	5 6
	1 2 2
	2 5 5
	2 3 4
	1 4 1
	4 3 3
	3 5 1


	1 4 3 5

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