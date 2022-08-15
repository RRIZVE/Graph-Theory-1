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
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

const int mx = 1e6 + 123;
vii adj[mx];//vector<pair<ll, ll>>adj[mx]
ll dist[mx];

void dijkstra ( int s, int n )
{
	for ( int i = 0; i <= n; i++ ) dist[i] = infLL; /// initilization
	dist[s] = 0; /// initilizing source distance
	priority_queue < pll, vll, greater<pll> > pq;
	//priority_queue < pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>> > pq;
	pq.push ( { 0, s } ); /// pushing source in queue

	while ( !pq.empty() )
	{
		int u = pq.top().S; /// current node
		ll curD = pq.top().F; // source take distance koto
		pq.pop();

		if ( dist[u] < curD ) continue; // important

		for ( auto p : adj[u] )
		{
			int v = p.F;//node
			ll w = p.S;//wedge
			if ( curD + w < dist[v] )
			{	// relax operation
				dist[v] = curD + w;
				pq.push ( { dist[v], v } );
			}
		}
	}

}


void solve()
{


	int n, m;
	cin >> n >> m;
	for ( int i = 0; i < m; i++ )
	{
		ll u, v, w;
		cin >> u >> v >> w;
		adj[u].PB ( { v, w } );
		//adj[v].PB ( { u, w } );
	}

	dijkstra ( 1, n );

	for ( int i = 1; i <= n; i++ )
		cout << dist[i] << " ";
	cout << endl;


	/*

	5 7
	1 3 3
	1 2 2
	1 4 6
	2 0 6
	2 3 7
	0 4 3
	3 4 5


	8 0 2 3 6

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