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

const ll infLL = 1000000000000000;
const int mx = 1e6 + 123;

vp adj[3][mx];//vector<pair<ll, ll>>adj[mx]
ll dist[3][mx];

struct info
{
	ll u, v, w;
};

//E + V log2 (V) // E == Edge == m   //V == Node == n
void dijkstra ( int s, int n, int f1 )
{
	for ( int i = 0; i <= n; i++ )
	{
		dist[f1][i] = infLL;          /// initilization
	}
	dist[f1][s] = 0;            /// initilizing source distance

	priority_queue < pll, vp, greater<pll> > pq;
	//priority_queue < pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>> > pq;

	pq.push ( { 0, s } );                   // pushing source in queue

	while ( !pq.empty() )
	{
		int u = pq.top().ss;                // current node
		ll curD = pq.top().ff;              // source take distance koto
		pq.pop();

		if ( dist[f1][u] < curD ) continue;     // important

		for ( auto p : adj[f1][u] )
		{
			int v = p.ff;                   //node
			ll w = p.ss;                    //wedge
			if ( curD + w < dist[f1][v] )       // relax operation
			{

				dist[f1][v] = curD + w;
				pq.push ( { dist[f1][v], v } );
			}
		}
	}

}


void solve()
{



	ll i, j, k , n, m, x, y, z, c = 0, cnt = 0, s, t, taka;

	vector<info>edge;
	cin >> n >> m ;
	for ( int i = 0; i <= n; i++ )
	{
		adj[0][i].clear();
		adj[1][i].clear();
	}
	for ( int i = 0; i < m; i++ )
	{
		int u, v, w;
		cin >> u >> v >> w;
		adj[0][u].pb ( { v, w } );
		adj[1][v].pb ( { u, w } );

		edge.pb({u, v, w});
	}

	dijkstra ( 1, n , 0);

	dijkstra ( n, n , 1);




	ll ans = 1e18;

	for ( auto e : edge)
	{
		ll u = e.u;
		ll v = e.v;
		ll w = e.w;
		ll cost = dist[0][u] + (w / 2) + dist[1][v];


		ans = min ( ans, cost );




	}
	cout << ans << endl;
























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